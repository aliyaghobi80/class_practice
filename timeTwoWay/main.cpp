#include <iostream>

using namespace std;
int main(int argc, char** argv) {

int hour,minute,second;

cout<<"Please Enter Hour";
cin>>hour;

cout<<"Please Enter minute";
cin>>minute;

cout<<"Please Enter second";
cin>>second;


minute= minute+(second +1) / 60;
second= (second +1) % 60;
hour= hour + (minute /60);
minute= minute % 60;
hour= hour %24;

cout<<hour<<":"<<minute<<":"<<second;

}