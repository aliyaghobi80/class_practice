#include <iostream>

using namespace std;

int main(){
	
	int collection[3] = {1,2,3};
	
	for(int i=1;i<3;i++){
		for(int j=i-1;j<i;j++){
			int temp=collection[j];
			collection[j]=collection[j+1];
			collection[j+1]=temp;
		}
	}
	
	for(int i=0;i<3;i++){
		cout<<collection[i];
	}
	// output is 231 
}