#include <iostream>
#include<vector>
using namespace std;
template < typename T >
class TABLICA
{
public:
    vector <T> tab;
    void uzupelnij(T x)
    {
        tab.push_back(x);
    }
    T maks(){
    	int z=0;
    	T MAX=0;
    	while(z<4){
    		if (tab[z+1]>tab[z]){
    			MAX=tab[z+1];
			}
			z++;
		}
		cout << MAX;
	}
};

int main()
{
    TABLICA <int> nowa;
    int a = 0;
    int zmienna=0;
    while(a<5){
    	cin>>zmienna;
    	nowa.uzupelnij(zmienna);
    	a++;
	}
	nowa.maks();
	
}

