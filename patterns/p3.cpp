// output:

* * * * *
*       *
* * * * *

#include <iostream>
using namespace std;

int main()
{
        //outer loop is for rows traversing only
    for(int i = 0; i < 3; i++){
        // inner loop for columns traversing and printing output 
        
        if(i == 0 || i == 2){
            for(int j = 0; j < 5; j++){
                cout << "*";            
            }
        } else {
            cout << "*";
            for(int j = 1; j < 4; j++){
                 cout << " ";
            
            }
            cout << "*";            
        }
        cout << endl;    
    }

}