/*
Given a string s, return true if the s can be palindrome after deleting at most one character from it.


Example 1:

Input: s = "aba"
Output: true
Example 2:

Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.

*/

#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(string str, int i, int j){

	int s =0;
	int e = str.length()-1;
	while(s<=e){
		if(str[s] != str[e]){
			return false;
		}else{
			s++;
			e--;
		}
	}
	return true;
}

bool isPalindrome(string st){

	int i=0;
	int j=st.length()-1;

	while(i<=j){
		if(st[i] != st[j]){
			//ek baar i ko remove krke check kro, ek baar j ko remove krke check kro
			return checkPalindrome(st,i+1,j) || checkPalindrome(st,i,j-1);
		} else {
			i++;
			j--;
		}
	}
	return true;
}

int main(){
	string str;
	cout << "enter your string" << endl;
	cin >>  str;
	bool check = isPalindrome(str);
	if(check){
		cout << "string is palindrome";
	}else{
		cout << "string is not palindrome";
	}
}