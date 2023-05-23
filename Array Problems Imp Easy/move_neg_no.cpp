// Consider an unsorted integer array, of size n, which contains both positive and numbers. The task at hand is to move all the negative elements to the end of the array without changing the order of positive and negative elements present in the array.

Example:

Input:
array[]= {5, 1, -2, 3, -6, -7 , 9, 10}

Output:
array[] = {5, 1, 3, 9, 10, -2, -6, -7}

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

int temp[n];
int pos = 0;
int end = n-1;
for(int i=0; i <n; i++){
	if(arr[end - i]] < 0){
		temp[end--] = arr[end-i];
	}
	else{
		temp[pos++] = arr[i];
	}
}
cout <<"array having all -ve no  to end of the array" <<endl;
for(int i=0;i<n;i++){
	cout << temp[i] << " ";
}




}


(OR)

void moveEle(int arr[], int n){

	int l = 0;
	int h = n-1;

	while(l < h){
		if(a[l] <0){
			l++;
		}
		else if(a[h] > 0){
			h--;
		} else{
			swap(a[l],a[h]);
		}
	}
}