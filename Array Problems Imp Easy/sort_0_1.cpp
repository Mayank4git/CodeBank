#include<iostream>
using namespace std;

void sortZeroAndOne(int a[],int m){

int start = 0;
int end = m-1;
int i=0;
	while(i != end){

		if(a[i] == 0){
			swap(a[start],a[i]);
			s++;
			i++;

		}else {
			swap(a[end],a[i]);
			e--;
		}

   	}
}

int main(){
	int n;
	cout << "enter no of array ele" << endl;
	cin >> n;
	int arr[n];
	cout << "enter array elements" << endl;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sortZeroAndOne(arr,n);
	cout << "enter array elements" << endl;
	for(int i=0;i<n;i++){
		cout << arr[i];
	}
}