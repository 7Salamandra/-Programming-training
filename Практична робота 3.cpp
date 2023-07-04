#include <iostream>
#include <cmath>

int countNumbers(int p) {
    int dp[p+1];
    dp[1] = 2; 

    for (int i = 2; i <= p; i++) {
        dp[i] = dp[i-1] * 2; 
    }

    return dp[p];
}

int main() {
    int p;
    std::cin >> p;

    int result = countNumbers(p);
    std::cout << result << std::endl;

    return 0;
}
