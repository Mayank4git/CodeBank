#include<iostream>
using namespace std;

int sumEvenNo(int m){

	int sum = 0;
	for(int i=0;i<=m;i+=2){
       sum = sum + i;
	}
	return sum;

}

int main(){

	int n;
	cout << "enter number"<<endl
	cin >> n;
	cout<<"sum is : "<<sumEvenNo(n);
}

#note : modulo operator is heavy operator and should avoid its use when to print even numbers