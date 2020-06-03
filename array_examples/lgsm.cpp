#include<iostream>
using namespace std;

int main()
{
  int n,a[n];
  cout<<"enter size of array ";
  cin>>n;
  cout<<"enter elements in array";

  for(int i=0;i<n;i++)
  {
  	cin>>a[i];
  }
int small=a[0];
int large=a[0];

for(int i=0;i<n;i++)
{
	if(small>a[i])
	{
		small=a[i];
	}
	if(large<a[i])
	{
		large=a[i];
	}
}
cout<<"small element is"<<small<<"\n";
cout<<"large element is"<<large;



}