#include <iostream>
#include <vector>
#include <algorithm>

void isPrime(int);

int main(){

}

/*
    * Read in number.
    * Create vector with ints 2 through number.
    * Pass vector to for_each() with iterators pointing to start and end of vector.
    * Each element of vector is passed to isPrime()
    * 
    * isPrime(int num):
    *   bool prime = true
    *   double sqroot = sqrt(num)
    *   Check if int is even, if even end function, call next int.
    *   If odd:
    *       for(int i = 2; i <= sqroot; i++)
    *           if(num % i == 0)
    *               prime = false
    *   if(prime)
    *       display num
*/