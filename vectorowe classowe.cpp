#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

class Vector{
	public:
		vector<int> strzaleczka;
		void UniformFill(int value=2){
			int i=0;
			while (i<10){
				strzaleczka.push_back(value);
				i++;
			}
		}
		void wyswietlanie(){
			int i=0;
			while (i<10){
				cout<<strzaleczka[i]<<" ";
				i++;
			}
		}
		void IncrementalFill(int start, int step){
			strzaleczka.clear();
			int i=0;
			while (i<10){
				strzaleczka.push_back(start+step*i);
				i++;
			}
		}
		void RandomFill(){
			strzaleczka.clear();
			int i=0;
			while (i<10){
				int x=rand()%50+1;
				strzaleczka.push_back(x);
				i++;
			}
		}
};

int main(){
	Vector jeden;
	jeden.UniformFill();
	jeden.wyswietlanie();
	jeden.IncrementalFill(5,1);
	cout<<endl;
	jeden.wyswietlanie();
	cout<<endl;
	jeden.RandomFill();
	jeden.wyswietlanie();
	cout<<endl;

	return 0;
}
