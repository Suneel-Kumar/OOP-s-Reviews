#include <iostream>
#include<climits>

using namespace std;

int main(){
	
	int arr[4] = {-1, 4, 7, 2};
	int maxSum = -9999;	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			int sum = 0;
			for(int k=i; k<=j; k++){
				sum += arr[k];
//				cout<<arr[k]<<" ";
			}
			maxSum = max(maxSum, sum);
//			cout<<endl;
		}
	}
	
	cout<<maxSum<<" ";
	
	
	
//	int curr;
//	
//	for(int i=0; i<5; i++){
//		curr = 0;
//		for(int j=i; j<5; j++){
//			curr += arr[j];
//			cout<<curr<<"\n";
//		}
//	}
	
	return 0;
}
