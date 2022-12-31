#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	int inputNumber;
	
	cout<<"please Enter A Number: ";
	
	cin>>inputNumber;
	
	if(inputNumber %2==0){
		cout<<"Zoge";
		if(inputNumber % 2==0){
			cout<<"devide by 2 yes";
			
		}
		if(inputNumber %4==0){
			cout<<"devide By 4 yes";
		}
		if(inputNumber %5==0){
			cout<<"devide By 5: yes";
		}
		if(inputNumber%6==0){
			cout<<"devide by 6 : yes";
		}
	}
	else {
		cout<<"Fard";
	}
}