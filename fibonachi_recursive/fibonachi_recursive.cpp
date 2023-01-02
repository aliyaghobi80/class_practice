#include<iostream>
using namespace std;
int fib(int n) {
   if (n <= 1)
   return n;
   return fib(n-1) + fib(n-2);
}

int main () {
	cout<<"enter n number: ";
   int n; 
   cin>>n;
   int i;
   for(i=0;i<n;i++){
   	   cout<<fib(i)<<" ";
   }

   return 0;
}