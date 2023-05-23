//selection sort algo

#include<iostream>
using namespace std;

void selectionSort(int arr[], int m){

// bcz no need to check last element of array
	for(int i=0;i<n-1;i++){
        int min = i;
        for( int j=i+1;j<n;j++){
        	if(arr[j] < arr[min]){
        		min =j;
        	}

        }
  
	}
	swap(arr[i],arr[min]);
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

	selectionSort(arr,n);
}