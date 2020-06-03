#include<iostream>
using namespace std;

int add(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}


int main()
{
	int n;
	cout<<"enter size of array";
	cin>>n;
	int a[n];
	cout<<"enter elements in array";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"sum of digits of array elements"<<endl;
	cout<<add(a,n);
}