#include <iostream>
#include <cmath>

double calculateVectorLength(int x1, int y1, int x2, int y2) {
    double length = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
    return length;
}

int main() {
    int x1, y1, x2, y2;
    std::cout << "Введіть координати початку вектора (x1, y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Введіть координати кінця вектора (x2, y2): ";
    std::cin >> x2 >> y2;
    
    double result = calculateVectorLength(x1, y1, x2, y2);
    
    std::cout << "Довжина вектора: " << std::fixed << std::setprecision(6) << result << std::endl;
    
    return 0;
}