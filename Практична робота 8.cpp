#include <iostream>

unsigned long long calculateFactorial(int n) {
    unsigned long long factorial = 1;
    
    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }
    
    return factorial;
}

unsigned long long countAnagrams(const std::string& word) {
    int length = word.length();
    unsigned long long factorial = calculateFactorial(length);
    
    return factorial;
}

int main() {
    std::string word;
    std::cout << "Введіть слово: ";
    std::cin >> word;
    
    unsigned long long result = countAnagrams(word);
    
    std::cout << "Кількість можливих анаграм: " << result << std::endl;
    
    return 0;
}