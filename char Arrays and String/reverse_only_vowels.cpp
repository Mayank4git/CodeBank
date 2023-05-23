#include<iostream>
#include<string>
using namespace std;


bool isVowel(char st){

 char ch = tolower(st);

 return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
  
}

string reverse(string ch){
    int i =0 ;
	int j = ch.size()-1;

	while(i<j){
		if(isVowel(ch[i]) && isVowel(ch[j])){
			swap(ch[i], ch[j]);
			i++;
			j--;
		} else if(isVowel(ch[i]) == 0){
			i++;
		} else {
			j--;
		}
	}
	
	return ch;
}

int main(){
	string str;
	cout << "enter the string " << endl;
	cin >> str;
    string ans = reverse(str);

	cout << "string after only vowels reverse in a string is " << ans;
}