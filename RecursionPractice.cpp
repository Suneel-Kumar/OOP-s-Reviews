#include<iostream>
#include<cmath>
#include<climits>
#include<set>
#include<stack>
using namespace std;

//int firstOcc(int arr[], int n, int i, int key){
//	if(i==n){
//		return -1;
//	}
//	if(arr[i] == key){
//		return i;
//	}
//	firstOcc(arr, n, i+1, key);
//}
//		 int arr[] = {4, 2, 1, 2, 5, 2, 7};
//		 cout<<firstOcc(arr, 7, 0, 4)<<endl;

//int lastOcc(int arr[], int n, int i, int key){
//	if(i==n){
//		return -1;
//	}
//	int restArray = lastOcc(arr, n, i+1, key);
//	
//	if(restArray != -1){
//		return restArray;
//	}
//	if(arr[i] == key){
//		return i;
//	}
//	return -1;
//	
//}
//	int arr[] = {4, 2, 1, 2, 5, 2, 7};
//	cout<<lastOcc(arr, 7, 0, 2)<<endl;
//void reversed(string str){
//	// binod;
//	if(str.length==0){
//		return;
//	} 
//	reversed(str.substr(1));
//	cout<<str[0];
//}
//	reversed("binod");

//string removeDup(string str){
//	if(str.length()==0){
//		return;
//	}
//	char ch = str[0];
//	string remove = removeDup(str.substr(1));
//	if(ch == remove[0]){
//		return ans
//	}
//	
//}

//void firstRepeatingElement(int arr[], int n){
//	int min = -1;
//	set<int> mySet;
//	for(int i=n-1; i>=0; i--){
//		if(mySet.find(arr[i]) != mySet.end()){
//			min = i;
//		}else{
//			mySet.insert(arr[i]);
//		}
//	}
//	
//	if(min != -1){
//		cout<<"the first Repeating element is " <<arr[min]<<endl;
//	}
//	else{
//		cout << "There are no repeating elements"<<endl; 
//	}
//}

//void firstRepeatingElement(int arr[], int n){
//	int min = -1;
//	set<int> mySet;
//	for(int i=n-1; i>=0; i--){
//		if(mySet.find(arr[i]) != mySet.end()){
//			min = i;
//		}
//		else{
//			mySet.insert(arr[i]);
//		}
//	}
//	
//	if(min != -1){
//		cout<<"The first Repeating element is "<<arr[min]<<endl;
//	}
//	else{
//		cout<<"There are no repeating elements " <<endl;
//	}
//}
//	int arr[] = {10, 5, 3, 4, 3, 5, 6};
//	int n = sizeof(arr)/sizeof(arr[0]);
//	firstRepeatingElement(arr, n);
//
//void reverseSentence(string s){
//	stack<string> stc;
//	for(int i=0; i<s.length(); i++){
//		string word = "";
//		while(s[i] !=' ' && i<s.length()){
//			word += s[i];
//			i++;
//		}
//		stc.push(word);
//	}
//}

//void secondLargets(int arr[], int n){
//	if(n<2){
//		return cout<<"Second Largest element does not exist ";
//	}
//	
//	int larger = INT_MIN;
//	int secondLarger = INT_MIN;
//	// {-1, 7, 1, 34, 18};
//	for(int i=0; i<n; i++){
//		if(arr[i]>larger){
//			secondLarger = larger;
//			larger = arr[i];
//		}
//		
//		if(arr[i] != larger && arr[i] > secondLarger){
//			secondLarger = arr[i];
//		}
//	}
//	
//	if(secondLarger == INT_MIN){
//		cout<<"second larger element does not exist ";
//	}
//	else{
//		cout<<"Second Largest " <<secondLarger<<endl;
//	}
//}

//void secondLargest(int arr[], int n){
//	if(n<2){
//		cout<<"Second larger element not exist";
//	}
//	int largest = INT_MIN;
//	int secondLargest = INT_MIN;
//	
//	// {-1, 7, 1, 34, 18};
//	for(int i=0; i<n; i++){
//		if(arr[i]>largest){
//			secondLargest = largest;
//			largest = arr[i];
//		}
//		
//		if(arr[i] != largest && arr[i] > secondLargest){
//			secondLargest = arr[i];
//		}
//	}
//	cout<<"Second Largest "<<secondLargest<<endl;
//}
//	int arr[] = {-1, 7, 1, 34, 18};
//	int n = sizeof(arr)/sizeof(arr[0]);
//	secondLargest(arr, n);
//	

int main(){
	
	
	
	return 0;
}
