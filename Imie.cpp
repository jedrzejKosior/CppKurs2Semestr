#include <iostream> // Do��czamy bibliotek� odpowiedzialna za
                    // operacje wej�cia i wyj�cia
 
using namespace std;
 
int main(int argv, char* arg[]){
  char imie[20];
  cout << "Podaj swoje imie: ";
  cin >> imie;
  cout << "Witaj " << imie << endl;
  return 0;
}
