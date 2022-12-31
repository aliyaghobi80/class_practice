#include <iostream>

using namespace std;
int main(int argc, char** argv) {

	float temperature;
	
	float celsius;
	float fahrenheit;
	float kelvin;
	
	cout<<"Enter Temperature: ";
	cin>> temperature;
	
	fahrenheit= temperature* 1.8 +32;
	
	celsius= (fahrenheit -32) / 1.8;
	
	kelvin= celsius +273.15;
	
	cout<<"fahrenheit: "<<fahrenheit<<"\t"<<"celsius is: "<<celsius<<"\t"<< "kelvin is"<<kelvin<<endl;
}