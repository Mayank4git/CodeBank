// Given a sorted array arr[] and a number x, write a function that counts the occurrences of x in arr[]. Expected time complexity is O(Logn) 

// Examples: 

//   Input: arr[] = {1, 1, 2, 2, 2, 2, 3,},   x = 2
//   Output: 4 // x (or 2) occurs 4 times in arr[]

//   Input: arr[] = {1, 1, 2, 2, 2, 2, 3,},   x = 3
//   Output: 1 

// HINT: step 1) find first occurrance of element
//       step 2) find last occurrance of the element
//       formuale = (last occurrance - first occurrance + 1);

#include<iostream>
using namespace std;

int firstOccurrence(int arr[],int c,int k){

  int s =0;
  int e = c-1;
  int m = s + (e-s)/2;
  int ans1 = 0;

  while(s<=e){

    if(arr[m] == k){
      ans1 = m;
      e = m-1;
    }
    else if(arr[m] < k){
      s = m +1;
    }
    else{
      e = m-1;
    }
    m  = s + (e-s)/2;
  }
  return ans1;
}


int lastOccurrence(int arr[],int c,int k){

  int s =0;
  int e = c-1;
  int m = s + (e-s)/2;
  int ans2 = 0;

  while(s<=e){

    if(arr[m] == k){
      ans2 = m;
      s = m+1;
    }
    else if(arr[m] < k){
      s = m +1;
    }
    else{
      e = m-1;
    }
    m  = s + (e-s)/2;
  }
  return ans2;
}
int main(){
  int n,y;
  cout << "enter no of array elements" << endl;
  cin >> n;
  int arr[n];
  cout << "enter array elements" << endl;
  for(int i=0;i<n;i++){
    cin >> arr[i];

  }
  cout << "enter you target" << endl;
  cin >> y;

  int j = firstOccurrence(arr,n,y);
    cout << "first occurrence is at position " << j << endl;
  int k = lastOccurrence(arr,n,y);
    cout << "last occurrence is at position " << k << endl;
  cout << "total occurrence of the ele is " << k - j + 1;


}