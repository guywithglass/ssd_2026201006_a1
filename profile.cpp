#include <iostream>
#include <string>

class Profile {
private:
    std::string username;
    std::string email;

public:
    Profile(const std::string& username, const std::string& email)
        : username(username), email(email) {}

    void display() const {
        std::cout << "Username: " << username << std::endl;
        std::cout << "Email: " << email << std::endl;
    }
};

int main() {
    Profile profile("user123", "user@example.com");
    profile.display();

    return 0;
}