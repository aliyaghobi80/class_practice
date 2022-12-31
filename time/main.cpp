#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	int hour;
	int minute;
	int second;

	
	cin>>hour;
	cin>>minute;
	cin>>second;
	
	
	hour= hour *60 *60 ;
	minute = minute *60;
	second= hour + minute + second + 1;
	
	
	cout<<"All Sumation is: "<<second<<"\n";
	
	
	hour= second / 3600;
	
	minute=second % 3600;
//	minute= second % 60;
	
 	second= minute % 60;
 	minute= minute /60;
 	
	
	cout<<"h:"<<hour<<" M:"<<minute<<" S:"<<second<<"\n";
	
	
}