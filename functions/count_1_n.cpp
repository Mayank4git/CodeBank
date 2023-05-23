#include<iostream>
using namespace std;

int count(int n){
  
    for(int i = 1; i < n; i++){
        cout << "counting from 1 to n is : " <<i<<endl;     
    }
    return 0;
}

int main(){
    int n;
    cout << "enter your number"<<endl;
    cin>>n;
    count(n);
}