#include <iostream>
#include <string>

class Dashboard {
public:
    void show() {
        std::cout << "====================\n";
        std::cout << "      DASHBOARD      \n";
        std::cout << "====================\n";
        std::cout << "1. View Profile\n";
        std::cout << "2. Settings\n";
        std::cout << "3. Logout\n";
        std::cout << "====================\n";
    }
};

int main() {
    Dashboard dashboard;
    dashboard.show();

    return 0;
}