#include<iostream>
using namespace std;
pot(int n, int liczba){
	int i=0;
	int odp=liczba;
	while (i<n-1){
		odp=odp*liczba;
		i++;
	}
	return odp;
}
int main(){
	int n, liczba;
	cout << "Prosze podac wysokosc potegi: ";
	cin >> n;
	cout <<"Prosze podac liczbe do zpotegowania: ";
	cin>>liczba;
	cout << pot(n, liczba);
	return 0;
}
