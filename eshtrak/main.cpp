#include <iostream>

using namespace std;
 
int main(int argc, char** argv) {

	int firstCollectin[5]= {2,1,6,1,8};
	int secondCollectin[5]= {8,4,1,0,2};
	
	int result[5];	
		
	for(int i =0;i<5;i++){
		for(int j=0;j<5;j++){
			if(firstCollectin[i]==secondCollectin[j]){
				result[i]= secondCollectin[j];
				cout<<result[i]<<" ";
			}
		}
	}
	
}
