#include<iostream>
using namespace std;
int main(int argc, char** argv) {
	char firstCharToNumber ;
	char secondCharToNumber;

	cout<<"Enter first Char: ";
	cin>>firstCharToNumber;
	cout<<"Enter second Char: ";
	cin>>secondCharToNumber;
	
	int firstNumber = firstCharToNumber;
	int secondNumber = secondCharToNumber;
	
	cout<<"firstNumber ascii is: "<<firstNumber<<" secondNumber ascii is: "<<secondNumber<<endl;


}