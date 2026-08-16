#include <iostream>
#include <string>

bool validateCredentials(const std::string& username,
                         const std::string& password) {
    return !username.empty() && !password.empty();
}

int main() {
    std::string username;
    std::string password;

    std::cout << "Username: ";
    std::cin >> username;

    std::cout << "Password: ";
    std::cin >> password;

    if (validateCredentials(username, password)) {
        std::cout << "Login credentials accepted." << std::endl;
    } else {
        std::cout << "Username and password are required." << std::endl;
    }

    return 0;
}