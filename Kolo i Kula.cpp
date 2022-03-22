#include<iostream>
#define M_PI 3.14
using namespace std;
class Kolo{
	public:
		double x, y, r;
		void dodawanie(){
			cout<<"Prosze podac w kolejnosci x, y, r: ";
			cin>>x>>y>>r;
		}
		
		double pole1(){
			return M_PI*r*r;
		}
};

class Kula : public Kolo{
	public:
		double z;
		dodawanie(){
			cout<<endl<<"Prosze podac wartosci: ";
			cin>>z>>x>>y>>r;
		}
		double pole2(){
			return 4*pole1();
		}
};

int main (){
	Kolo jeden;
	jeden.dodawanie();
	cout<<jeden.pole1();
	Kula dwa;
	dwa.dodawanie();
	cout<<dwa.pole2();
	return 0;
}
