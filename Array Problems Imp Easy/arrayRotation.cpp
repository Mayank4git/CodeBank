#include<iostream>
using namespace std;
//right rotate
void arrayRotate(int arr[], int n, int d){
	
    int n =  arr.size();
    int temp[n];
    int k = 0;
    for (int i = 0; i < n-d; i++) {
        temp[k++] = arr[i];
    
    }

    for (int i = n-d; i < n; i++) {
        temp[k++] = arr[i];
    }

    

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}


int main()
{
	int n = 9; 
	int arr[9] = {1,2,3,4,5,6,7};
	int pos;
	cout << "enter position from where you want to rotate";
	cin >> pos;
	arrayRotate(arr,n,pos);
	
	for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}