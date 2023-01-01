#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int firstCollecton[4] = {1,2,3,4};
	int secondCollecton[4] = {3,2,5,4};	
	
	int resultCollection[8] ;
	
	for(int i=0;i<4;i++){
		resultCollection[i]=firstCollecton[i];
	}
	
	for(int j=4;j<=8;j++){
				resultCollection[j]=secondCollecton[j-4];
	}
	for(int i=0;i<8;i++){
	cout<<resultCollection[i];
	}
}