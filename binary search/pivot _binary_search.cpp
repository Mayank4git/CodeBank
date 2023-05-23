// A pivot element is one in array which is greater than its left side as well as its right side.
//or partially sorted array basically
// ex {3,4,5,6,7,1,2} and this is a rotated and sorted array basically.

// pivot ele =  7

#include<iostream>
using namespace std;

int pivotEle(int arr[], int m){

	int s = 0;
	int e = m-1;
	int mid =  s + (e-s)/2;

	while(s<=e){

		if(s == e){
			return s; // if array has single element or array has pivot in the end of array
		}

		if(mid <= e && arr[mid] > arr[mid + 1]){
			return mid;
		} else if(mid >=s && arr[mid] < arr[mid-1]){
			return mid - 1;
		} else if(arr[s] > arr[mid]){
			//left search krenge
			e = mid - 1;
		} else{
			s = mid + 1;
		}
		mid = s+(e-s)/2;
	}
	return -1;
}

int main(){
	int n;
	cout << "enter no of elements" << endl;
	cin >> n;
	int arr[n];
	cout << "enter array elements" << endl;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	int x = pivotEle(arr,n);
}

