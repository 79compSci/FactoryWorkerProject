#include <iostream>
#include <iomanip>
#include "Employee.h" // Assuming Employee class is in a separate file named Employee.h

using namespace std;

class ProductionWorker : public Employee {
private:
    int shift;          // 1 for Day shift, 2 for Night shift
    double hourlyPayRate;

public:
    // Default Constructor
    ProductionWorker() : Employee(), shift(1), hourlyPayRate(0.0) {}

    // Parameterized Constructor
    ProductionWorker(string empName, int empNumber, string empHireDate, int empShift, double payRate)
        : Employee(empName, empNumber, empHireDate) {
        setShift(empShift);
        setHourlyPayRate(payRate);
    }

    // Accessor for shift
    int getShift() const {
        return shift;
    }

    // Mutator for shift
    void setShift(int empShift) {
        // Preconditions: empShift must be 1 or 2
        if (empShift != 1 && empShift != 2) {
            throw invalid_argument("Shift must be 1 (Day) or 2 (Night).");
        }
        shift = empShift;
    }

    // Accessor for hourly pay rate
    double getHourlyPayRate() const {
        return hourlyPayRate;
    }

    // Mutator for hourly pay rate
    void setHourlyPayRate(double payRate) {
        // Preconditions: payRate must be non-negative
        if (payRate < 0) {
            throw invalid_argument("Hourly pay rate cannot be negative.");
        }
        hourlyPayRate = payRate;
    }

    // Print function to override base class
    void print() const override {
        Employee::print(); // Call base class print
        cout << "Shift: " << (shift == 1 ? "Day" : "Night") << "\n"
             << "Hourly Pay Rate: $" << fixed << setprecision(2) << hourlyPayRate << "\n";
    }
};