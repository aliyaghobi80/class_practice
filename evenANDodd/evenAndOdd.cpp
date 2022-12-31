#include <iostream>

using namespace std;

int main(){
	
	int number;
	
	cout<<"Please Enter number";
	
	cin>>number;
	
	if(number %2==0){
		cout<<"even";
	}
	
	if(number %2 !=0){
		cout<<"odd";
	}
}