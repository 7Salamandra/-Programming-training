#include <iostream>
#include <vector>

int countSequences(int n) {
    std::vector<int> dp(n + 1);
    dp[1] = 2;
    
    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 12345;
    }
    
    return dp[n];
}

int main() {
    int n;
    std::cout << "Введіть довжину послідовності n: ";
    std::cin >> n;
    
    int result = countSequences(n);
    
    std::cout << "Кількість шуканих послідовностей: " << result << std::endl;
    
    return 0;
}

