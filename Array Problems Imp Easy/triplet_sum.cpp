//print all pair sum in an given array


#include<iostream>
using namespace std;

int pairSum(int a[],int m){

	for(int i=0;i<m;i++){
		int f =  a[i];
		for(int j=i+1;j<m;j++){
			int s = a[j];
			for(int k=j+1;k<m;k++){
			 	int t = a[k];
			 	if(f+s+t == sum){
			 		cout << "pair found " << f << " " << s << " "<< t << end;
			 	}			
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

