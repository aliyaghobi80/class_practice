#include <cmath>
#include <iostream>

using namespace std;

int main() {
	
	int firstNumber;
	int secondNumber;
	int threeNumber;
	
	int result;
	int mood;
	int div;
	

	cout<<"First Number:";
	cin>>firstNumber;
	cout<<"secondNumber:";
	cin>>secondNumber;
	cout<<"threeNumber:";
	cin>>threeNumber;

	
	mood= secondNumber % firstNumber;
	cout<<mood<<"mood";
	div= secondNumber / mood; 
	cout<<div<<"div";
	
	result = threeNumber * div;
	cout<<"result is "<< result;
	
	return 0;
	
}