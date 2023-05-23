//bubble sort algo

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int m){

// bcz no need to check last element of array
	for(int round=1;round < m;round++){     
        for( int j=0;j < m-round;j++){
        	if(arr[j] > arr[j+1]){
        		swap(arr[j],arr[j+1]);
        	}
        }
  
	}
}

int main(){

	int n;
	cout << "enter array no of ele" << endl;
	cin >> n;
	int arr[n];
	cout << "enter array elements" << endl;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	bubbleSort(arr,n);
	for(int i=0;i<n;i++){
	       cout<< arr[i] << " ";
	}
	
	
}