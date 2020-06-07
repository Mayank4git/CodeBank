#include<iostream>
#include<string>
using namespace std;

//basic example of class and constructor
class book
{
public:

   void display();
   

};

void book::display()
{
	cout<<"use of scope resolution operator";
}


int main()
{
 
 book object1;
 object1.display();

}