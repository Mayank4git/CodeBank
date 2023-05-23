#include<iostream>
using namespace std;

int fibonacci(int num){
// base case
	if(num == 1){
		//first term
		return 0;
	}
	if(num == 2){
		//second term
		return 1;
	}
	return fibonacci(num-1) + fibonacci(num-2);
}

int main(){
	int n;
	cout << "enter term you want to see of the fibonacci series" << endl;
	cin >> n;
	int ans = fibonacci(n);
	cout << "final answer is " << ans;
}