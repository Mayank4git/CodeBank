// output:

/*

*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *

*/

#include <iostream>
using namespace std;

int main()
{    
    int r;
    cout << "enter no of rows" << endl;
    cin >> r;
    //outer loop is for rows
    for(int i = 0; i < r; i++){
        // inner loop for columns print        
        for(int j = 0; j < i+1; j++){
             cout << "*";
        
        }
        cout << endl;
    }
}