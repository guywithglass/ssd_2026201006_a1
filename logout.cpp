#include <iostream>

class Logout {
public:
    void execute() {
        std::cout << "Logging out..." << std::endl;
        std::cout << "You have been logged out successfully." << std::endl;
    }
};

int main() {
    Logout logout;
    logout.execute();

    return 0;
}