#include<iostream>

using namespace std;

void fib(int n){
	int t1 = 0;
	int t2 = 1;
	int nextTerm;
	for(int i=1; i<=n; i++){
		cout<<t1<<" \t";
		nextTerm = t1+t2;
		t1 = t2;
		t2 = nextTerm;
	}	
}

int factorial(int n){
	int fact = 1;
	for(int i=2; i<=n; i++){
		fact *= i;
	}
	return fact;
}

int main(){
	
//	Print Fibonacci Series
//	int n;
//	cin>>n;
//	
//	fib(n);
	
	
	
//	Print Factorial of given number
	int n;
	cin>>n;
	
	int n1 = factorial(n);
	cout<<n1;
	
	return 0;
}
