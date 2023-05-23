#include <iostream>
using namespace std;

void merge(int* a,int s, int e){
int mid = (s+e)/2;
//create temp array to store value of left
 int leftArraykaSize = mid-s+1;
 int rightArraykaSize = e- mid;
 
int* left = new int[leftArraykaSize];
int* right = new int[rightArraykaSize];
int k = s;
//copy value of left array ele in temp as it is.
 for(int i = 0; i < leftArraykaSize; i++){
   left[i] = a[k];
   k++;
 }
//copy value of right array ele in temp as it is
k = mid+1;
 for(int i = mid+1; i < rightArraykaSize; i++){
   right[i] = a[k];
   k++;
 }

 int lefttraverseIndex = 0;
 int righttraverseIndex = 0 ;
 int mainArraytraverseIndex = s; //to traverse actual array


  while(lefttraverseIndex < leftArraykaSize && righttraverseIndex < rightArraykaSize){

    if(left[lefttraverseIndex] < right[righttraverseIndex]){
      a[mainArraytraverseIndex++] = left[lefttraverseIndex++];
 
    } else{
       a[mainArraytraverseIndex++] = right[righttraverseIndex++];
   
    }
  }

 while(lefttraverseIndex < leftArraykaSize){

  a[mainArraytraverseIndex++] = left[lefttraverseIndex++];

 }

  while(righttraverseIndex < rightArraykaSize){

  a[mainArraytraverseIndex++] = right[righttraverseIndex++];

 }
}


void mergeSort(int* a,int s, int e){

  if(s >= e){
    return;
  }

  int mid = (s + e)/2;
  //recursion se left part ko break kro single element tk
  mergeSort(a,s,mid);

  //recursion se right part ko break kro single ele tk
  mergeSort(a,mid+1,e);

  merge(a,s,e);

}

int main() {

int a[] = {4,5,12,2,13}; //array
int n = 5; // size of array

int s = 0;
int e = n-1;// n = size of arary
mergeSort(a,s,e);

cout << "sorted array after merge" << endl;
for(int i =0;i<n;i++){
  cout << a[i] << " ";
}

}