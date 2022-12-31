#include <iostream>

using namespace std;

int main(int argc, char** argv) {

int firstNumber=0;
int secondNumber=1;
int sumation=0;

	cout<<firstNumber<<"\n"<<secondNumber<<"\n";
	
for(int i=0;i<20;i++){
	
	sumation=firstNumber + secondNumber;
	cout<<sumation<<"\n";
	firstNumber=secondNumber;
	
	secondNumber=sumation;
	
	
}


}