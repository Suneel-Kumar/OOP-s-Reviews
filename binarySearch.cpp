#include<iostream>

using namespace std;

int binarySearch(int arr[], int n, int key){
	int s = 0;
	int e = n;
	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid] == key){
			return mid; 
		}
		else if(arr[mid]>key){
			e=mid-1;
		}else{
			s=mid+1;
		}
	}
	return -1;
}

int main(){
	
	int n, key;
	cout<<"Enter size of the arr ";
	cin>>n;
	
	int arr[n];
	for(int i=1; i<=n; i++){
		cin>>arr[i];
	}
	
	cout<<"Enter key to Search in arr ";
	cin>>key;
	cout<<binarySearch(arr, n, key);
	
	return 0;
}
