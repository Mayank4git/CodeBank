//input === 542 then output is 5 4 2 


#include<iostream>
using namespace std;


int main(){
	int m;
	cout << "enter your number"<<endl;
	cin >> m;

 while(m != 0){
     	
     	int rem = m%10; //printing remainder which are digits of given number 
     	cout << "digit is : "<<rem <<endl;
     	m = m/10;
        
    }
     return 0;

}

/*
explaination:

542 % 10 == 2 remainder print
then 
542/10 == 54 number again

54%10 == 4 remainder print
then
54/10 = 5 number again

5%10 == 5 print

terminte if m !=0 
*/