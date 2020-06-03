#include<iostream>
using namespace std;

int main()
{
	int n,a[n],m;
	cout<<"enter size of array";
	cin>>n;
	cout<<"ente element in array";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter element you want to search"<<"\n";
	cin>>m;
    int flag=0;
	for(int i=0;i<n;i++)
	{
		if(m==a[i])
		{
          flag=1;
          break;
		}
	}

   if(flag==1)
   {
   	cout<<"element is found in array";
   }
   else
   {
   	cout<<"element not found in array";
   }

}