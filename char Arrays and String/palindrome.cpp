//print true is string is palindrome otherwise false.

//example : NOON ----> NOON


#include<iostream>
#include<string.h>
using namespace std;

bool palindrome(char arr[]){

    int i = 0;
    int n = strlen(arr);
    int j = n-1;

    while(i<=j){
    	if(arr[i] != arr[j]){
    		return false;
    	} else{
    		i++;
    		j--;
    	}
    }
  return true;
}

int main(){

	char ch[100];
	cout << "enter your string" << endl;
	cin.getline(ch,100);//take input using this
	bool check = palindrome(ch);
	if(check){
		cout << "string is palindrome" << endl;
	} else {
		cout << "string is not palindrome" << endl;
	}
}