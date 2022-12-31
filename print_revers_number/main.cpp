#include <iostream>

using namespace std;

int main(){


	int miliard;
	int milion;
	int sadHezar;
	int dahHezar;
	int hezar;
	int sad;
	int dah;
	int yek;
	
	miliard = number / 1000000000;
	number= number%    1000000000;
	
	milion= number / 1000000;
	number= number%	 1000000;
	
	sadHezar= number / 100000;
	number= number%    100000;
		
	dahHezar= number / 10000;
	number= number%    10000;
	
	hezar= number / 1000;
	number= number%1000;
	
	sad= number / 100;
	number= number%100;
	
	dah=number/10;
	number=number%10;
	
	yek=number /1;
	number= number%1;
	
	if(yek!=0){
		cout<<yek;
	}
	if(dah!=0){
	cout<<dah;
	}
	if(sad!=0){
	cout<<sad;
	}
	if(hezar!=0){
	cout<<hezar;
	}
	if(dahHezar!=0){
	cout<<dahHezar;
	}
	if(sadHezar!=0){
	cout<<sadHezar;
	}
	if(milion!=0){
	cout<<milion;
	}
	if(miliard!=0){
	cout<<miliard;
	}
	 	

}

//google way 
//int number, reminder, reverse = 0;
//	
//	cout << "Please Enter the Number that you want to Reverse  =  ";
//	cin >> number;
//	
//	while (number > 0)
//	{
//    	reminder = number % 10;
//    	reverse = reverse * 10 + reminder;
//    	number = number / 10;
//	}
//	cout << "\nReverse of given Number = " << reverse;
//		

	 
//second way
//	string input;
//	string output;
//	
//	cout<<"Enter a Number: ";
//	cin>>input;
//
//	for(int i=input.length();i>=0;i--){
//		output +=input[i];
//	}
//	cout<<output;
//	


//first way
//	int miliard;
//	int milion;
//	int sadHezar;
//	int dahHezar;
//	int hezar;
//	int sad;
//	int dah;
//	int yek;
//	
//	miliard = number / 1000000000;
//	number= number%    1000000000;
//	
//	milion= number / 1000000;
//	number= number%	 1000000;
//	
//	sadHezar= number / 100000;
//	number= number%    100000;
//		
//	dahHezar= number / 10000;
//	number= number%    10000;
//	
//	hezar= number / 1000;
//	number= number%1000;
//	
//	sad= number / 100;
//	number= number%100;
//	
//	dah=number/10;
//	number=number%10;
//	
//	yek=number /1;
//	number= number%1;
//	
//	if(yek!=0){
//		cout<<yek;
//	}
//	if(dah!=0){
//	cout<<dah;
//	}
//	if(sad!=0){
//	cout<<sad;
//	}
//	if(hezar!=0){
//	cout<<hezar;
//	}
//	if(dahHezar!=0){
//	cout<<dahHezar;
//	}
//	if(sadHezar!=0){
//	cout<<sadHezar;
//	}
//	if(milion!=0){
//	cout<<milion;
//	}
//	if(miliard!=0){
//	cout<<miliard;
//	}