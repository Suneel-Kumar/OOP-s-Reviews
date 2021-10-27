#include<iostream>

using namespace std;

int main(){
	int arr[6] = {12, 45, 23, 51, 19, 8};
//	cout<<(sizeof(arr)/sizeof(arr[0]));
	for(int i=0; i<(sizeof(arr)/sizeof(arr[0]))-1; i++){
		for(int j=i+1; j<(sizeof(arr)/sizeof(arr[0])); j++){
			if(arr[j]<arr[i]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}	
		}
	}
	
	for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
		cout<<arr[i]<<"\t";
	}
	
	return 0;
}
