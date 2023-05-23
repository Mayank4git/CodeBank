//print prime numbers from 1 to N Range.

#include<iostream>
using namespace std;

bool isPrime(int n){
	if (n == 1 || n == 0){
	  return false;
	}
	
  for(int i=2;i<n;i++){
  	if(n%i == 0){
  		return false;
  	}
  }
  return true;
}

int main(){

	int r;
	cout << "enter no of pime numbers you want to print" << endl;
	cin >> r;

	for(int i=2;i<=r;i++){
		bool x = isPrime(i);
		if(x == true){
			cout << i << " ";
		}
	}
}