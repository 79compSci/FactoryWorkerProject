#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

using namespace std;

int main() {
    // Test Employee Class
    cout << "=== Employee Test ===" << endl;
    Employee emp1("John Doe", 101, "5/15/2022");
    emp1.print();
    cout << endl;

    // Test ProductionWorker Class
    cout << "=== ProductionWorker Test ===" << endl;
    ProductionWorker worker1("Paul Jones", 12345, "10/28/2024", 1, 20.25);
    ProductionWorker worker2("Harriet Smith", 54321, "6/15/2024", 2, 25.50);

    cout << "Production Worker 1:" << endl;
    worker1.print();
    cout << endl;

    cout << "Production Worker 2:" << endl;
    worker2.print();
    cout << endl;

    // Test ShiftSupervisor Class
    cout << "=== ShiftSupervisor Test ===" << endl;
    ShiftSupervisor supervisor("Elmer Velasquez", 100325, "1/17/2024", 70000.00, 1000.00);

    cout << "Shift Supervisor:" << endl;
    supervisor.print();
    cout << endl;

    // Test TeamLeader Class
    cout << "=== TeamLeader Test ===" << endl;
    TeamLeader teamLeader("Mike Rogers", 64327, "2/7/2024", 2, 25.50, 150.00, 20, 10);

    cout << "Team Leader:" << endl;
    teamLeader.print();
    cout << endl;

    return 0;
}