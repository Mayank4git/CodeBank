#include<iostream>
using namespace std;

void traverseArray(int a[], int n, int i){

	if(i >= n){ // ye isslie jb index i.e 'i' array k last ele ko cross kr jae
		return;
	}
	cout << a[i] << " ";
	traverseArray(a,n,i+1);
}

int main(){

	int arr[] = {1,2,3,4,5};
	int n = 5;
	int i = 0;
	traverseArray(arr,n,i);
}