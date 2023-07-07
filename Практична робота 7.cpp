#include <iostream>
#include <cmath>

int countIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    double distance = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
    
    if (distance > r1 + r2) {
        // Кола не перетинаються
        return 0;
    } else if (distance < std::abs(r1 - r2)) {
        // Одне коло повністю знаходиться всередині іншого
        return 0;
    } else if (distance == 0 && r1 == r2) {
        // Кола співпадають
        return -1;
    } else if (distance == r1 + r2 || distance == std::abs(r1 - r2)) {
        // Кола торкаються одне одного ззовні або всередині
        return 1;
    } else {
        // Кола мають дві точки перетину
        return 2;
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;
    std::cout << "Введіть координати центру першого кола (x1, y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Введіть радіус першого кола r1: ";
    std::cin >> r1;
    std::cout << "Введіть координати центру другого кола (x2, y2): ";
    std::cin >> x2 >> y2;
    std::cout << "Введіть радіус другого кола r2: ";
    std::cin >> r2;
    
    int result = countIntersectionPoints(x1, y1, r1, x2, y2, r2);
    
    if (result == 0) {
        std::cout << "Кола не перетинаються" << std::endl;
    } else if (result == -1) {
        std::cout << "Кола співпадають" << std::endl;
    } else {
        std::cout << "Кількість точок перетину: " << result << std::endl;
    }
    
    return 0;
}