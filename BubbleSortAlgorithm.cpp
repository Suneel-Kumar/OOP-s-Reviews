#include<iostream>

using namespace std;

int main(){
	
	int arr[6] = {12, 45, 23, 51, 19, 8};
	int sizeOfArr = sizeof(arr)/sizeof(arr[0]);
	
	int counter = 1;
	while(counter<sizeOfArr){
		for(int i=0; i<sizeOfArr-counter; i++){
			if(arr[i]>arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}	
		}
		counter++;
	}
	
	for(int i=0; i<sizeOfArr; i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
