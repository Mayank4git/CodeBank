

#include <iostream>
#include <cstring>

using namespace std;

struct student
{
	int roll_no;
  	string name;
  	int phone_number;
};

void display(struct student st)
{
  	cout << "Roll no : " << st.roll_no << endl;
  	cout << "Name : " << st.name << endl;
  	cout << "Phone no : " << st.phone_number << endl;
}

int main(){
	struct student s;
  	s.roll_no = 4;
  	s.name = "Ron";
  	s.phone_number = 888888;
  	display(s);
	
}