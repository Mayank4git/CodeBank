#include <iostream>
#include<stdio.h>
using namespace std;

class rectangle
{
    private :
    int l,b,area;
    public :
    void read(int x,int y)
    {
        l=x;
        b=y;
    }
    void ar()
    {
        area =l*b;
    }
    void print()
    {
        cout<<"The length of the rectangle is = "<<l<<"\n";
        cout<<"The Breadth of the rectangle is = "<<b<<endl;
        cout<<"Area of rectangle is =  "<<area;
    }
};
int main()
{
    rectangle r;
    r.read(2,5);
    r.ar();
    r.print();
    
}