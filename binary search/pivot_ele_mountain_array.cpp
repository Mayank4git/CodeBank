//find peak/search element in mountain array
#include<iostream>
using namespace std;

int pivotSearch(int arr[],int n){

	int s = 0;
	int e = n-1;
	int m = s + (e-s)/2;

	while(s < e){
		if(arr[m] < arr[m+1]){
			s = m+1;
		}
		else{
			e = m;
		}
		m = s + (e-s)/2;	
	}
	return m;
}

int main(){

	int n;
	cout << "enter number of elements" <<endl;
	cin >> n;
	int arr[n];
	cout << "enter elements in array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int index = pivotSearch(arr,n);

	cout << "peak/pivot element is at :"<< index << "which is :"<<arr[index];
}