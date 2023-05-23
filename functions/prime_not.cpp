/*Prime number explaination :

Each natural number that is divisible only by 1 and itself is prime. 
Also, 2 is the first prime number.

For example, we want to test that number 100 is a prime number or not. 
we can do a trial division to test the primality of 100.

Let's look at all the divisors of 100:

2, 4, 5, 10, 20, 25, 50

Here we see that the largest factor is 100/2 = 50. This is true for all n: all divisors are less than or equal to n/2.

So here condition i<=n/2 condition is correct. Since we need to test divisors up to n/2 only.

Please check the Wiki link for more detail https://en.wikipedia.org/wiki/Primality_test

Second example

Similarly, for 11 you would check all integers smaller than 5.5, i.e. 1, 2, 3, 4 and 5.

*/

#include<iostream>
using namespace std;

//Appraoch 1;
int isPrime(int m){
    int c = 0;
	for(int i=1;i<=m;i++){
       if(m % i == 0){
       	  c++;
       }
	}
	return c; 


}

// or this loop/function will check number is prime or not

bool isPrime(int n)
{
	// Corner case
	if (n <= 1)
	return false;

	// Check from 2 to n-1
	for (int i = 2; i < n; i++)
	if (n % i == 0)
	    return false;

	return true;
}

int main(){

	int n;
	cout << "enter number"<<endl;
	cin >> n;
	int check = isPrime(n);

	if(check == 2){
		cout << "number is prime";
	}
	else{
		cout << "number is not prime";
	}
}


//Approach 2:

#include<iostream>
using namespace std;

int isPrime(int n){
   
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";

  return 0;
}

int main(){

	int n;
	cout << "enter number"<<endl;
	cin >> n;
    isPrime(n);

}


//Appraoch 3:

/*

For : n = 24
Factors : 1, 2, 3, 4, 6, 8, 12, and 24.

Factors of values higher than √n are just mirroring images of factors of values less than √n. Think of √n as the boundary (mirror) separating factors smaller than √n and the factors greater than √n.

In case of n = 24, √n = 5 (approx). The factors before 5 are 1, 2,3, and 4. The factors after 5 are 6, 8, 12, and 24.

Notice how 1 * 24 = 24, 2 * 12 = 24, 3 * 8 = 24, 4 * 6 = 24. Each of these multiplications is of the form i * j = 24, where i is a factor smaller than √n and j is a factor from the other side of the mirror/boundary, i.e., j is a number greater than √n.

So, in order to check whether a number is a prime number or not, we check the factors of the number on or below the square root of the number. If there exists some factor, the number is non-prime, else it will be prime.

Now, if there exists a number i <= √n such that i is a factor of n, then we can conclude that n is a non-prime. But if no such i <= √n exists, then we can conclude that n is certainly a prime number.

Time Complexity: The time complexity of this solution is root N i.e. O(√N). This is because we are traversing just √N numbers.

Space Complexity (Auxiliary Space): Since we have not used any extra space, the auxiliary space is O(1).

*/


#include<iostream>
using namespace std;

int isPrime(int n){
   
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  for (i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";

  return 0;
}

int main(){

	int n;
	cout << "enter number"<<endl;
	cin >> n;
    isPrime(n);

}