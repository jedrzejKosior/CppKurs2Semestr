#include <iostream>
#include <string.h>
using namespace std;
class Student{
private:
    char *name=new char[10], *surname=new char[20], *kierunek=new char[15];
    int old;

public:
    Student(int a, char *h, char *n, char *s){
        old=a;
        name=h;
        surname=n;
        kierunek=s;
    }
    void check_name_surname() {
        try{
            if(int(name[0])<65 || int(name[0]>90)){
                throw string("Imie musi byc z wielkej litery");
            }
        }
        catch(string f){
            cout<<f<<endl;
        }
        try{
            for(int i =1; i<sizeof(name);i++){
                if(int(name[i])>=65 && int(name[i]<=90)){
                    throw string("w imieniu litery po pierwszej musza byc male");
                }
            }
        }
        catch(string f){
            cout<<f<<endl;
        }
        try{
            if(int(surname[0])<65 || int(surname[0]>90)){
                throw string("Nazwisko musi byc z wielkej litery");
            }
        }
        catch(string f){
            cout<<f<<endl;
        }
        try{
            for(int i =1; i<sizeof(surname);i++){
                if(int(surname[i])>=65 && int(surname[i]<=90)){
                    throw string("w nazwisku litery po pierwszej musza byc male");
                }
            }
        }
        catch(string f){
            cout<<f<<endl;
        }
    }
    void check_age(){

        try{
            if(old<=10 || old>=100){
                throw string("Bledny wiek");
            }
        }
        catch(string p){
            cout<<p<<endl;
        }

    }
    void check_kierunek(){
        try{
            if(strcmp(kierunek, "informatyka")!=0 && strcmp(kierunek, "ekonomia")!=0 && strcmp(kierunek, "fizyka")!=0 && strcmp(kierunek, "filozofia")!=0 && strcmp(kierunek, "matematyka")!=0)
            {
                throw string("Niema takiego kierunku");
            }
        }
        catch(string p){
            cout<<p<<endl;
        }
    }



};
int main() {
    char *imie=new char[10], *nazwisko=new char[20], *kierunek=new char[15];
    int wiek;
    cout<<"Imie"<<endl;
    cin>>imie;
    cout<<"Nazwisko"<<endl;
    cin>>nazwisko;
    cout<<"Kierunek"<<endl;
    cin>>kierunek;
    cout<<"Wiek"<<endl;
    cin>>wiek;
    Student std1(wiek, imie, nazwisko, kierunek);
    std1.check_name_surname();
    std1.check_age();
    std1.check_kierunek();
    return 0;
}
