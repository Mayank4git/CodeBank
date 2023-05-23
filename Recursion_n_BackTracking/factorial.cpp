//Factorial using Recursion 

#include<iostream>
using namespace std;

int factorial(int num){

	if(num == 0 || num == 1){
		return 1;
	}
    
    return num * factorial(num-1);
}


int main(){
	int n;
	cout << "enter the number" << endl;
	cin >> n;

	int ans = factorial(n);
	cout << "factorial will be " << ans;
}