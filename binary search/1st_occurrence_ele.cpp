// Given a sorted array arr[] with possibly duplicate elements, the task is to find indexes of the first occurrences of an element x in the given array. 

// Examples: 

// Input : arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}, x = 5
// Output : First Occurrence = 2

#include<iostream>
using namespace std;

int firstOccurrence(int arr[],int c,int k){

	int s =0;
	int e = c-1;
	int m = s + (e-s)/2;
	int ans = -1;

	while(s<=e){

		if(arr[m] == k){
			ans = m;
			e = m-1;
		}
		else if(arr[m] < k){
			s = m +1;
		}
		else{
			e = m-1;
		}
		m  = s + (e-s)/2;
	}
	return ans;
}

int main(){
	int n,y;
	cout << "enter no of array elements" << endl;
	cin >> n;
	int arr[n];
	cout << "enter array elements" << endl;
	for(int i=0;i<n;i++){
		cin >> arr[i];

	}
	cout << "enter you target" << endl;
	cin >> y;

	int x = firstOccurrence(arr,n,y);
    cout << "first occurrence is at position " << x;

}