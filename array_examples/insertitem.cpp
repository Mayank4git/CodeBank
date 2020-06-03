
		
#include<iostream>
using namespace std;
int  main()
{
	
	int arr[50], size, insert, pos;
	cout<<"Enter Array Size : ";
	cin>>size;
	cout<<"Enter array elements : ";
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter element to be insert : ";
	cin>>insert;
	cout<<"At which position (Enter index number) ? ";
	cin>>pos;

	for(int i=size; i>pos; i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=insert;
	cout<<"Element inserted successfully..!!\n";
	cout<<"Now the new array is : \n";
	for(int i=0; i<size+1; i++)
	{
		cout<<arr[i]<<" ";

	}

}