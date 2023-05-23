/*
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Example 2:

Input: strs = [""]
Output: [[""]]

*/

#include<iostream>
#include<string>
#include<vector>
#include <map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
//map data structure is used in this question 
	map<string,vector<string>>mp;
	for(auto str: strs){

		string s = str;
		sort(s.begin(),s.end());
		mp[s].push_back(str);

	}
	vector<vector<string>>ans;

	for(auto it = mp.begin(); it != mp.end();it++){
		ans.push_back(it->second);
	}
	return ans;        
}


int main(){

	vector<string>str{"eat","tea","tan","ate","nat","bat"};

	groupAnagrams(strs);
}