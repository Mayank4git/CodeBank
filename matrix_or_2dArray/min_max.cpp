
#include <climits>
#include<iostream>
using namespace std;

int main(){

int m,n;
cout << "enter no of rows"<<endl;
cin >> m;
cout << "enter no of cols"<<endl;
cin >> n;

int arr[m][n];

for(int i=0; i<m;i++){
	for(int j=0; j <n;j++){
		cin >> arr[i][j];
	}
}

//max element in 2d array
int maxele = 0;
for(int i=0; i<m; i++){
	for(int j=0;j<n;j++){
		if(maxele < arr[i][j]){
			maxele = arr[i][j];
		}
	}
}
cout<< "max ele is :"<< maxele;


}