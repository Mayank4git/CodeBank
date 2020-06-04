#include<iostream>
#include<cstring>
using namespace std;

struct student
{
	int roll;
	string name;
	string standard;
	
};

int main()

{

student s;
 
 s={1,"mayank","v"};   //direct initialization like a array we
 cout<<"roll no of student"<<endl;
 cout<<s.roll;
 cout<<"\n name of student"<<endl;
 cout<<s.name;
 cout<<"\n standard"<<endl;
 cout<<s.standard;


}