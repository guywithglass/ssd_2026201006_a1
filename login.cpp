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
    const int maxAttempts = 3;
    int attempts = 0;

    while (attempts < maxAttempts) {
        std::string username;
        std::string password;

        std::cout << "Username: ";
        std::cin >> username;

        std::cout << "Password: ";
        std::cin >> password;

        if (!validateCredentials(username, password)) {
            std::cout << "Username and password are required." << std::endl;
            continue;
        }

        if (authenticateUser(username, password)) {
            std::cout << "Login successful. Welcome, "
                      << username << "!" << std::endl;
            return 0;
        }

        attempts++;
        std::cout << "Invalid username or password. "
                  << (maxAttempts - attempts)
                  << " attempt(s) remaining." << std::endl;
    }

    std::cout << "Maximum login attempts exceeded." << std::endl;
    return 1;
}