#include<iostream>
using namespace std;
int main(){

int m = 3,n =3;

int arr[3][3];
cout << "enter ele in the matrix";
for(int i =0; i <3;i++){
	for(int j =0; j<3; j++){
		cin >> arr[i][j];
	}
}
int trans[3][3];
for(int i =0; i <3;i++){
	for(int j =0; j<3; j++){
		trans[j][i] = arr[i][j];
	}
}
cout << "matrix after transposing"<<endl;
for(int i =0; i <3;i++){
	for(int j =0; j<3; j++){
		cout << trans[i][j];
	}
	cout << endl;
}

}


