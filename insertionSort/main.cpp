#include <iostream>

using namespace std;
int main(int argc, char** argv) {

int numberArray [10] ={2,3,4,5,1,3,4,5,4,0};

	int temp;
	
	for(int i=0;i<10;i++){
		for(int j=i;j>0;j--){
			if(numberArray[j]<=numberArray[j-1]){
				//swap
				int temp =numberArray[j];
				numberArray[j]=numberArray[j-1];
				numberArray[j-1]=temp;
			}
		}
	}
	
	for(int x=0;x<10;x++)
	{
			cout<<numberArray[x]<<"\n";
	}
	
}
