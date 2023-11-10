#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

void isPrime(int);

int main(){
    int userNum;
    std::cout << "Enter a number to find primes below: " << std::endl;
    std::cin >> userNum;

    std::vector<int> numbers;
    for(int i = 2; i <= userNum; i++)
        numbers.push_back(i);

    for_each(numbers.begin(), numbers.end(), isPrime);

    return 0;
}

void isPrime(int num){
    bool prime = true;
    double sqroot = std::sqrt(num);
    if(num % 2 == 0 && num != 2)
        return;

    else
        for(int i = 2; i <= sqroot; i++){
            if(num % i == 0)
                prime = false;
        }
    
    if(prime)
        std::cout << num << std::endl;
}