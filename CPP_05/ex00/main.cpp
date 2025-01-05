#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    try {
        std::cout << "=== Testing Bureaucrat Creation ===" << std::endl;
        Bureaucrat bob("Bob", 75); // Valid grade
        std::cout << bob.getName() << " created with grade: " << bob.getGrade() << std::endl;

        Bureaucrat alice("Alice", 1); // Valid grade (upper limit)
        std::cout << alice.getName() << " created with grade: " << alice.getGrade() << std::endl;

        std::cout << "=== Testing Invalid Bureaucrat Creation ===" << std::endl;
        Bureaucrat invalidHigh("InvalidHigh", 0); // Should throw GradeTooHighException
    } catch (const Bureaucrat::GradeTooHighException &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        Bureaucrat invalidLow("InvalidLow", 151); // Should throw GradeTooLowException
    } catch (const Bureaucrat::GradeTooHighException &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        std::cout << "\n=== Testing Grade Increment ===" << std::endl;
        Bureaucrat john("John", 2);
        std::cout << john.getName() << " starts with grade: " << john.getGrade() << std::endl;

        john.incrementGrade();
        std::cout << john.getName() << " after increment: " << john.getGrade() << std::endl;

        std::cout << "Trying to increment past grade 1..." << std::endl;
        john.incrementGrade(); // Should throw GradeTooHighException
    } catch (const Bureaucrat::GradeTooHighException &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        std::cout << "\n=== Testing Grade Decrement ===" << std::endl;
        Bureaucrat jane("Jane", 149);
        std::cout << jane.getName() << " starts with grade: " << jane.getGrade() << std::endl;

        jane.decrementGrade();
        std::cout << jane.getName() << " after decrement: " << jane.getGrade() << std::endl;

        std::cout << "Trying to decrement past grade 150..." << std::endl;
        jane.decrementGrade(); // Should throw GradeTooLowException
    } catch (const Bureaucrat::GradeTooLowException &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
