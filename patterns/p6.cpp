//output

/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5 
1 2 3 4 5 6
1 2 3 4 5 6 7

*/

#include<iostream>
using namespace std;

int main()
{
	int r;
	cout << "enter no of rows";
	cin >> r;
	for(int i = 0; i < r; i++){
	  
	  	for(int j = 0; j < i+1; j++){
	  		cout << j + 1; 
	  	}
	  	cout << endl;
	}
}

