#include <iostream>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int findLCM(int numbers[], int count) {
    int result = numbers[0];
    for (int i = 1; i < count; i++) {
        result = lcm(result, numbers[i]);
    }
    return result;
}

int main() {
    int count;
    std::cin >> count;

    int numbers[count];
    for (int i = 0; i < count; i++) {
        std::cin >> numbers[i];
    }

    int lcmResult = findLCM(numbers, count);
    std::cout << lcmResult << std::endl;

    return 0;
}
