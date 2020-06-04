#include <iostream>
#include <cstring>

using namespace std;

struct student
{
  string name;
  int roll_no;
};

int main(){

	struct student stud = {"Sam",1};
  	struct student *ptr;
  	ptr = &stud;

  	cout << stud.name << stud.roll_no << endl;
  	cout << ptr->name << ptr->roll_no << endl;
	
}