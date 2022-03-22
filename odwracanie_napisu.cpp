#include<iostream>
#include<string>
using namespace std;
string odwracanie(string napis){
	string odp="";
	int i=napis.length();
	while (i>=0){
		odp=odp+napis[i];
		i--;
	}
	return odp;
}
int main(){
	string napis;
	cout << "Prosze podac napis: ";
	cin >> napis;
	cout<< "Napis odwrocony: ";
	cout << odwracanie(napis);
	return 0;
}
