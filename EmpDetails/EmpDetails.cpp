#include <iostream>
using namespace std;

// Employee class definition
class Employee {
private:
    string name;
    int empID;
    string department;
    float salary;

public:
    // Method to input employee details
    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore(); // To ignore the newline character after empID

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Department: ";
        getline(cin, department);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Method to display employee details
    void displayDetails() {
        cout << "\nEmployee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: Rs." << salary << endl;
        cout << "-----------------------------" << endl;
    }
};

// Main function
int main() {
    int num;

    cout << "Enter number of employees: ";
    cin >> num;

    // Creating array of Employee objects
    Employee employees[num];

    // Getting details for each employee
    for (int i = 0; i < num; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        employees[i].getDetails();
    }

    // Displaying employee details
    cout << "\n--- Employee Details ---\n";
    for (int i = 0; i < num; i++) {
        employees[i].displayDetails();
    }

    return 0;
}
