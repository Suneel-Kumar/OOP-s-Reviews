#include<iostream>

using namespace std;

#define n 100

class Stack{
	
	int* arr;
	int top;
	
	public:
		
	Stack(){
		arr = new int[n];
		top = -1;
	}
	
	void push(int x){
		if(top == n-1){
			cout<<"Stack overflow ";
			return;
		}
		top++;
		arr[top] = x;
	}
	
	void pop(){
		if(top == -1){
			cout<<"Stack is Empty, No Element to Pop " <<endl;
			return;
		}
		top--;
	}
	
	int Top(){
		if(top == -1){
			cout<<"Stack is Empty "<<endl;
			return -1;
		}
		return arr[top];
	}
	
	int Empty(){
		return top == -1;
	}
	
};

int main(){
	
	Stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	cout<<st.Top()<<endl;
	st.pop();
	cout<<st.Top()<<endl;
	st.pop();
	st.pop();
	st.pop();
	cout<<st.Empty()<<endl;
	
	return 0;
}

