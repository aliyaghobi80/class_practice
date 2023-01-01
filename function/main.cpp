#include <iostream>

using namespace std;


int sumation(int firstNumber,int secondNumber)
{
	return firstNumber + secondNumber;	
}



int main(int argc, char** argv) {
	
	int firstNumber;
	int secondNumber;
	
	cout<<"enter firstNumber";
	cin>>firstNumber;
	
	cout<<"enter secondNumber";
	cin>>secondNumber;
	
int sumationIs= sumation(firstNumber,secondNumber);

cout<<"sumation is: "<<sumationIs;
}