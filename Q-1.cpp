#include <iostream>
#include <limits.h>

bool isprime(int x) {
    if (x < 2) {
        return true;
    }
    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int x;
    std::cout << "enter the value of x: ";
    std::cin >> x;
    if (isprime(x)) {
        std::cout << "the number is prime" << std::endl;
    }
    
    else {
        std::cout << "the factors are: ";
        for (int i = 1; i <= x / 2; i++) {
            if (x % i == 0) {
                std::cout << i << " ";
            }
        }
    }
    

    if(isprime(x)) {
        std::cout << "the nearest prime number after " << x << " is ";
        while(x < INT_MAX) {
            x++;
            if(isprime(x)) {
                std::cout << x;
                break;
            }
        }
    }

}