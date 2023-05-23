/*
Check If Strings are Equal using Equal To Operator
Equal to == is a comparison operator using which we can compare two string and find if they are equal.

If the two strings are equal, equal to operator returns true. Otherwise, the operator returns false.

*/

#include<iostream>
#include<string.h>
using namespace std;

bool compareString(string str1, string str2){

	int i = 0;
	int l1 = str1.length();
	int l2 = str2.length();

	if(l1 != l2){
		return false;
	}

   for(int i= 0; i < l1; i++){
   	   if(str1[i] != str2[i]){
   	   	  return false;
   	   }  	  
   }
   return true;       
}

int main(){

	string s1,s2;
	cout << "enter your first string" << endl;
	cin >> s1;
	cout << "enter your second string" << endl;
	cin >> s2;
	bool check = compareString(s1, s2);
	if(check){
		cout << "string are equal";
	} else{
		cout << "string are not equal";
	}
}