#include<iostream>  
using namespace std;
int main (){
   int n; 
   int a[n];
   cout<<"enter size";
   cin>>n;
   
   cout <<"Input elements \n";
   for(int i = 0; i<n; i++) {
      cin>>a[i];
    }

   for(int i = 0; i<n; i++) {
      for(int j = 0; j<n-i-1; j++){
         if(a[j+1] < a[j]) {
            swap( a[j], a[j+1] );
         }
      }
   }
   
   cout <<"Sorted Element List ...\n";
   for(int i = 0; i<n; i++) {
      cout <<a[i]<<"\t";
      }
   return 0;
}
