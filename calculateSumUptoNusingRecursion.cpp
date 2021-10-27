#include<iostream>

using namespace std;
	
int inc(int n){
	
	if(n > 9){
		return 0;
	}
	
	cout<<n<<endl;
	inc(n+1);
}


int main(){
	
	inc(5);

	return 0;

} 
