/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

*/

class Solution {
public:
    int reverse(int x) {
        long r=0;      // decleare r 
        while(x){
            r=r*10+x%10; // find reminder and add its to r
            x=x/10;     // Update the value of x
        }
        if(r>INT_MAX || r<INT_MIN) 
        return 0; // check 32 bit range 
        return int(r);
    }
};