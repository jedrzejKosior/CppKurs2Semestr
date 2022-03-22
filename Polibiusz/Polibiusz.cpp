#include<iostream>
#include<string>
#include<fstream>
using namespace std;
/*ODPALAMY W KONSOLI !!!
Podajemy nazwê programu w cudzys³owie bêd¹c w jego folderze, nastêpnie po spacji bez cudzys³owia nazwê pliku wejsciowego,
potem równie¿ bez spacji i cudzys³owia nazwê pliku wyjsciowego*/
int main(int argc, char *argv[]){
	//TWORZENIE ARRAY 2D
	int z=65;
	char** a = new char*[6];
	for(int i = 1; i < 6; i++){
    	a[i] = new char[6];
    	for(int j=1; j<6;j++){
			if (z==73){
				a[i][j]=(char)z;
				z+=2;
				continue;
			}
			a[i][j]=(char)z;
			z++;
		} 
	}
	
	/*WYPISANIE POLIBIUSZA
	for (int i=1;i<6;i++){
		for (int j=1;j<6;j++){	
			cout << a[i][j]<< "    ";
		}
		cout << endl<< endl;	
	}*/
	
	
    
	ifstream myfile(argv[1]);
	char line[256];
	while(!myfile.eof()){
		myfile.getline(line,256);
	}
	myfile.close();
	string odp;
	
	int dlugosc=0;
	int g=0;
	while(g<256){
		if ((int)line[g]>=65 and (int)line[g]<=90){
			dlugosc++;
		}
		if((int)line[g]>=97 and (int)line[g]<=122){
			dlugosc++;
		}
		if ((int)line[g]==32){
			dlugosc++;
		}
		g++;
	}
	dlugosc-=2;
	//SZYFROWANIE
	for (int k=0; k<dlugosc;k++){
		for (int i=1; i<6; i++){
			for(int j=1; j<6; j++){
			if (line[k]==a[i][j] or line[k]==(char)(a[i][j]+32)){
					odp+=i+'0';
					odp+=j+'0';
					odp+=" ";
				}
				if (line[k]=='j'){
					odp+="2";
					odp+="4";
					odp+=" ";
					break;
				}
			}
		if (line[k]=='j'){
			break;
		}
		}
	}
	//WPIS DO WYJSCIA
	ofstream zapis(argv[2]);
	zapis << odp;
	zapis.close();
	//Wypisanie ewentualne do terminalu
	//cout << odp;
	//DELETE DLA ARRAY 2D
    for(int i = 1; i < 6; ++i) {
        delete[] a[i];   
    }
    delete[] a;
	return 0;
}
