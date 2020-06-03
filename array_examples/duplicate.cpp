#include<iostream>
using namespace std;
 int main()
 {
     int n,arr[n],m;
	cout<<"enter size of array";
	cin>>n;
	cout<<"enter element in array";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}   

cout<<"duplicates elements in given array";
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
              cout<<arr[i];
			}
		}
	}
	
	

 }