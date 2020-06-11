#include <iostream>  
#include <fstream>  
using namespace std;  
int main () {  
  ofstream may("example.txt");  
  if (may.is_open())  
  {  
    may << "Welcome.\n";  
    may << "C++ Tutorial.\n";  
    may.close();  
  }  
  else cout <<"File opening is fail.";  
  return 0;  
}  