#include<iostream>
#include<string>
using namespace std;

class Dziecko{
	public:
		string imie, nazwisko, wiek, szkola;
		friend class Rodzic;
		void dodawanie(){
			cout<<"DANE DZIECKA"<<endl<<"Podaj imie: ";
			cin>>imie;
			cout<<"Podaj nazwisko: ";
			cin>>nazwisko;
			cout<<"Podaj wiek: ";
			cin>>wiek;
			cout<<"Podaj szkole: ";
			cin>>szkola;
			cout<<endl;
		}
};

class Rodzic{
	public:
		string imie, nazwisko, wiek, im_dziecka;
		Dziecko *dziecko;
		void dodawanie(){
			cout<<"DANE RODZICA"<<endl<<"Podaj imie: ";
			cin>>imie;
			cout<<"Podaj nazwisko: ";
			cin>>nazwisko;
			cout<<"Podaj wiek: ";
			cin>>wiek;
			cout<<"Podaj imie dziecka: ";
			cin>>im_dziecka;
		}
		void zmien_mu_szkole(){
			string nowa_szkola;
			cout <<"Podaj nazwe nowej szkoly: ";
			cin>>nowa_szkola;
			dziecko->szkola=nowa_szkola;
		}
		
};

int main (){
	Dziecko pierworodny;
	Rodzic opiekun;
	opiekun.dziecko=&pierworodny;
	pierworodny.dodawanie();
	opiekun.dodawanie();
	opiekun.zmien_mu_szkole();
	cout << pierworodny.szkola;
}
