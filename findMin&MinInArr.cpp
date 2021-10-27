#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int arr[4] = {10, 20, 30, 40};
	
	int maxNo = INT_MAX;
	int minNo = INT_MIN;
	
	for(int i=0; i<arr[4]; i++){
		maxNo = max(maxNo, arr[i]);
//		if(arr[i]>maxNo){
//			maxNo = arr[i];
//		}
		minNo = min(minNo, arr[i]);
//		if(arr[i]<minNo){
//			minNo = arr[i];
//		}
	}
	
	cout<<maxNo<<" "<<minNo;
	return 0;
}
