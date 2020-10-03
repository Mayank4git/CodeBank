#include<iostream>
using namespace std;
 int main()
 {
 	int n,a[n][n];
 	cout<<"enter size of matrix";
 	cin>>n;
 	cout<<"enter matrix elements";
 	for(int i=0;i<n;i++){
 		for(int j=0;j<n;j++){
 			cin>>a[i][j];
 		}
 	}
 
        int sum=0;
 	for(int j=0;j<n;j++){
 	    sum=sum+a[j][j];
 	}
 	
 	 cout<<"sum of diagonal elements"<<sum;
}
