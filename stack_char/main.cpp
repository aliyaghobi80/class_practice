#include <iostream>

using namespace std;

char stackChar[5]={'0','0','0','0','0'};

int stackIndex=0;

int pop(){
char output=stackChar[stackIndex-1];
	stackIndex --;
	return output;
}

void push(char input){
	stackChar[stackIndex]=input;
	stackIndex++;
}
int main(int argc, char** argv) {
 
 	int menuItem=0;
 	char input,output;
 	
 	for(;;){
 		
 		cout<<"enter 1 push 2 pop: "<<"\n";
 		cin>>menuItem;
 	
 		if(menuItem==1){
 			cout<<"enter varible: ";
			 cin>>input;
			 push(input);				
		}
		else if(menuItem==2){
		 	
		 	output=pop();
		 	cout<<"value is: "<<output<<"\n";
		}
	 }
}