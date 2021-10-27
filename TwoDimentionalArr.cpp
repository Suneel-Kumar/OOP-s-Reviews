#include<iostream>

using namespace std;

int main(){
	
	int n, m;
	cin>>n>>m;
	
	int arr[n][m];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}
//	
	
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
//		cout<<"\n";
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	
//	Transpose of a given matrix;

//	int A[3][3] = {{1,2 3}, {4, 5, 6}, {7, 8, 9}};
	
//	for(int i=0; i<n; i++){
//		for(int j=0; j<m; j++){
//			int temp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = temp;		
//		}
//	}
//	
//	for(int i=0; i<n; i++){
//		for(int j=0; i<m; j++){
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<"\n";
//	}
	return 0;
}
