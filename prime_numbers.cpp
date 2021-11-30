#include <iostream>

int getNumber(){
    int x;

    std::cout << "Enter a positive integer: ";
    std::cin >> x;

    return x;
}

bool isPrime(int num){
    bool is_prime = true;

    if (num == 0 || num == 1) {
        is_prime = false;
    }
    else {
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
    }
    return is_prime;
}

int main() {
    int n;

    n = getNumber();

    if ( isPrime(n) )
        std::cout << n << " is a prime number";
    else
        std::cout << n << " is not a prime number";

    return 0;
}
