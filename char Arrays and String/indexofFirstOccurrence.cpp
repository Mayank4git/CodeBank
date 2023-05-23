/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
*/

#include<iostream>
#include<string>
using namespace std;

int firstOccurrence(string s, string t){

	int l1 = s.size();
	int l2 = t.size();

	for(int i=0; i<=l1-l2; i++){
    		for(int j=0;j<l2;j++){
    			if(s[j] != t[i+j]){
    				break;
    			}
    			if(j == l2-1){
    			return i;
    		}
	    }
	}
	return -1;
}

int main(){
	string str1,str2;
	cout << "enter first string" << endl;
	cin >> str1;
	cout << "enter second string" << endl;
	cin >> str2;

	int ans = firstOccurrence(str1, str2);
	cout << "first occurrence will be at " << ans;
}