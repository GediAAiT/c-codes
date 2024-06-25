#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    std::cout << "Enter two positive integers:" << std::endl;
    int num1, num2;
    std::cin >> num1 >> num2;

    if (num1 <= 0 || num2 <= 0) {
        std::cout << "Both numbers must be positive integers." << std::endl;
    } else {
        int result = lcm(num1, num2);
        std::cout << "LCM of " << num1 << " and " << num2 << " is " << result << std::endl;
    }

    return 0;
}
