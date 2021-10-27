#include<iostream>

using namespace std;

int Calsum(int n){
	int sum = 0;
	for(int i=1; i<=n; i++){
		sum += i;
	}
	return sum;
}

int main(){
	
	int n;
	cin>>n;
	
	cout<<Calsum(n)<<endl;
	
	return 0;
	
}
