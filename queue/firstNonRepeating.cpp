#include<iostream>
#include<queue>
#include<string>
#include<vector>
using namespace std;

int main(){

	string str = "aabc";
	queue<char>q;
	string ans = "";
	int freq[26] = {0};

	for(int i = 0;i<str.length();i++){

		char ch = str[i];
		freq[ch - 'a']++;
		q.push(ch);

		while(!q.empty()){
			if(freq[q.front() - 'a'] > 1){
				q.pop();
			} else{
				// when frequency of char is only 1

				ans.push_back(ch);
				break;
			}
		}

		if(q.empty()){
			ans.push_back('#');
		}

	}
	cout << "final answer is : " << ans;
}