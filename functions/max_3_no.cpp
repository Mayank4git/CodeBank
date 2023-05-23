#include<iostream>
using namespace std;


int maxThreeNumber(int a,int b,int c){
	if(a > b && a > c){
		return a;
	}else if(b > a && b > c){
		return b;
	}else{
		return c;
	}
}

int main (){
	int a,b,c;
	cout << "enter 1st no"<<endl;
	cin >>a;
	cout << "enter 2nd no"<<endl;
	cin >>b;
	cout << "enter 3rd no"<<end;
	cin >>c;

	cout << "max of three numbers is :"<< maxThreeNumber(a,b,c);
}