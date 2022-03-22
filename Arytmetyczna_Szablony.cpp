#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
template<class typ>
class Mean
{
	public:
		vector<typ>v1;
		vector<typ>v2;
		Mean(const vector<typ>vector1 , const vector<typ>vector2)
		{
			for(int i = 0 ; i< vector1.size();i++)
			{
				v1.emplace_back(vector1[i]);
				v2.emplace_back(vector2[i]);
			}
		}
		void Wypisz()
		{
			for(int i = 0 ; i< v1.size();i++)
			{
				cout<<v1[i]<<" ";
			}
			cout<<endl;
			for(int i = 0 ; i< v2.size();i++)
			{
				cout<<v2[i]<<" ";
			}
			cout<<endl;
		}
		typ Srednia()
		{
			typ sum1 = accumulate(v1.begin(),v1.end(),0);
			typ sum2 = accumulate(v2.begin(),v2.end(),0);
			typ suma = sum1+sum2;
			typ srednia = suma/(v1.size()+v2.size());	
			return srednia;
		}
};
int main()
{
	vector<double>v1={1,2,3};
	vector<double>v2={4,5,6};
	Mean<double>*srednia = new Mean<double>(v1,v2);
	srednia->Wypisz();
	cout<<srednia->Srednia();
}
