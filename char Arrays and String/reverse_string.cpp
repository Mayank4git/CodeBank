//reverse of a string simple

//Approach 1) : print string from end to start then get reversed string.

//Approach 2) : using two pointer approach reverse of a string simple

#include<iostream>
#include<string.h>
using namespace std;

int strReverse(char arr[]){

  int s = 0;
  int n = strlen(arr);
  int e = n-1;

  while(s<=e){

  	swap(arr[s],arr[e]);
  	s++;
  	e--;

  }
  return 0;
}

int main(){

	 char ch[100];
	 cout << "enter your string" << endl;
	 cin.getline(ch,100);//take input using this 
	 strReverse(ch);
	 cout << "reverse string is " << ch;
}