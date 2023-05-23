// Given an array of n elements containing elements from 0 to n-1, with any of these numbers appearing any number of times, find these repeating numbers in O(n) and using only constant memory space.

#include<iostream>
using namespace std;

int main(){

int n;
cout << "enter no of ele"<<endl;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
	cin >> arr[i];
}

for(int i=0;i<n;i++){
	int count = 0;
	if(arr[i] == arr[i+1]){
		count++;
	}
	if(count > 0){
		cout << "this number is duplicate :"<<arr[i]<<endl;
	}
}


}