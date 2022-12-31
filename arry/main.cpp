#include <iostream>
#include <string>
#include <array> 
using namespace std;

int main(int argc, char** argv) {


//cout<<"enter a number";
//cin>>number;


int firstCollection[3]= { 3, 4, 5};
 int al = sizeof(firstCollection)/sizeof(firstCollection[0]);
int result [3];
for(int i=al;i>=0;i--){

result[i]=firstCollection[i];
cout<<result[i];

}


}


//eshterak
//     for(int i=0;i<4;i++){
//     if(firstCollection[i]!=i-1)
//        {
//            int ch=0;
//            for(int j=0;j<4;j++)
//                if(firstCollection[i]==secondCollection[j])
//                {
//                 int  ch=1;
//                    break;
//                }
//            if(ch==1)
//                cout<<firstCollection[i]<<"\t";
//        }
//		}


//
//int row=2;
//int col =2;
//
//int mat [row][col];
//
//	for(int i=0;i<row;i++){
//		
//		for(int j=0;j<col;j++){
//			cout<<"Enter the Element "<<i<<" , "<<j<<": ";
//			cin>> mat[i][j];
//		}
//	}
//	
//		for(int i=0;i<row;i++){
//		
//		for(int j=0;j<col;j++){
//			cout<<mat[i][j];
//		}
//			cout<<"\n";
//	}



//int firstCollection[4]= { 1, 3, 5, 8 };
//int secondCollection[4]= { 3, 6, 1, 7 };
//
//int join [4];
//int jindex=0;
//
//for(int i=0;i<=4;i++){
//	
//	for(int j=0;j<4;j++){
//		int flag=0;
//		
//		for(int c=0;c<jindex;c++){
//			
//		if(a[i]==b[i]){
//		
//		}
//		cout<<c;
//		}
//
//	}
//	}


//int number;
//
//cout<<"enter a number";
//cin>>number;
//string jobs[6]={"Programmer","Coder","FrontEnd","BackEnd","FullStack","not job"};
//	cout<<jobs[number];