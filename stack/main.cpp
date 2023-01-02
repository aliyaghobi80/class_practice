#include <iostream>

using namespace std;

int stack[5]={0,0,0,0,0};

int stackIndex=0;
int safindex=0;
int pop(){
 int outPut= stack[safindex];
	safindex++;
	return outPut;
}

void push(int input){
	stack[stackIndex]=input;
	stackIndex++;
}

int main(){
	
	for(;;){
		
		int menuItem;
		int input=0,output=0;
		cout<<"Enter number 1 to push 2 pop: ";
		cin>>menuItem;
		
		if(menuItem==1){
		cout<<"Enter varible to insert stack: ";
		cin>>input;
		push(input);
		}else if(menuItem ==2 ){
			output=pop();
			cout<<"output Is :"<<output;
		}
	}
}


















//stack
//#include <iostream>
//
//using namespace std;
//
//int stack[5]={0,0,0,0,0};
//
//int stackIndex=0;
//void push(int input){
//	stack[stackIndex]=input;
//	stackIndex++;
//}
//int pop(){
//	int outPut= stack[stackIndex -1];
//	stackIndex--;
//	return outPut;
//}
//
//int main(int argc, char** argv) {
//	
//	int menuItem;
//	int input=0,output=0;
//	for(;;){
//		cout<<"Enter 1 for push 2 for pop from stack";
//		cin>>menuItem;
//		
//		if(menuItem==1){
//			cout<<"Enter varible to insert stack";
//			cin>>input;
//			push(input);
//			
//		}else if(menuItem ==2){
//			cout<<"varible is : ";
//			output =pop();
//			cout<<output<<endl;
//		}
//	}
//}