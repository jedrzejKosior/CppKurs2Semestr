#include<iostream>
#include<cmath>
using namespace std;

class Punkt{
	public:
		double x;
		double y;
		void dodawanie(){
			cout<<"Podaj wspolrzedne x"<<endl;
			cin>>x;
			cout<<"Podaj wspolrzedne y"<<endl;
			cin>>y;
		}
};

double odleglosc(Punkt *pierwszy, Punkt *drugi){
	double d;
	d=sqrt((drugi->x-pierwszy->x)*(drugi->x-pierwszy->x)+(drugi->y-pierwszy->y)*(drugi->y-pierwszy->y));
	return d;
}

int main(){
	Punkt pierwszy;
	Punkt drugi;
	pierwszy.dodawanie();
	drugi.dodawanie();
	cout << odleglosc(&pierwszy, &drugi);
	return 0;
	
}
