#include<iostream>
using namespace std;
int silnia (int n){
	int odp=1;
	int i=2;
	while (i<=n){
		odp=odp*i;
		i++;
		//cout << odp<< " " << i;
	}
	cout << odp;
}
int main (){
	int n;
	cin >> n;
	silnia (n);
	return 0;
}
