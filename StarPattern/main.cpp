#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	int number;
	
	cout<<"Enter number:";
	
	cin>>number;
	
	int rev=0;
	int num2=0;
	while(number>0){
	num2 = (num2 * 10) + (number % 10);
        number /= 10;
		
	}
	cout<<"reversNumber is : "<<num2;
}