// Given three arrays sorted in non-decreasing order, print all common elements in these arrays.

// Examples: 

// Input: 
// ar1[] = {1, 5, 10, 20, 40, 80} 
// ar2[] = {6, 7, 20, 80, 100} 
// ar3[] = {3, 4, 15, 20, 30, 70, 80, 120} 
// Output: 20, 80

// Input: 
// ar1[] = {1, 5, 5} 
// ar2[] = {3, 4, 5, 5, 10} 
// ar3[] = {5, 5, 10, 20} 
// Output: 5, 5
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n1,n2,n3;
	cout << "enter no of ele of 1st array"<<endl;
	cin >> n1;
	int arr1[n1];
	cout << "enter array ele for 1st array" <<endl;
	for(int i=0;i<n1;i++){
		cin >> arr1[i];
	}
	cout << "enter no of ele of 2nd array"<<endl;
	cin >> n2;
	int arr2[n2];
	cout << "enter array ele for 2nd array" <<endl;
	for(int i=0;i<n2;i++){
		cin >> arr2[i];
	}
	// cout << "enter no of ele of 3rd array"<<endl;
	// cin >> n3;
	// int arr3[n3];
	// cout << "enter array ele for 3rd array" <<endl;
	// for(int i=0;i<n3;i++){
	// 	cin >> arr3[i];
	// }

	//first find intersection for first two arrays then with third sorted array
    vector<int>temp;
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			if(arr1[i] == arr2[j]){
				temp.push_back(arr2[j]);
			}
		}
	}

	// for(int i=0;i<n3;i++){
	// 	for(int j=0;j<n1+n2;j++){
	// 		if(arr3[i] == temp[j]){
	// 			temp[i] = arr3[j];
	// 		}
	// 	}
	// }
    cout << "comman elements are :"<<endl;
   
    for(int i=0;i<temp.size();i++){
    	cout<<temp[i]<<endl;
    }

}