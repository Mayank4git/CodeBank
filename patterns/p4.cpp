// output:

// * * * * *
// *       *
// *       *
// * * * * *


#include <iostream>
using namespace std;

int main()
{    
    int r,c;
    cout << "enter no of rows" << endl;
    cin >> r;
    cout << "enter no of columns" << endl;
    cin >> c;
    //outer loop is for rows
    for(int i = 0; i < r; i++){
        // inner loop for columns print        
        if(i == 0 || i == r-1){
            for(int j = 0; j < c; j++){
                cout << "*";
            
            }
        } else {
            cout << "*";
            for(int j = 1; j < c-1; j++){
                cout << " ";
            
            }
            cout << "*";            
        }
        cout << endl;        
    }
}