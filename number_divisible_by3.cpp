#include<iostream>

using namespace std;

int main(){
	
//	for(int i=1; i<=100; i++){
//		if(i%3==0){
//			continue;
//		}
//		cout<<i<<" \t";
//	}


//	**check isPrime**

//	int n;
//	cout<<"Enter a number ";
//	cin>>n;
//	int i;
//	for(i=2; i<n; i++){
//		if(n%i==0){
//			cout<<"Not Prime"<<endl;
//			break;
//		}
//	}
//	
//	if (i==n){
//	cout<<"Prime Number "<<endl;
//}
	
	
//	**find prime number in a given range**

	int a,b;
	cout<<"Enter range for prime number "<<endl;
	cin>>a>>b;
	
	for(int num=a; num<=b; num++){
		int i;
		for(i=2; i<num; i++){
			if(num%i==0){
				break;
			}
		}
		if(i==num)
		cout<<i<<"\t";
	}
	
	
	
		
	return 0;
}
