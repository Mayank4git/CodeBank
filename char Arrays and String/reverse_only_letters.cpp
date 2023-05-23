/*

Given a string, that contains a special character together with alphabets (‘a’ to ‘z’ and ‘A’ to ‘Z’), reverse the string in a way that special characters are not affected.

Examples: 

Input:   str = “a,b$c”
Output:  str = “c,b$a”
Explanation: Note that $ and , are not moved anywhere.  Only subsequence “abc” is reversed

Input:   str = “Ab,c,de!$”
Output:  str = “ed,c,bA!$”

*/

#include <bits/stdc++.h>
using namespace std;

string reverseLetters(string str){
 
    int l =0;
    int r = str.length()-1;

    while(l<=r){

    	if (!isalpha(str[l]))
            l++;
        else if (!isalpha(str[r]))
            r--;
 
        else // Both str[l] and str[r] are not special
        {
            swap(str[l], str[r]);
            l++;
            r--;
        }
    }
    return str;
}

int main(){

	string str;
	cout << "enter your string" << endl;
	cin >> str;
	string ans = reverseLetters(str);
	cout << "string after reversed " << ans;
}