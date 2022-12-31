#include <iostream>

using namespace std;

int main(int argc, char** argv) {

int number;
cout<<"enter a number: ";
cin>>number;

for(int i=number;i>=1;i--){

	for(int s=i;s<number;s++){
		cout<<" ";
	}
	for(int j=1;j<=i;j++){
		cout<<"* ";
	}
	cout<<"\n";
}
for(int i=1;i<=number;i++){
	

	for(int s=i;s<number;s++){
		cout<<" ";
	}
	for(int j=1;j<=i;j++){
		cout<<"* ";
	}
	cout<<"\n";
}

cout<<"------------------"<<endl;
//   *
//  **
// ***

for(int i=0;i<number;i++){
	
	for(int s=number- i ; s>1;s--){
		cout<<"  ";
	}
	
	for(int j=0;j<=i;j++){
		cout<<"* ";
		
	}
	cout<<"\n";
}

cout<<"------------------"<<endl;
//*
//**
//***
int i=0;
while(i<number){
	
	int j=0;
	while(j<=i){
		cout<<"* ";
		j++;
	}
	cout<<"\n";
	i++;
}

cout<<"------------------"<<endl;

//* * *
//* * *
//* * *

for(int i=0;i<number;i++){
	for(int j=0;j<number;j++){
		cout<<"* ";
	}
	cout<<"\n";

}

cout<<"------------------"<<endl;

for(int i = 0; i<number;i++){
	//* 
	//**
	//***
	for(int j=0;j<=i;j++){
		cout<<"*";
	}

	//space
	for(int oi=number-i ;oi>1;oi--){
			cout<<"  ";	
	}
	
	//  *
	// **
	//***
	for(int s=0;s<=i; s++){
		if(s==number-1){
			cout<<"";
		}
		cout<<"*";
	}

	cout<<"\n";
}


for(int i=number-2;i>=0;i--){
	
	//*****
	//***
	//**
	//*
	for(int j=0;j<=i;j++){
		cout<<"*";
	}
	//space
	for(int s=(number-i);s>1;s--){
		cout<<"  ";
	}
	//****
	// ***
	//  **
	//   *
	for(int star=0;star<=i;star++){
		cout<<"*";
	}
	cout<<"\n";
 }


}








//
//for(int i = 0; i<number;i++){
//	//* 
//	//**
//	//***
//	for(int j=0;j<=i;j++){
//		cout<<"* ";
//	}
//
//	//space
//	for(int oi=number-i ;oi>1;oi--){
//		
//			cout<<"    ";	
//	}
//	//  *
//	// **
//	//***
//	for(int s=0;s<=i; s++){
//		cout<<" *";
//	}
//
//	cout<<"\n";
//}
//
//
//for(int i=number-1;i>=0;i--){
//	
//	//*****
//	//***
//	//**
//	//*
//	for(int j=0;j<=i;j++){
//		cout<<"* ";
//	}
//	//space
//	for(int s=(number-i);s>1;s--){
//		cout<<"    ";
//	}
//	//****
//	// ***
//	//  **
//	//   *
//	for(int star=0;star<=i;star++){
//		cout<<" *";
//	}
//	cout<<"\n";
// }












// star pattern

//     *
//   * *
// * * *

//for(int i=0;i<number;i++){
//	
//	for(int s=number- i ; s>1;s--){
//		cout<<"  ";
//	}
//	
//	for(int j=0;j<=i;j++){
//		cout<<"* ";
//		
//	}
//	cout<<"\n";
//}


//star pattern

//*
//**
//***
//****

//int i=0;
//while(i<number){
//	
//	int j=0;
//	while(j<=i){
//		cout<<"* ";
//		j++;
//	}
//	cout<<"\n";
//	i++;
//}

//enter a number and create matrix pattern

//* * *
//* * *
//* * *

//for(int i=0;i<number;i++){
//	for(int j=0;j<number;j++){
//		cout<<"* ";
//	}
//	cout<<"\n";
//
//}