#include <iostream>
#include <string>

class Profile {
private:
    std::string name;
    std::string email;
    std::string course;

public:
    Profile(const std::string& name,
            const std::string& email,
            const std::string& course)
        : name(name), email(email), course(course) {}
    
    void displayContactSummary() const {
        std::cout << "\nContact Summary\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Email: " << email << "\n";
    }

    void displayProfile() const {
        std::cout << "============================\n";
        std::cout << "       STUDENT PROFILE      \n";
        std::cout << "============================\n";
        std::cout << "Name   : " << name << "\n";
        std::cout << "Email  : " << email << "\n";
        std::cout << "Course : " << course << "\n";
    }
};

int main() {
    Profile student(
        "Vishal",
        "vishal@example.com",
        "Software Development"
    );

    student.displayProfile();
    student.displayContactSummary();

    return 0;
}