//lowercase to uppercase 

#include<iostream>
#include<string.h>
using namespace std;

void strUpperCase(char arr[]){

  int i = 0;
  int n = strlen(arr);
  int j = n-1;
  
  while(i!=j ){
	if(arr[i] >= 'a' && arr[i] <='z'){
		arr[i] = arr[i] - 32;
	}
	
	i++;
  }
  cout << "uppercase string is " << arr;
}

int main(){

	 char ch[100];
	 cout << "enter your string" << endl;
	 cin.getline(ch,100);//take input using this 
	 strUpperCase(ch);
	
}