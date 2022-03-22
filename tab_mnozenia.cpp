#include<iostream>
using namespace std;
int licz (int tab[][10]){
	int i=1, j=1;
	while (i<=10){
		j=1;
		while(j<=10){
			tab[i-1][j-1]=i*j;
			j++;
		}
		i++;
	}
}
int wypisz (int tab[][10]){
	int i=0;
	int j=0;
	while (i<10){
		j=0;
		while(j<10){
			if (tab[i][j]<10){
				cout << tab[i][j]<< "    ";
			}
			if (tab[i][j]>=10){
				cout << tab[i][j]<< "   ";
			}
			j++;
		}
		cout <<endl<< endl;
		i++;
	}
}
int main(){
	int tab[10][10];
	licz (tab);
	wypisz (tab);
	return 0;
}
