#include<iostream>
using namespace std;

int main(){
	
//	**print rectangle pattern**

//	int row, col;
//	cout<<"Enter rows and columns to print rectangle pattern ";
//	cin>>row>>col;
//	
//	for(int i=1; i<=row; i++){
//		for(int j=1; j<=col; j++){
//			cout<<"*"<<" ";
//		}
//		cout<<endl;
//	}


//	**print Hollow rectangle pattern**

//	int row, col;
//	cout<<"Enter row and col to print hollow rectangle pattern ";
//	cin>>row>>col;
//	
//	for(int i=1; i<=row; i++){
//		for(int j=1; j<=col; j++){
//			if(i==1 || i==row){
//				cout<<"* ";
//			}else if(j==1 || j==col){
//				cout<<"* ";
//			}
//			else{
//				cout<<"  ";
//			}
//		}
//		cout<<endl;
//	}


//	Inverted half pyramid
	
//	int n;
//	cout<<"Enter number to print inverted half pyramid ";
//	cin>>n;
//	
//	for(int i=n; i>0; i--){
//		for(int j=i; j>0; j--){
//			cout<<"* ";
//		}
//		cout<<endl;
//	} 


//	Half pyramid after 180* rotation

//	int n;
//	cout<<"Enter number to print inverted half pyramid ";
//	cin>>n;
	
//	for(int i=1; i<=n; i++){
//		for(int j=1; j<=n; j++){
//			if(j<=n-i){
//				cout<<"  ";
//			}else{
//				cout<<"* ";
//			}
//		}
//		cout<<endl;
//	}


//	Printing Half Pyramid	

//	int n;
//	cout<<"Enter number to print inverted half pyramid ";
//	cin>>n;
//	
//	for(int i=1; i<=n; i++){
//		for(int j=1; j<=i; j++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}


//	Print half pyramid using numbers

//	for(int i=1; i<=5; i++){
//		for(int j=1; j<=i; j++){
//			cout<<i<<" ";
//		}
//		cout<<endl;
//	}


//	printing Floyd's Triangle
	
//	int count = 1;
//	for(int i=1; i<=5; i++){
//		for(int j=1; j<=i; j++){
//			cout<<count<<" ";
//			count++;
//		}
//		cout<<endl;
//	}	

//	Butterfly Pattern
//	int n;
//	cin>>n;
//
//	for(int i=1; i<=n; i++){
//		for(int j=1; j<=i; j++){
//			cout<<"* ";
//		}
//		int space = 2*n - 2*i;
//		for(int j=1; j<=space; j++){
//			cout<<"  ";
//		}
//		for(int j=1; j<=i; j++){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
//	for(int i=n; i>=1; i--){
//		for(int j=1; j<=i; j++){
//			cout<<"* ";
//		}
//		int space = 2*n - 2*i;
//		for(int j=1; j<=space; j++){
//			cout<<"  ";
//		}
//		for(int j=1; j<=i; j++){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
//	
	
//	Print Inverted pattern
	for(int i=1; i<=5; i++){
		for(int j=5; j>=1; j--){
			cout<<i<<' ';
		}
		cout<<endl;
	}
	
	return 0;
}
