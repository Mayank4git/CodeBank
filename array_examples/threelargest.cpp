#include<iostream>
using namespace std;
 int main()
 {
       int n,a[n];
       cout<<"enter size :";
       cin>>n;
       cout<<"enter elements :";
       for(int i=0;i<n;i++)
       {
              cin>>a[i];
       }
       int large=a[0];
       for(int i=1;i<n;i++)
       {
              if(a[i]>large)
              {
                     large=a[i];
              }
       }
       cout<<"first largest "<<large;
 }