#include<iostream>

using namespace std;

int main(){
	
//	Find Even & Odd
//	int num;
//	cin>>num;
//	
//	if(num%2==0){
//		cout<<num<<" is Even"<<endl;
//	}
//	else{
//		cout<<num<<" is Odd"<<endl;
//	}

	
//	Find maximum of Three
	int a, b, c;
	cin>>a>>b>>c;
	
	if(a>b){
		if(a>c){
			cout<<"a is max";
		}
		else{
			cout<<"c is max";
		}
	}
	else{
		if(b>c){
			cout<<"b is max";
		}
		else{
			cout<<"c is max";
		}
	}



	return 0;
}

