#include <iostream>

using namespace std;

int main(){
	
	int firstNumberWhile=0;
	int secondNumberWhile=1;
	int sumWhile=0;
	
	//
	while(sumWhile<20){
		cout<<sumWhile<<"\n";
		sumWhile=firstNumberWhile+secondNumberWhile;
		firstNumberWhile=secondNumberWhile;
		secondNumberWhile=sumWhile;
	}
	
	cout<<"*********************"<<"\n";
	
//	int firstNumberFor=0;
//	int secondNumberFor=1;
//	int sumFor=0;
//	
//	for(int i=0;i<18;i++){
//		sumFor=firstNumberFor+secondNumberFor;
//		firstNumberFor=secondNumberFor;
//		secondNumberFor=sumFor;
//		cout<<sumFor<<"\n";
//	}
	
}