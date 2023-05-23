#include<iostream>
#include<vector>
using namespace std;

void mergeSortedArray(int arr1[], int n, int arr2[], int m){

    int arrSize = n+m;
	int i=0,j=0,k=0;
	int ans[arrSize];
	while(i < n && j < m){

		if(arr1[i] <= arr2[j]){
			ans[k++] = arr1[i];
			i++;
		} else{
			ans[k++] = arr2[j];
			j++;
		}
	}
	while(i < n){
		ans[k++] = arr1[i];
		i++;
	}
	while(j < n){
		ans[k++] = arr2[j];
		j++;
	}

    for(int i=0;i<arrSize;i++){
        cout << ans[i] << "";
    }
}

int main(){
//constraint ele of array should be in non-decreasing order and without using extra space.
	int arr1[] = {1,2,3,4};
	int arr2[] = {1,2,3,4};
	int n = 4;
	int m = 4;


	mergeSortedArray(arr1, n, arr2, m);

}


//code for without using extra space here 

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0; i<n; i++){
            nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
}