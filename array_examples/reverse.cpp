#include<iostream>

using namespace std;

int main()
{
int Arr[100],n,temp,i,j;
  cout<<"Enter number of elements you want to insert ";
  cin>>n;
  for(i=0;i<n;i++){
    cout<<"Enter element "<<i+1<<":";
    cin>>Arr[i];
  }
  for(i=0,j=n-1;i<n/2;i++,j--)
  {
    temp=Arr[i];
    Arr[i]=Arr[j];
    Arr[j]=temp;

  }
  cout<<"\nReverse array"<<endl;
  for(i=0;i<n;i++){

    cout<<Arr[i]<<" ";
  }
}