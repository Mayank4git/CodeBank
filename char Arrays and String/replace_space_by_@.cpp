//replace space by '@' character

#include<iostream>
#include<string.h>
using namespace std;

void strReplace(char arr[]){

	int i=0;
	int n = strlen(arr);
	int j = n-1;
	
	while(i != j){
		if(arr[i] == ' '){
			arr[i] = '@';
		}
	
		i++;
	}
}

int main(){

	 char ch[100];
	 cout << "enter your string" << endl;
	 cin.getline(ch,100);//take input using this
	 strReplace(ch);
	 cout << "new string is " << ch <<endl;
}