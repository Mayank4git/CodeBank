#include<iostream>
#include<climits>
using namespace std;

void maxEle(int a[], int n, int i, int& max ){

	if(i >= n){ // ye isslie jb index i.e 'i' array k last ele ko cross kr jae
		return;
	}
	
	if(a[i] > max){
		max = a[i];
	}

	maxEle(a,n,i+1,max);
}

int main(){

	int arr[] = {1,2,3,100,4,5};
	int n = 5;
	int i = 0;
	int max =  INT_MIN;
	maxEle(arr,n,i,max);
	cout << max;	
}