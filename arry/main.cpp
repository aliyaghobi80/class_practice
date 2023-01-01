#include <iostream>
#include <string>
#include <array> 
using namespace std;

int main(int argc, char** argv) {



//collection
int firstCollection[8]= {1, 2, 3, 4, 5, 6, 7, 8};
//length
int arryLength = sizeof(firstCollection)/sizeof(firstCollection[0]);

	cout<<"collection is 1, 2, 3, 4, 5, 6, 7, 8"<<"\n";
	
	cout<<"Enter a number of list: ";

	int input;
	cin>>input;
	int first=0,last=9;
	int middle=0;
	int i=0;
	int index=0;
	middle=(first+last)/2;
	bool flag=false;
	
	while(i<10){
		
	if(firstCollection[middle]==input){
				
	 flag=true;
	 
	}else if(firstCollection[middle]<input){
		
		first=middle+1;
		middle=(first+last)/2;
		
	}else if(firstCollection[middle]>input){
		
		last=middle-1;
		middle=(first+last)/2;
		}
	i++;	
}
	if(flag==1){
		cout<<middle;
	}
	else{
		cout<<"not found";
	}

}


//insertion sort
//    int i, key, j;  
//    for (i = 1; i < n; i++) 
//    {  
//        key = firstCollection[i];  
//        j = i - 1;  
//  
//        /* Move elements of arr[0..i-1], that are  
//        greater than key, to one position ahead  
//        of their current position */
//        while (j >= 0 && firstCollection[j] > key) 
//        {  
//            firstCollection[j + 1] = firstCollection[j];  
//            j = j - 1;  
//        }  
//        firstCollection[j + 1] = key;  
//    }
//
//for(int i=0;i<5;i++){
//	cout<<firstCollection[i];
//}


//lenght arry;
//int al = sizeof(firstCollection)/sizeof(firstCollection[0]);
 
//buble sort
//for(int i= 0;i<5;){
//	for(int j=i <5;j++){
//		if(firstCollection[i]>firstCollection[j]){
//			int result=firstCollection[i];
//			firstCollection[i]=firstCollection[j];
//			firstCollection[j]=result;
//		}
//	}
//}
//
//for(int i=0;i<5;i++){
//	cout<<firstCollection[i];
//}

//tafazol
//for(int i =0;i<3; i++;){
//	
//	for(int j=0;j<3; j++){
//		
//		if(firstCollection[i]!=secondCollection[j]){
//			join[jIndex]=firstCollection[i];
//			cout<<join[jIndex];
//		}
//	}
//}

//shift

//int result [3];
// for(int i=0;i<=2;i++){
//	
//	
//	result[0]=firstCollection[1];
//	result[1]=firstCollection[2];
//	result[2]=firstCollection[3]
// result[i]=firstCollection[i+1];
// cout<<result[i];
//
//}

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


//matrix

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
//cout<<"enter a number 1 to 6";
//cin>>number;
//string jobs[6]={"Programmer","Coder","FrontEnd","BackEnd","FullStack","not job"};
//	cout<<jobs[number];