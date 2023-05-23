/*
Given a string with lowercase repeated characters, the task is to rearrange characters in a string so that no two adjacent characters are the same. If it is not possible to do so, then print “Not possible”.

Examples: 

Input: aaabc 
Output: abaca 

Input: aaabb
Output: ababa 

*/

#include<iostream>
#include<string>
#include <climits>
using namespace std;


string reorganize(string s){

	int hash[26] = {0};

	for(int i=0; i<s.size();i++){
		hash[s[i] - 'a']++;
	}

	char max_freq_char;
	int max_freq = INT_MIN;

	for(int i=0;i<26;i++){

		if(hash[i] > max_freq){
			max_freq = hash[i];
			max_freq_char = i + 'a';
		}
	}

	int index = 0;
	while(max_freq > 0){

		s[index] = max_freq_char;
		max_freq--;
		index += 2;
	}

	if(max_freq != 0){
		return "";
	}

	hash[max_freq_char -'a'] = 0;

	for(int i=0;i<26;i++){
		while(hash[i] > 0){
			index = index >= s.size()? 1:index;
			s[index] = i + 'a';
			hash[i]--;
			index += 2;
		}
	}
	return s;

}

int main(){

	string str;
	cout << "enter the string " << endl;
	cin >> str;

	string st = reorganize(str);
	cout << "string after reorganize " << st;
}