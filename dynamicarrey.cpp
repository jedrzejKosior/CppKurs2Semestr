#include<iostream>
using namespace std;
int main (){
	int** a = new int*[10];
	for(int i = 0; i < 10; ++i){
    	a[i] = new int[10];
	}
	int z=1;
	for (int i=0; i<10;i++){
		for(int j=0; j<10;j++){
			a[i][j]=z;
			z++;
		} 
	}
	for (int i=0;i<10;i++){
		for (int j=0;j<10;j++){
			if (a[i][j]<10){
				cout << a[i][j]<< "    ";
			}
			if (a[i][j]>=10){
				cout << a[i][j]<< "   ";
			}
		}
		cout << endl<< endl;
	}
	for (int j=0; j<10; j++){
		delete a[j];
	}
	for (int i=0;i<10;i++){
		delete a[i];
	}
	return 0;
}
