#include<iostream>
#include<string>
using namespace std;


int palindrom(string napis){
	string odp="";
	int i=napis.length();
	while (i>=0){
		odp=odp+napis[i];
		i--;
	}
	i=1;
	int j=0;
	int wynik=0;
	while (i<=napis.length()){
		if (napis[j]==odp[i]){
			wynik++;
		}
		i++;
		j++;
	cout <<wynik<<endl;
	}
	if (wynik==napis.length()){
		cout<< "It is palindrom"<< endl;
	}
	else{
		cout << "It is not palindrom"<< endl;
	}
}
int main(){
	while (true){
		cout << "Press 1 to exit, and 2 to check the word: ";
		int opcja=0;
		cin >>opcja;
		if (opcja ==1){
			return 0;
		}
		if (opcja==2){
			string napis;
			cout << "Please input a word: ";
			cin >> napis;
			palindrom(napis);	
		}
	}
	return 0;
}
