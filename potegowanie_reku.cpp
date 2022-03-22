#include<iostream>
using namespace std;
int pot_rek(int liczba, int n)
{
    if (n == 1)
        return liczba;
    int s = pot_rek(liczba, n - 1);
    return liczba * s;
}
int main(){
	int n, liczba;
	cout << "Prosze podac wysokosc potegi: ";
	cin >> n;
	cout <<"Prosze podac liczbe do zpotegowania: ";
	cin>>liczba;
	cout << pot_rek(liczba, n);
}
