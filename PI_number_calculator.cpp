// Calculate the value of PI following Gregory-Leibniz series
#include <iostream>

int main() {
    int stepCount{ };
    std::cin >> stepCount;

    double PI{ };
    int divisor{ 1 };
    for(int i = 1; i <= stepCount; i++){
        if( (i % 2 ) == 1 ){
            PI += 4.0 / divisor;
        }
        if( (i % 2 ) == 0 ){
            PI -= 4.0 / divisor;
        }
        divisor += 2;
    }

    std::cout << PI << "\n";

    return 0;
}

