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

    void displayTaskStatus() const {
        std::cout << "\nTask Status\n";

        if (pendingTasks == 0) {
            std::cout << "All tasks are completed.\n";
        } else if (pendingTasks <= 3) {
            std::cout << "You have " << pendingTasks
                    << " pending task(s).\n";
        } else {
            std::cout << "You have several pending tasks. "
                    << "Please review them soon.\n";
        }
    }

    void displayMenu() const {
        std::cout << "\n1. View Profile\n";
        std::cout << "2. View Settings\n";
        std::cout << "3. Logout\n";
        std::cout << "4. Exit\n";
    }

    void handleSelection(int choice) const {
        switch (choice) {
            case 1:
                std::cout << "Opening profile...\n";
                break;
            case 2:
                std::cout << "Opening settings...\n";
                break;
            case 3:
                std::cout << "Logging out...\n";
                break;
            case 4:
                std::cout << "Exiting dashboard...\n";
                break;
            default:
                std::cout << "Invalid option.\n";
        }
    }
};

int main() {
    Dashboard dashboard("Vishal", 3);

    dashboard.displayWelcome();
    dashboard.displayTaskStatus();
    dashboard.displayMenu();

    int choice;
    std::cout << "\nSelect an option: ";
    std::cin >> choice;

    dashboard.handleSelection(choice);

    return 0;
}
