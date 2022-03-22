#include<iostream>
using namespace std;
int silnia_reku(int n){
	if (n==0 or n==1){
		return 1;
	}
	else{
		return n*silnia_reku(n-1);
	}
	
}
int main(){
	int n;
	cin >> n;
	cout << silnia_reku(n);
	return 0;	
}
