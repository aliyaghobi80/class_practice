#include <iostream>

using namespace std;

int main(int argc, char** argv) {

int year=12;
int month;
int week=0;
int day;

int shanbe=0;
int yekShanbe=1;
int doShanbe=2;
int seShanbe=3;
int charShanbe=4;
int panjShanbe=5;
int jome=6;

int farvardin=yekShanbe;
int ordibehesht=charShanbe;
int khordad=shanbe;
int tir=seShanbe;
int mordad=jome;
int shahrivar= doShanbe;
int mehr=panjShanbe;
int aban=shanbe;
int azar= doShanbe;
int dey= charShanbe;
int bahman= jome;
int esphand= yekShanbe;




cout<<"Enter day 1 ta 31:";
cin>>day;


cout<<"Enter month 1 ta 12 :";
cin>>month;

int monthTemp;

	if(month>6 && month<12){
		monthTemp = 30;
	}
	else if(month >=1 && month <6){
		monthTemp= 31;
	}
	
    day=day % 7 ;
	week = day +month;
	
	if(month==1){
		cout<<"farvardin ";
	}
	if(month==2){
		cout<<"ordibehsht ";
	}
	if(month==3){
		cout<<"khordad ";
	}
	if(month==4){  
		cout<<"tir ";
	}
	if(month==5){
		cout<<"mordad ";
	}
	if(month==6){
		cout<<"shahrivar ";
	}
	if(month==7){
		cout<<"mehr ";
	}
	if(month==8){
		cout<<"aban ";
	}
	if(month==9){
		cout<<"azar ";
	}
	if(month==10){
		cout<<"dey ";
	}
	if(month==11){
		cout<<"bahman ";
	}
	if(month==12){
		cout<<"esfand ";
	}
		if(week >6 ){
			week=week %7;
			
		}
	if(week==0){
		cout<<"shanbe";
	}
	if(week==1){
		cout<<"yekShanbe";
	}
	if(week==2){
		cout<<"doShanbe";
	}
	if(week==3){
		cout<<"seShanbe";
	}
	if(week==4){
		cout<<"charShanbe";
	}
	if(week==5){
		cout<<"panjShanbe";
	}
	if(week==6){
		cout<<"jome";
	}
}