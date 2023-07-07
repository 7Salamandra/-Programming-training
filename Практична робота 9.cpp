#include <iostream>
#include <vector>
#include <algorithm>

int calculateMinSteps(int x, int y) {
    std::vector<int> dp(y + 1, 0);
    
    for (int i = x + 1; i <= y; i++) {
        if (i % 2 == 0)
            dp[i] = std::min(dp[i - 1], dp[i / 2]) + 1;
        else
            dp[i] = dp[i - 1] + 1;
    }
    
    return dp[y];
}

int main() {
    int x, y;
    std::cout << "Введіть значення x: ";
    std::cin >> x;
    std::cout << "Введіть значення y: ";
    std::cin >> y;
    
    int result = calculateMinSteps(x, y);
    
    std::cout << "Мінімальна кількість кроків: " << result << std::endl;
    
    return 0;
}