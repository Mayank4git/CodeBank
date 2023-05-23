#include<iostream>
using namespace std;

int fact(int m){

	int factorial = 1;
	if(m == 0){
		return factorial;
	} else{

		for(int i=1; i<=m;i++){
			factorial = factorial * i;

		}
	    return factorial;
	}
}

int main(){
	int n;
	cout << "enter number"<<endl;
	cin >>n;
	cout << "factorial is "<<fact(n);
}

