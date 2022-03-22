#include<iostream>
#include<regex>
#include<string>
#include<vector>
#include<sstream>
#include<cmath>
using namespace std;
unsigned int ToMinutes(string time){
	//godziny
	int h=0;
	int Minutes=0;
	while (true){
		h++;
		if(time[h]==':'){
			break;
		}
	}
	if (h==1){
		Minutes=(((int)time[0]-48)*60)+(((int)time[2]-48)*10)+((int)time[3]-48);
	}
	if (h==2){
		if ((int)time[0]=='0'){
			Minutes=(((int)time[1]-48)*60)+(((int)time[3]-48)*10)+((int)time[4]-48);
		}
		else{
			Minutes=((((int)time[0]-48)*10)*60)+(((int)time[1]-48)*60)+(((int)time[3]-48)*10)+((int)time[4]-48);
		}
	}
	return Minutes;
}

int main(){
	string time1;
	string time2;
	cout<<"Input first time in HH:MM mode or H:MM"<<endl;
	cin>>time1;
	cout <<"Input second time in HH:MM mode or H:MM"<<endl;
	cin>>time2;
	int minuty1=ToMinutes(time1);
	int minuty2=ToMinutes(time2);
	cout<<minuty1<<endl<<minuty2<<endl;
	return 0;
}
