#include <iostream>

using namespace std;

int main(int argc, char** argv) {

int num=5;

for(int i=0;i<num;i++){
	
	for(int s=(num-i);s>1;s--){
		cout<<"  ";
	}
	
	for(int j=0;j<=i;j++){
		cout<<"* ";
	}
	
	cout<<"\n";
}	
	
}