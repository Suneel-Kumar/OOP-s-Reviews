#include<iostream>

using namespace std;

void replacePi(string s){
	if(s.length() == 0){
		return;
	} 
	
	if(s[0] == 'p' && s[1] == 'i'){
		cout<<"3.14";
		replacePi(s.substr(2));
		
		
	}
	
	
}

int main(){
	
//	int arr[] = {3, 5, 6, 9, 1, 2, 7, 8};
	int arr[] = {3, 2, 1};
	
	int inv = 0;
	
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
		for(int j=i+1; j<sizeof(arr)/sizeof(arr[0]); j++){
			if(arr[i] > arr[j]){
				inv++;
			}
		}
	}

	cout<<inv<<endl;
	
	return 0;
}
