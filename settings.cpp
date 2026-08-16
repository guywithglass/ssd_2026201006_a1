#include <iostream>
#include <string>

class Settings {
public:
    void show() {
        std::cout << "====================\n";
        std::cout << "      SETTINGS      \n";
        std::cout << "====================\n";
        std::cout << "1. Change Username\n";
        std::cout << "2. Change Email\n";
        std::cout << "3. Change Password\n";
        std::cout << "4. Notifications\n";
        std::cout << "5. Back\n";
        std::cout << "====================\n";
    }
};

int main() {
    Settings settings;
    settings.show();

    return 0;
}