#include <iostream> // Do³¹czamy bibliotekê odpowiedzialna za
                    // operacje wejœcia i wyjœcia
 
using namespace std;
 
int main(int argv, char* arg[]){
  char imie[20];
  cout << "Podaj swoje imie: ";
  cin >> imie;
  cout << "Witaj " << imie << endl;
  return 0;
}
