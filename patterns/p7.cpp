/*

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15  

*/

#include<iostream>
using namespace std;

int main(){
int number =1;
int n;
cout << "enter no of rows";
cin >> n;

for(int r = 0; r < n; r++){
        
  		for(int c = 0; c < r + 1; c++){
  		    
        cout << number << " ";
            ++number;
  		}
  			cout << endl;
	}

}