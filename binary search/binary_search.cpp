//binary search algorithm for search an element in O(log n) where n is input in array.
//array should be always in sorted order 

#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){

	int s = 0;
	int e = n-1;
	int m = s + (e-s)/2;
	int res = -1;

	while(s<=e){
		if(arr[m] == key){
			res = m;
			return res;
		}
		else if(arr[m] < key){
			s = m + 1;
		}
		else{
			e = m - 1;
		}
		m = s + (e-s)/2;	
	}
	return res;
}

int main(){
	int n,key;
	cout << "enter number of elements" <<endl;
	cin >> n;
	int arr[n];
	cout << "enter elements in array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<< "element you want to search"<<endl;
	cin >> key;

	int index = binarySearch(arr,n,key);
	if(index != -1){
		cout << "element found at index : " << index <<endl;
	}
	else {
		cout << "element not found"<<endl;
	}
}