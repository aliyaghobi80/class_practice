#include <iostream>
#include<string>

using namespace std;


	int convertStringToInt(string num){
		
		int numLength = num.length();
	
		int number=0;
		int asci=0;
		int n=1;
		for(int i=numLength-1;i>=0;i--){
	  		asci=num[i] -'0';
				number=(asci*n)+number;	
			n=n*10;
	}
		return number;
	}
	
	void claculat(int num1 , char op,int num2){
		
	switch (op){
		case  '+' :
		cout<<num1+num2;
		break;
		
		case '-':
		cout<<num1-num2;
		break;
		
		case '*' :
		cout<<num1*num2;
		break;
		
		case '/':
		cout<<num1/num2;
		break;
		
		default:
			cout<<'invalid ';
		break;
	}
	}

int main(int argc, char** argv) {
	
	string num1;
	int number1=0;
	
	char op;
	
	string num2;
	int number2=0;
	
	cout<<"enter num1: ";
	cin>>num1;
	number1	=convertStringToInt(num1);
	
	cout<<"enter operator: + * / - "<<endl;
	cin>>op;
	
	cout<<"enter num2: ";
	cin>>num2;
	number2	=convertStringToInt(num2);
	
	claculat(number1,op,number2);
	
}