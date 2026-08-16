#include <iostream>
#include <string>

bool validateCredentials(const std::string& username,
                         const std::string& password) {
    return !username.empty() && !password.empty();
}

bool authenticateUser(const std::string& username,
                      const std::string& password) {
    return username == "student" && password == "portal123";
}

int main() {
    std::string username;
    std::string password;

    std::cout << "Username: ";
    std::cin >> username;

    std::cout << "Password: ";
    std::cin >> password;

    if (!validateCredentials(username, password)) {
        std::cout << "Username and password are required." << std::endl;
        return 1;
    }

    if (authenticateUser(username, password)) {
        std::cout << "Login successful. Welcome, " << username << "!" << std::endl;
    } else {
        std::cout << "Invalid username or password." << std::endl;
    }

    return 0;
}