/*
Given a string, find the longest substring which is a palindrome. 
Example:

Input: Given string :”forgeeksskeegfor”, 
Output: “geeksskeeg”

Input: Given string :”Geeks”, 
Output: “ee”

*/

#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string& s, int start, int end){

	while(start <= end){

		if(s[start] != s[end]){
			return false;
		}
		start++,end--;
	}
	return true;
}

string longestPalindrom(string str){

    string ans = "";
	for(int i=0;i<str.size();i++){
		for(int j=i;j<str.size();j++){
			if(isPalindrome(str,i,j)){

			  string t = str.substr(i, j-i+1);
			  ans = t.size() > ans.size() ? t:ans;
			}
		}
	}
	return ans;
}

int main(){

	string st;
	cout << "enter the string" << endl;
	cin >> st;

	string final_ans = longestPalindrom(st);
	cout << "longest palindrom string will be " << final_ans;
}