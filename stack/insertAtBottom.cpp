#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s, int tar){

	if(s.empty()){
		s.push(tar);
		return;
	}

	int topELe = s.top();
	s.pop();
	solve(s,topELe);
	s.push(topELe);
}

void insertAtBottom(stack<int> &s){

	if(s.empty()){
		cout << "stack is empty";
		return;
	}

	int tar =  s.top();
	s.pop();
	solve(s,tar);
}

int main(){

	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	insertAtBottom(s);

	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
}