#include<iostream>

using namespace std;

int sum(int n){
	if(n==0){
		return 0;
	}
	int preSum = sum(n-1);
	return n+preSum;
}

int main(){
	
	int n1 = sum(3);
	cout<<n1<<endl;
	
	return 0;
}
