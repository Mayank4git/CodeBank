//find square root of a number using Binary Search technique.
//squareRoot(16) == 4
//arr->0 to 16

#include<iostream>
using namespace std;

int squareRoot(int m){

 int s = 0;
 int e = m;
 int mid = s+(e-s)/2;
 int ans = -1;

	while(s<=e){
		if(mid * mid == m){
			return mid;
		} else if(mid * mid < m){
			 ans = mid;
			 s = mid + 1;
		}else{
			e = mid - 1;
		}
		mid = s+(e-s)/2;
	}
	return ans;
}

int main(){
	int n;
	cout << "enter your number"<<endl;
	cin >> n;
	int ans = squareRoot(n);
	cout << "answer without precision is " << ans << endl;
	int p;
	cout << "enter your precision"<<endl;
	cin >> p;
    double final_ans = ans;
	double step = 0.1;
	for(int i =0 ;i < p;i++){
		 for(double j= ans;j*j<=n;j=j+step){
		 	final_ans = j;
		 }
		 step = step/10;
	}
	cout << "answer after precision is" << final_ans;
}