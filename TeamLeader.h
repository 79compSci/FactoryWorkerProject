#include <iostream>
#include <iomanip>
#include "ProductionWorker.h" // Assuming ProductionWorker is in a separate file

using namespace std;

class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus;      // Monthly bonus amount
    int requiredTrainingHours; // Required training hours per year
    int attendedTrainingHours; // Attended training hours

public:
    // Default Constructor
    TeamLeader()
        : ProductionWorker(), monthlyBonus(0.0), requiredTrainingHours(0), attendedTrainingHours(0) {}

    // Parameterized Constructor
    TeamLeader(string empName, int empNumber, string empHireDate, int empShift, double payRate,
               double bonus, int requiredHours, int attendedHours)
        : ProductionWorker(empName, empNumber, empHireDate, empShift, payRate) {
        setMonthlyBonus(bonus);
        setRequiredTrainingHours(requiredHours);
        setAttendedTrainingHours(attendedHours);
    }

    // Accessor for monthly bonus
    double getMonthlyBonus() const {
        return monthlyBonus;
    }

    // Mutator for monthly bonus
    void setMonthlyBonus(double bonus) {
        // Preconditions: bonus must be non-negative
        if (bonus < 0) {
            throw invalid_argument("Monthly bonus cannot be negative.");
        }
        monthlyBonus = bonus;
    }

    // Accessor for required training hours
    int getRequiredTrainingHours() const {
        return requiredTrainingHours;
    }

    // Mutator for required training hours
    void setRequiredTrainingHours(int hours) {
        // Preconditions: hours must be non-negative
        if (hours < 0) {
            throw invalid_argument("Required training hours cannot be negative.");
        }
        requiredTrainingHours = hours;
    }

    // Accessor for attended training hours
    int getAttendedTrainingHours() const {
        return attendedTrainingHours;
    }

    // Mutator for attended training hours
    void setAttendedTrainingHours(int hours) {
        // Preconditions: hours must be non-negative
        if (hours < 0) {
            throw invalid_argument("Attended training hours cannot be negative.");
        }
        attendedTrainingHours = hours;
    }

    // Print function to override base class
    void print() const override {
        ProductionWorker::print(); // Call base class print
        cout << "Monthly Bonus: $" << fixed << setprecision(2) << monthlyBonus << "\n"
             << "Required Training Hours: " << requiredTrainingHours << "\n"
             << "Attended Training Hours: " << attendedTrainingHours << "\n";
    }
};