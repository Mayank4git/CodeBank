#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,arr[n],m;
	cout<<"enter size of array";
	cin>>n;
	cout<<"enter element in array";

	for(int i=0;i<n;i++){
	  cin>>arr[i];
	}   
	
	unordered_set<int> set;

	cout<<"Duplicates elements in given array";
	
	for(int i=0;i<n;i++){
		if(set.find(arr[i]) != set.end() ){
			cout<<arr[i]<<" ";
		}else{
			set.insert(arr[i]);
		}
	}
 }
