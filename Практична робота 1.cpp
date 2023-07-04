#include <iostream>
#include <iomanip>

int main() {
    int t1, t2, t3;
    std::cin >> t1 >> t2 >> t3;
    double total_time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;
    std::cout << std::fixed << std::setprecision(2) << 1.0 / total_time << std::endl;
    return 0;
}
