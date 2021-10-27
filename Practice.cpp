#include<iostream>
#include<cmath>
#include<climits>

using namespace std;

class node{
	public:
		int data;
		node* next;
		node(int val){
			data = val;
			next = NULL;
		}
};

void insertAtTail(node* &head, int val){
	if(head == NULL){
		head=n;
		return ;
	}
	node* n = new node(val);
	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = n;
}

void display(node* head){
	node* temp = head;
	while(temp != NULL){
		cout<<temp->next;
		temp = temp->next;
	}
}

int main(){
	
	int n = 7;
	int arr[] = {4, 2, 1, 2, 5, 2, 7};
	
//	cout<<firstOccurrence(arr, n, 0, 2)<<endl;
	cout<<lastOccurrence(arr, n, 0, 2)<<endl;	
	
	return 0;
}
