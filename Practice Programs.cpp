#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int sum(int n){
	if(n==0){
		return 0;
	}
	int preSum = sum(n-1);
	return n + preSum;
}

int power(int n, int p){
	if(p==0){
		return 1;
	}
	
	int prePow = power(n, p-1);
	return n*prePow;
}

int fact(int n){
	if(n==0){
		return 1;
	}
	int preFact = fact(n-1);
	return n*preFact;
}

int main(){
		 
	cout<<sum(4);	
	
	
	return 0;
}

