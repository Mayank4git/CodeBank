/*
Given an array of characters chars, compress it using the following algorithm:

Begin with an empty string s. For each group of consecutive repeating characters in chars:

If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

After you are done modifying the input array, return the new length of the array.

You must write an algorithm that uses only constant extra space.
Example 1:

Input: chars = ["a","a","b","b","c","c","c"]
Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".

*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int compressedStr(string s){
	int index = 0;
	int count =1;
	char prev = s[0];

	for(int i=1;i<s.size();i++){
		if(s[i] == prev){
			count++;
		}
		else{
			s[index++] = prev;
			if(count > 1){
				// s[index++] = count;
				int start = index;
				while(count){
					s[index++] = (count % 10) + '0';// change int to char so added '0'
					count /= 10;
				}
				reverse(s.begin() + start, s.begin() + index);
			}
			prev = s[i];
			count = 1;
		}
	}

///ye vala code tb kaam kremge jb i tmra out of bound chala jaega tb humhe prev store krna h aur uska cnt bi
	s[index++] = prev;
	// if(count > 1){
	// 	s[index++] = count;
	// }
	if(count > 1){
		// s[index++] = count;
		int start = index;
		while(count){
			s[index++] = (count % 10) + '0';
			count /= 10;
		}
		reverse(s.begin() + start, s.begin() + index);
	}
	return index;
}

int main(){
	string str;
	cout << "enter string" << endl;
	cin >> str;

	int lenght_of_newString = compressedStr(str);
	cout<< "new lenght will be "<< lenght_of_newString;
}