#include <iostream>  
using namespace std;  
 
 class Animal {  
   public:  
    void eat() {   
    cout<<"Eating..."<<endl;   
 }    
}; 

class Dog: protected Animal    
   {    
     public:  
     void bark(){  
    cout<<"Barking...";   
     }  
    void calleat()
    {
      eat();
    }
    
   };   

int main() {  
    Dog d1;  
    d1.calleat();  
    d1.bark();  
    
}  