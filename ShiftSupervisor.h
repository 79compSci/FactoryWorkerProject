#include <iostream>
#include <iomanip>
#include "Employee.h" // Assuming Employee class is in a separate file named Employee.h

using namespace std;

class ShiftSupervisor : public Employee {
private:
    double annualSalary;
    double annualBonus;

public:
    // Default Constructor
    ShiftSupervisor() : Employee(), annualSalary(0.0), annualBonus(0.0) {}

    // Parameterized Constructor
    ShiftSupervisor(string empName, int empNumber, string empHireDate, double salary, double bonus)
        : Employee(empName, empNumber, empHireDate) {
        setAnnualSalary(salary);
        setAnnualBonus(bonus);
    }

    // Accessor for annual salary
    double getAnnualSalary() const {
        return annualSalary;
    }

    // Mutator for annual salary
    void setAnnualSalary(double salary) {
        // Preconditions: salary must be non-negative
        if (salary < 0) {
            throw invalid_argument("Annual salary cannot be negative.");
        }
        annualSalary = salary;
    }

    // Accessor for annual bonus
    double getAnnualBonus() const {
        return annualBonus;
    }

    // Mutator for annual bonus
    void setAnnualBonus(double bonus) {
        // Preconditions: bonus must be non-negative
        if (bonus < 0) {
            throw invalid_argument("Annual bonus cannot be negative.");
        }
        annualBonus = bonus;
    }

    // Print function to override base class
    void print() const override {
        Employee::print(); // Call base class print
        cout << "Annual Salary: $" << fixed << setprecision(2) << annualSalary << "\n"
             << "Annual Bonus: $" << fixed << setprecision(2) << annualBonus << "\n";
    }
};