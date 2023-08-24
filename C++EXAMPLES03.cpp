#include <iostream>
using namespace std;

int main() {

    double current_salary = 45;
    double updated_salary = 90;
cout << "Current Salary: " << current_salary << endl;
    cout << "Updated Salary: " << updated_salary << endl;

    // store current_salary to temporary variable
    double temporary = current_salary;
cout << "Current Salary: " << current_salary << endl;
    cout << "Updated Salary: " << updated_salary << endl;

    // assign updated_salary to current_salary
    current_salary = updated_salary;
cout << "Current Salary: " << current_salary << endl;
    cout << "Updated Salary: " << updated_salary << endl;

    // assign old value of current_salary from
    // temporary to updated_salary
    updated_salary = temporary;

    cout << "Current Salary: " << current_salary << endl;
    cout << "Updated Salary: " << updated_salary << endl;

    return 0;
}
