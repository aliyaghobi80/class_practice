#include <iostream>

#include <math.h>

using namespace std;


int main(int argc, char** argv) {
	
	float a;
	float b;
	float c;
	
	
	
	float result;
	
	cout<<"Please Enter a:";
	cin>>a;
	cout<<"Please Enter b:";
	cin>>b;
	cout<<"Please Enter c:";
	cin>>c;
	

	 
	result=(b*b)-(4*a*c);
	
	float x=(-b)/(2*a);
	float x1=((-b)+sqrt(result))/(2*a);
	float x2=((-b)-sqrt(result))/(2*a);
	
	cout<<"delta is: "<<result<<"\n"
	<<"if Ans==0: "<< x<<"\n"
	<< "if Ans>0: "<<"ans1: "<<x1<<"\n"
	<<"ans2: "<<x2<<endl; 

	
}


//
//    if(result == 0)
//
//    {
//
//        cout<<"one answer:\n"<<"x= "<<(-b)/(2*a);
//
//    }
//
//    else if(result > 0)
//
//    {
//
//        cout<<"Two answer:\n"<<"x1= "<<((-b)+sqrt(delta))/(2*a);
//
//        cout<<"\tx2= "<<((-b)-sqrt(delta))/(2*a);
//
//    }
//	 else{
//	       cout<<"Not answer";
//    }