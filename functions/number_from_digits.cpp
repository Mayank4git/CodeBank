//input 5,6,3
//output 563


//input 5,6,3
//output 563


#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout << "enter size of number"<<endl;
    cin >>n;
    int arr[n];
    cout << "ele in the array enter"<<endl;
    for(int i=0 ; i < n; i++){

    	cin >> arr[i];
    }
    int sum = 0;
    for(int i=0; i < n; i++){

    	 sum = sum *10 + arr[i];
    }
   cout<<"digits are : "<<sum;


}