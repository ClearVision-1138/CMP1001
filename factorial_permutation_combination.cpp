#include <iostream>

int factorial(int x) {
    int factorial_result = 1;
    if (x < 0) {
        std::cout << "Error! Factorial of a negative number doesn't exist.";
        return 0;
    }
    else {
        for(int i = 1; i <= x; ++i) {
            factorial_result *= i;
        }
        return factorial_result;
    }
}

int permutation(int x, int y){
    int permutation_result = factorial(x) / factorial(x-y);

    return permutation_result;
}

int combination(int x, int y){
    int ccombination_result = factorial(x) / (factorial(x) * factorial(x-y));
}

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    int r;
    std::cout << "Enter r: ";
    std::cin >> r;

    std::cout << "Factorial of " << n << " = " << factorial(n) << "\n";
    std::cout << "Permutation of P(" << n << ", " << r << ") "
              << " = " << permutation(n, r) << "\n";
    std::cout << "Combination of P(" << n << ", " << r << ") "
              << " = " << combination(n, r) << "\n";

    return 0;
}
