#include<iostream>

using namespace std;

int linearSearch(int arr[], int n, int key){
	for(int i=0; i<n; i++){
		if(arr[i] == key){
			return i;
		}
	}
	return -1;
}

int main(){
	
	int n, key;
	cout<<"Enter the size of the arr ";
	cin>>n;
	
	int arr[n];
	for(int i=1; i<=n; i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the element to Search "<<endl;
	cin>>key;
	
	cout<<linearSearch(arr, n, key);
	
	return 0;
}
