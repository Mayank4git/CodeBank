//print all pair sum in an given array


#include<iostream>
using namespace std;

int pairSum(int a[],int m){

	for(int i=0;i<m;i++){
		int ele =  a[i];
		for(int j=i+1;j<m;j++){
			// to print all pairs of an given array
			cout << "( " << ele << "," << a[j] << " )" << endl;
			if(ele + a[j] ==  sum){

				cout << "pair of given sum is at : ( " << ele << "," << a[j] << " )" << endl;
			}
		}
	}
	return 0;
}

int main(){
	int n,sum;
	cout << "enter no of array ele" << endl;
	cin >> n;
	int arr[n];
	cout << "enter array elements" << endl;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	cout << "enter sum value"<<endl;
	cin >> sum;
	pairSum(arr,n);
}

