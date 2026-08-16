#include <iostream>
#include <string>

class Settings {
public:

    bool validatePasswordChange(const std::string& currentPassword,
                                const std::string& newPassword) const {
        if (currentPassword.empty() || newPassword.empty()) {
            return false;
        }

        if (newPassword.length() < 8) {
            return false;
        }

        return currentPassword != newPassword;
    }

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

    void showNotificationStatus(bool enabled) const {
        std::cout << "Notifications: "
                << (enabled ? "Enabled" : "Disabled")
                << std::endl;
    }
};

int main() {
    Settings settings;
    settings.show();
    settings.showNotificationStatus(true);

    std::cout << "\nPassword validation: "
          << (settings.validatePasswordChange("oldpass", "newpass123")
                  ? "Accepted"
                  : "Rejected")
          << std::endl;

    return 0;
}