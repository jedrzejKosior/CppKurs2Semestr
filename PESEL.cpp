#include<iostream>
#include<string>
using namespace std;

class PESEL{
	public:
		string pesel;
		PESEL(string pes){
			pesel=pes;
		}
		void sprawdzenie_daty(PESEL &jeden){
			
			//Lata 1800-1899
			if (pesel[2]=='8' and pesel[3]=='0'){
				cout<<"Blad w dacie urodzenia";
			}
			if(pesel[2]=='9'){
				if ((int)pesel[3]<48 and (int)pesel[3]>50){
					cout<<"Blad w dacie urodzenia";
				}
			}
			
			//Lata 1900-1999
			if (pesel[2]=='0' and pesel[3]=='0'){
				cout<<"Blad w dacie urodzenia";
			}
			if(pesel[2]=='1'){
				if ((int)pesel[3]<48 and (int)pesel[3]>50){
					cout<<"Blad w dacie urodzenia";
				}
			}
			
			//Lata 2000-2099
			if (pesel[2]=='2' and pesel[3]=='0'){
				cout<<"Blad w dacie urodzenia";
			}
			if(pesel[2]=='3'){
				if ((int)pesel[3]<48 and (int)pesel[3]>50){
					cout<<"Blad w dacie urodzenia";
				}
			}
			
			//Lata 2100-2199
			if (pesel[2]=='4' and pesel[3]=='0'){
				cout<<"Blad w dacie urodzenia";
			}
			if(pesel[2]=='5'){
				if ((int)pesel[3]<48 and (int)pesel[3]>50){
					cout<<"Blad w dacie urodzenia";
				}
			}
			
			//Lata 2200-2299
			if (pesel[2]=='6' and pesel[3]=='0'){
				cout<<"Blad w dacie urodzenia";
			}
			if(pesel[2]=='7'){
				if ((int)pesel[3]<48 and (int)pesel[3]>50){
					cout<<"Blad w dacie urodzenia";
				}
			}
			cout<<endl;
		}
		
		void sprawdzenie_liczby_kontrolnej(PESEL &jeden){
			int spr=9*((int)pesel[0]-48)+7*((int)pesel[1]-48)+3*((int)pesel[2]-48)+1*((int)pesel[3]-48)+9*((int)pesel[4]-48)+7*((int)pesel[5]-48)+3*((int)pesel[6]-48)+1*((int)pesel[7]-48)+9*((int)pesel[8]-48)+7*((int)pesel[9]-48);
			cout<<spr<<endl;;
			if (((int)pesel[10]-48)!=(spr%10)){
				cout<<"Blad w liczbie kontrolnej";
			}
		}
		
};

int main(){
	PESEL jeden("99601906597");
	jeden.sprawdzenie_daty(jeden);
	jeden.sprawdzenie_liczby_kontrolnej(jeden);
	return 0;
}
