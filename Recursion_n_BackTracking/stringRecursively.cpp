#include<iostream>
#include<string>
using namespace std;

bool findKey(string st, int n, int i, char key){

	if(i >= n){
		return false;
	}

	if(st[i] == key){

		return true; // return index if key is present in the string
	}

    return findKey(st,n,i+1,key);
}

int main(){
	string str = "mayank";
	int n = str.length();
	int i = 0;
	char key = 'y';// key you want to search in given string
	bool ans = findKey(str,n,i,key);
	cout << "answer is " << ans;
}


// agar index return krni ho uss key ki then

#include<iostream>
#include<string>
using namespace std;

bool  findKey(string st, int n, int i, char key){

	if(i >= n){
		return -1;
	}

	if(st[i] == key){

		return i;// return index if key is present in the string
	}

    return findKey(st,n,i+1,key);
}

int main(){
	string str = "mayank";
	int n = str.length();
	int i = 0;
	char key = 'y';// key you want to search in given string

	bool ans = findKey(str,n,i,key);
	cout << "answer is " << ans;
}

// agar index return krni ho uss key ki jitni bhi h string mein then 

#include<iostream>
#include<string>
using namespace std;

void findKey(string st, int n, int i, char key){

	if(i >= n){
		return;
	}
	if(st[i] == key){
        cout << "key is found at : "<< i << endl;

	}
    return findKey(st,n,i+1,key);
}

int main(){
	string str = "mayank";
	int n = str.length();
	int i = 0;
	char key = 'a';// key you want to search in given string
	findKey(str,n,i,key);

}


// agar store krni ho uss key ki jitni bhi h string mein index ho then 

/*
Note/Hint : agr kbhi variable mein ans store krana ho ya kissi ki value retain
krni  ho to usko pass by reference kr do funtion k ander
*/ 

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void findKey(string st, int n, int i, char key,vector<int>& ans){

	if(i >= n){
		return;
	}
	if(st[i] == key){
        ans.push_back(i);
	}
    return findKey(st,n,i+1,key,ans);
}

int main(){
	string str = "mayank";
	int n = str.length();
	int i = 0;
	char key = 'a';// key you want to search in given string
	vector<int>ans;
	findKey(str,n,i,key,ans);
	for(auto val:ans){
		cout << val << " ";
    }
}