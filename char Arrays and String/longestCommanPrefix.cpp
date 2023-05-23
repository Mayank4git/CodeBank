/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

string longestCommanPrefix(vector<string>& strs){

	string ans = "";
	int i = 0;

	while(true){

		char curr_ch = 0;

		 for(auto str: strs){

		 	if(i>= str.size()){
		 		curr_ch = 0;
		 		break;
		 	}

		 	if(curr_ch == 0){
		 		curr_ch = str[i];
		 	} else if(str[i] != curr_ch){
		 		curr_ch = 0;
		 		break;
		 	}
		 }

		 if(curr_ch == 0){
		 	break;
		 }
		  ans.push_back(curr_ch);
		  i++;
	}

	return ans;

}



int main(){

	vector<string>strs{"flower","flow","flight"};

	string res = longestCommanPrefix(strs);

}