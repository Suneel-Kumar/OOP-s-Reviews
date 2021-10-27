#include<iostream>

using namespace std;

int main(){
	
	int num;
	cout<<"Enter a number ";
	cin>>num;
	
	int div = 2;
	
	while (div<num){
		if (num%div==0){
			cout<<"Not Prime"<<endl;
			break;	
		}
		else{
			div=div+1;
		}
	}
	cout<<"Prime number"<<endl;
	return 0;
}
