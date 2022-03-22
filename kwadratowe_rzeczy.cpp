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

class Square{
	public:
		Punkt a;
		Punkt b;
		Punkt c;
		Punkt d;
};

int main (){
	Square kwadrat;
	kwadrat.a.dodawanie();
	kwadrat.b.dodawanie();
	kwadrat.c.dodawanie();
	kwadrat.d.dodawanie();
	double bok1=odleglosc(&kwadrat.a, &kwadrat.b);
	double bok2=odleglosc(&kwadrat.a, &kwadrat.c);
	double bok3=odleglosc(&kwadrat.a, &kwadrat.d);
	double bok;
	if (bok1<bok2){
		bok=bok1;
	}
	if (bok1<bok3){
		bok=bok1;
	}
	if (bok2<bok1){
		bok=bok2;
	}
	if (bok2<bok3){
		bok=bok2;
	}
	if (bok3<bok1){
		bok=bok3;
	}
	if (bok3<bok2){
		bok=bok3;
	}
	double L=4*bok;
	double P=bok*bok;
	cout <<"Oto pole tego kwadratu: "<<P<<endl<<"Oto obwod tego kwadratu: "<<L<<endl;
}
