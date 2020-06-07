#include<iostream>
#include<string>
using namespace std;

//basic example of class and constructor
class book
{
public:
 int id;
 string author;
   void display()
   {
   	cout<<"this is member function";
   }

};



int main()
{
 
 book object1;
 object1.display();

}