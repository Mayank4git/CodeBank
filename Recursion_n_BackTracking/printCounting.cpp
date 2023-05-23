#include<iostream>
using namespace std;

void printCount(int num){

	if(num == 0){ // this is base case to stop recursion part
		return;
	}

	cout << num << " "; //this is processing part
	printCount(num-1); // this is recursive relation/call.
}

int main(){
	int n;
	cout << "enter the number" << endl;
	cin >> n;
	printCount(n);
}