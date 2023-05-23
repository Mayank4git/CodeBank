// Given an array arr[] of size N-1 with integers in the range of [1, N], the task is to find the missing number from the first N integers and Note: There are no duplicates in the list.

// Input: arr[] = {1, 2, 4, 6, 3, 7, 8}, N = 8
// Output: 5
// Explanation: The missing number between 1 to 8 is 5

// approach :
// Time Complexity: O(N)
// Auxiliary Space: O(1)

// Modification for Overflow: The approach remains the same but there can be an overflow if N is large. 
#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "enter no of elements" <<endl;
	cin >> n;
	int arr[n];
	cout <<  "enter elements in array" << endl;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
    int m = n+1;
    int sum_all = m * (m + 1)/2 ;
    int sum = 0;
    for(int i=0;i<n;i++){
    	sum =  sum + arr[i];
    }
    int missing = sum_all - sum;
    cout << "missing element is :" << missing; 

}

//Approach 3 (Using binary operations): This method uses the technique of XOR to solve the problem. 

// Follow the steps mentioned below to implement the idea:

// Create two variables a = 0 and b = 0
// Run a loop from i = 1 to N:
// For every index, update a as a = a ^ i
// Now traverse the array from i = start to end.
// For every index, update b as b = b ^ arr[i].
// The missing number is a ^ b. 


#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "enter no of elements" << endl;
	cin >> n;
	int arr[n];
	cout << "enter array elements" << endl;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	int sum  = 0;
	for(int i=0; i<n;i++){
		sum  = sum ^ arr[i];
	}
	int sum_all = 0;
	for(int i=1; i<= n+1;i++){
		sum_all = sum_all ^ i;
	}
	int missing = sum_all ^ sum;
	cout << "missing element is :" << missing;
}  