/*
Given a string s, return the number of palindromic substrings in it.
A string is a palindrome when it reads the same backward as forward.
A substring is a contiguous sequence of characters within the string.
Example 1:

Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".
Example 2:

Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".

TC = O(n^2)

*/

#include<iostream>
#include<string.h>
using namespace std;

int expand(string str,int i, int j){

  int count = 0;
  while(i>=0 && j<str.length() && str[i] == str[j]){
  	count++;
  	i--;
  	j++;
  }
return count;
}

int countpalindrome(string st){

	int count = 0;
	for(int i=0;i<st.length();i++){
		//odd case 
		int odd = expand(st,i,i);
		count += odd;

		//even case
		int even = expand(st,i,i+1);
		count += even;

	}
	return count;
}

int main(){

	string str;
	cout << "enter your string" << endl;
	cin >> str;//take input using this
	int total_count = countpalindrome(str);
	cout << "string is palindrome : " << total_count << endl;

}