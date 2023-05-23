#include<iostream>
using namespace std;

int evenORODD(int m){
	int flag = 0;
	if(m%2 == 0){
      flag = 1;
	}
	return flag;
}

int main(){

	int n;
	cout << "enter your number"<< endl;
	cin  >> n;

	int res = evenORODD(n);
	if(res == 1){
		cout << "your number is even "<< n;
	}else{
		cout << "your number is odd "<<n;
	}

}