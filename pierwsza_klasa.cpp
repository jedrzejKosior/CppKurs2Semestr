#include<iostream>
using namespace std;

class Ulamek{
	public:
		int licznik;
		int mianownik;
		void dodawanie(){
			cout<<"Podaj licznik"<<endl;
			cin>>licznik;
			cout<<"Podaj mianownik"<<endl;
			cin>>mianownik;
			if (mianownik==0){
				while(mianownik==0){
					cout<<"Pamietaj cholero, nie dziel przez zero!"<<endl;
					cin>>mianownik;
				}
			}
		}
		void wypisywanie(){
			cout<<licznik<<"/"<<mianownik<<endl;
		}
};

int main(){
	Ulamek pierwszy;
	pierwszy.dodawanie();
	pierwszy.wypisywanie();
	return 0;
}
