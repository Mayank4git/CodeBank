/*
You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.
We repeatedly make duplicate removals on s until we no longer can.
Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
*/

#include<iostream>
#include<string.h>
using namespace std;


string removeDuplicate(string str){

    string ans = "";
    int i = 0;
    while(i < str.length()) {
     	if(ans.length() > 0 && ans[ans.length()-1] == str[i]){
     		ans.pop_back();
     	} else {
     		ans.push_back(str[i]);
     	}
     	i++;
    }
    return ans;
}

int main(){

	string s;
	cout << "enter your string" << endl;
	cin >> s;
	string final = removeDuplicate(s);
	cout << "string after removal " << final <<endl;
}