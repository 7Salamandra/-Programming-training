#include <iostream>

int countEqualDivisors(int n) {
    int count = 0;
    
    for (int i = 1; i <= n; i++) {
        if (n % i == n / i)
            count++;
    }
    
    return count;
}

int main() {
    int n;
    std::cout << "Введіть натуральне число n: ";
    std::cin >> n;
    
    int result = countEqualDivisors(n);
    
    std::cout << "Кількість рівних дільників числа " << n << " : " << result << std::endl;
    
    return 0;
}
