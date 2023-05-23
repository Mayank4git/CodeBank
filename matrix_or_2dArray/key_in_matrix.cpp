#include<iostream>
using namespace std;

bool keySearch(int abc[3][3], int ele){
	
	for(int i = 0; i < 3; i++){	
		for(int j = 0; j < 3; j++){
			 if(ele == abc[i][j])
			{
				return true;
				break;
			}
		}
	}
	return false;
}

int main(){

int m = 3,n =3;

int arr[3][3];
cout << "enter ele in the matrix";
for(int i =0; i <3;i++){
	for(int j =0; j<3; j++){
		cin >> arr[i][j];
	}
}
int key;
cout << "enter key you want to find" << endl;
cin >> key;

bool check = keySearch(arr,key);
if(check == true){
	cout << "ele is found";
} else{
	cout << "ele is not found";
}

}