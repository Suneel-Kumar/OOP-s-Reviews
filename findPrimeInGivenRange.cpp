#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int num){
	int flag = 0;
	for(int i=2; i<=sqrt(num); i++){
		if(num%i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	
	int a, b;
	cout<<"Enter two numbers of your choice ";
	cin>>a>>b;
	
	for(int i=a; i<=b; i++){
		if(isPrime(i)){
			cout<<i<<"\t";
		}
	}
	
	return 0;
}
