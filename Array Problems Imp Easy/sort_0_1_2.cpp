//Sort an array of 0s, 1s and 2s | Dutch National Flag problem
// Given an array A[] consisting of only 0s, 1s, and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.

// i/p = [0,1,2,1,1,2,1,0]

// o/p = [0,0,1,1,1,1,2,2]

//this is a counting approach basically and t.c = O(n)

#include<iostream>
using namespace std;

int main(){

int n;
cout << "enter no of ele in array"<<endl;
cin >> n;
int arr[n];

for(int i=0;i<n;i++){
	cin>>arr[i];
}

int count_zero=0,count_one=0,count_two=0;

for(int i=0; i<n; i++){
	if(arr[i] == 0){
		count_zero++;
	} else if(arr[i] == 1){
		count_one++;
	} else {
		count_two++;
	}
}

for(int i=0; i<count_zero;i++){
	arr[i] = {0};
}

for(int i=count_zero; i<count_zero+count_one; i++){
	arr[i] = {1};
}

for(int i=count_zero+count_one; i<n; i++){
	arr[i] = {2};
}

cout <<"sorted array of 0,1,2's here is"<< endl;
for(int i=0 ; i<n ; i++){
	cout << arr[i] << " ";
}



}


(OR)================

     
int zero,one,two;
zero = one = two = 0;
for(int i=0;i<nums.size();i++){
    if(nums[i] == 0){
        zero++;
    }else if(nums[i] == 1){
        one++;
    }
    else{
        two++;
    }
}
int i=0;
while(zero--){
    nums[i] = 0;
    i++;
}
while(one--){
    nums[i] = 1;
    i++;
}
while(two--){
    nums[i] = 2;
    i++;
}
   
// above method are not using inplace method 
//for sorting colors so for this we will use 
// DUTCH NATIONAL FLAG APPROACH   


