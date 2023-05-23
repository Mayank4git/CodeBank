//length of a string simple

#include<iostream>
using namespace std;

int strlength(char arr[]){

	int i=0;
	int length = 0;
	while(arr[i]!='\0'){
		length++;
		i++;
	}
	return length;
}


int main(){

 char ch[100];
 cout << "enter your string" << endl;
 cin.getline(ch,100);//take input using this 
 int len = strlength(ch);
 cout << "length of the string is " << len;

}