#include <iostream>

using namespace std;

int main(){
	//enter a number coine print how many 100 coin 50 coin 25 coin 10 coin 5 coin 1 coin ? 
	
	int coin;
	
	cout<<"Enter Coin: ";
	cin>>coin;
	
	int coin100;
	int coin50;
	int coin25;
	int coin15;
	int coin10;
	int coin5;
	int coin1;
	
	coin100 = coin / 100;
	coin=coin%100;
	coin50 = coin /50;

	coin= coin % 50;
	coin25 = coin /25;
	
	coin= coin % 25;
	coin15= coin /15;
	
	coin= coin % 15;
	coin10= coin /10;
	
	coin= coin % 10;
	coin5= coin /5;
	
	coin= coin % 5;
	coin1= coin /1;
	
	if(coin100 !=0)
	cout<<"coin100: "<<coin100<<"\n";
	if(coin50 !=0)
	cout<<"coin50: "<<coin50<<"\n";
	if(coin25 !=0)
	cout<<"coin25: "<<coin25<<"\n";
	if(coin15 !=0)
	cout<<"coin15: "<<coin15<<"\n";
	if(coin10 !=0)
	cout<<"coin10: "<<coin10<<"\n";
	if(coin5 !=0)
	cout<<"coin5: "<<coin5<<"\n";
	if(coin1 !=0)
	cout<<"coin1: "<<coin1<<"\n";
	
	
}