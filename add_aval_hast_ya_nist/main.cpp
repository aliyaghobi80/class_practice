#include <iostream>

using namespace std;

int main(int argc, char** argv) {

int number;
cout<<"Enter a Number: ";

cin>>number;

bool primNum=true;

for(int i=2;i<number /2 ;i++){
	if(number% i==0){
		primNum = false;
	}
		
}
if(primNum){
	cout<<primNum<<" prim";
}
else{
	cout<<primNum<<" not prim";
}

}