#include<iostream>
using namespace std;

struct student
{
	int roll;
	string name;
	string standard;
	
};

int main()

{

struct student s;

s.roll=1;
s.name="mayank";
s.standard="v";



 cout<<"roll no of student"<<endl;
 cout<<s.roll;
 cout<<"\n name of student"<<endl;
 cout<<s.name;
 cout<<"\n standard"<<endl;
 cout<<s.standard;


}