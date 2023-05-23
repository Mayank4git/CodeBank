/*

Given two strings. The task is to check whether the given strings are anagrams of each other or not. 

An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, “abcd” and “dabc” are an anagram of each other.

Examples:

Input: str1 = “listen”  str2 = “silent”
Output: “Anagram”
Explanation: All characters of “listen” and “silent” are the same.

*/

//approach 1 is using sorting then comparing both string 



#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string s, string t){

	int l1 = s.length();
	int l2 = t.length();
	if(l1 != l2){
		return false;
	}

    int frequencyOfLetter[256] = {0};
	for(int i=0;i<l1;i++){

		frequencyOfLetter[s[i]]++;

	}

	for(int i=0;i<l2;i++){

		frequencyOfLetter[t[i]]--;
	}

	for(int i=0; i<256; i++){
		if(frequencyOfLetter[i] != 0){
			return false;
		}
	}
	return true;

}

int main(){

	string str1,str2;
	cout << "enter first string" << endl;
	cin >> str1;
	cout << "enter second string" << endl;
	cin >> str2;

	bool check = isAnagram(str1, str2);
	if(check){
		cout << "valid Anagram";
	} else {
		cout << "not valid Anagram";
	}

}