#include <iostream>
#include <vector>
using namespace std;
class Marsjanin{
public:
    int liczbaMarsjanin;
    Marsjanin(int a){
        liczbaMarsjanin = a;
    }
    void Attack(){
        cout<<"Marsjanin numer - "<<liczbaMarsjanin+1<<" atakuje"<<endl;
    };
};
int main() {
    vector<Marsjanin> ms;
    int w;
    int counter=0;
    for(int i=0; i>-1; i++) {
        cout<<"1 - dla dodania marsjanina"<<endl;
        cout<<"2 - dla usuwania marsjanina"<<endl;
        cin>>w;
        if(w==1){
            ms.push_back(counter);
            counter++;
            if(counter>=5){
                for(int j=0;j<counter;j++){
                    ms[j].Attack();
                }
            }

        }
        if(w==2 and ms.size()>=1){
            ms.pop_back();
            counter--;
            cout<<"marsjanin numer - "<< counter+1<<" ukryty"<<endl;
            if(counter>=5){
                for(int j=0;j<counter;j++){
                    ms[j].Attack();
                }
            }

        }
        cout<<"W armii - "<<counter<<" marsjaninow"<<endl;


    }
    return 0;
}
