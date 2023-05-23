#include<iostream>
using namespace std;

void sumRowWise(int abc[3][3], int r, int c){
	
	for(int i = 0; i < r; i++){	
	    int sum  = 0; // at every row sum should be zero
		for(int j = 0; j < c; j++){
			sum  = sum + abc[i][j];
		}
		cout << sum << " "; 
	}
}

int main(){

int m = 3,n =3;

int arr[3][3];
for(int i =0; i <3;i++){
	for(int j =0; j<3; j++){
		cin >> arr[i][j];
	}
}

sumRowWise(arr,m,n);

}