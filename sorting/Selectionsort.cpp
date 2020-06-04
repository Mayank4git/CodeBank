#include<iostream>  
using namespace std;
int main ()
{
   int n,a[n],temp,min,loc;
   cout<<"enter size";
   cin>>n;
   cout <<"Input elements \n";
   for(int i = 0; i<n; i++) {
      cin>>a[i];
    }
  

    for(int i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(int j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
 
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
    cout<<"elements sorted by selection sort";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}
  






