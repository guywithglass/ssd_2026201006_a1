#include <iostream>
#include <string>

class Dashboard {
private:
    std::string studentName;
    int pendingTasks;

public:
    Dashboard(const std::string& name, int tasks)
        : studentName(name), pendingTasks(tasks) {}

    void displayWelcome() const {
        std::cout << "============================\n";
        std::cout << "       STUDENT PORTAL       \n";
        std::cout << "============================\n";
        std::cout << "Welcome, " << studentName << "!\n";
        std::cout << "Pending tasks: " << pendingTasks << "\n";
    }

    void displayMenu() const {
        std::cout << "\n1. View Profile\n";
        std::cout << "2. View Settings\n";
        std::cout << "3. Logout\n";
        std::cout << "4. Exit\n";
    }
};

int main() {
    Dashboard dashboard("Vishal", 3);

    dashboard.displayWelcome();
    dashboard.displayMenu();

    return 0;
}