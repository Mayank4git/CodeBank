/*
Two strings str1 and str2 are called isomorphic if there is a one-to-one mapping possible for every character of str1 to every character of str2. And all occurrences of every character in ‘str1’ map to the same character in ‘str2’.

Examples: 

Input:  str1 = “aab”, str2 = “xxy”
Output: True
Explanation: ‘a’ is mapped to ‘x’ and ‘b’ is mapped to ‘y’.

Input:  str1 = “aab”, str2 = “xyz”
Output: False
Explanation: One occurrence of ‘a’ in str1 has ‘x’ in str2 and other occurrence of ‘a’ has ‘y’.

*/

#include<iostream>
#include<string>
using namespace std;

bool isIsomorphic(string s, string t){

	int hash[256] = {0};
	int isTCharMapped[256] = {0};

	for(int i =0; i<s.size(); i++){

		if(hash[s[i]] == 0 && isTCharMapped[t[i]] == 0){
			hash[s[i]] = t[i];
			isTCharMapped[t[i]] = true; 
		}
	}

	for(int i=0; i<s.size(); i++){
		if(hash[s[i]] != t[i]){
			return false;
		}
	}
	return true;
}


int main(){

	string str1,str2;
	cout << "enter your string " << endl;
	cin >> str1;
	cout << "enter second string" << endl;
	cin >> str2;

	bool check = isIsomorphic(str1,str2);
	if(check){
		cout << "string are isomorphic";
	} else {
		cout << "string are not isomorphic";
	}
}