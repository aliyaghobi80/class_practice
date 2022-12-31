#include <iostream>

using namespace std;

int main(int argc, char** argv) {

int number;

cout<<"enter number: ";
cin>>number;

if(number%2==0){
	cout<<"zoj ast"<<"\n";
	cout<<"bar 2 bakhsh Pazir Ast"<<"\n";
	if(number % 4==0){
		cout<<"bar 4 bakhsh Pazir Ast"<<"\n";
	}
	if(number % 5 ==0 ){
		cout<<"bar 5 bakhsh Pazir Ast "<<"\n";
	}
	if(number %6==0){
		cout<<"bar 6 bakhsh Pazir Ast"<<"\n";
	}
}
else {
	cout<<"fard ast"<<"\n";
	if(number % 3==0){
		cout<<"bar 3 bakhsh Pazir Ast "<<"\n";
	}
	if(number % 5 ==0){
		cout<<"bar 5 Bakhsh Pazir Ast "<<"\n";
	}
	if(number % 7 == 0 ){
		cout<<"bar 7 bakhsh Pazir Ast "<<"\n";
	}
}
}