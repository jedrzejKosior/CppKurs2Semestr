#include<iostream>
using namespace std;
class Complex{
	public:
		double rzeczywista;
		double urojona;
		void dodawanie(){
			cout<<"Podaj czesc rzeczywista: ";
			cin>> rzeczywista;
			cout<< "Podaj czesc urojona: ";
			cin>> urojona;
		}
		Complex (int rzecz, int uroj){
			rzeczywista=rzecz;
			urojona=uroj;
		}
	friend Complex operator+(const Complex & c1, const Complex & c2);
	friend ostream & operator <<(ostream &out, Complex & c3);
};


Complex operator +(const Complex &c1, const Complex &c2){
	return Complex(c1.rzeczywista + c2.rzeczywista, c1.urojona+c2.urojona);
}

ostream & operator <<(ostream & out, Complex & c3){
	out << c3.rzeczywista << "+"<<c3.urojona<<"i"<<endl;
	return out;
}


int main (){
	Complex c1(5,2),c2(3,1);
	Complex c3=c1+c2;
/*	cout<<"Pierwsza zespolona"<<endl;
	c1.dodawanie();
	cout<<"Druga zespolona"<<endl;
	c2.dodawanie();*/
	cout<<c3;
/*	cout<<zespolona.rzeczywista;
	cout<<endl<<zespolona.urojona;*/
	return 0;
}
