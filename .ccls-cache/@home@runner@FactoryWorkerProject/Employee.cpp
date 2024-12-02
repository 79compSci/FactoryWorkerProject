#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;       // Employee name
    int employeeNumber; // Employee number (ID)
    string hireDate;   // Hire date in format YYYY-MM-DD

public:
    // Default Constructor
    Employee() : name(""), employeeNumber(0), hireDate("") {}

    // Parameterized Constructor
    Employee(string empName, int empNumber, string empHireDate) {
        setName(empName);
        setEmployeeNumber(empNumber);
        setHireDate(empHireDate);
    }

    // Accessor for name
    string getName() const {
        return name;
    }

    // Mutator for name
    void setName(string empName) {
        // Preconditions: empName should not be empty
        if (empName.empty()) {
            throw invalid_argument("Name cannot be empty.");
        }
        name = empName;
    }

    // Accessor for employee number
    int getEmployeeNumber() const {
        return employeeNumber;
    }

    // Mutator for employee number
    void setEmployeeNumber(int empNumber) {
        // Preconditions: empNumber must be positive
        if (empNumber <= 0) {
            throw invalid_argument("Employee number must be positive.");
        }
        employeeNumber = empNumber;
    }

    // Accessor for hire date
    string getHireDate() const {
        return hireDate;
    }

    // Mutator for hire date
    void setHireDate(string empHireDate) {
        // Preconditions: empHireDate must match YYYY-MM-DD format
        if (empHireDate.empty() || empHireDate.length() != 10) {
            throw invalid_argument("Hire date must be in format YYYY-MM-DD.");
        }
        hireDate = empHireDate;
    }

    // Print Employee Details
    void print() const {
        cout << "Employee Details:\n"
             << "Name: " << name << "\n"
             << "ID Number: " << employeeNumber << "\n"
             << "Hire Date: " << hireDate << "\n";
    }
};