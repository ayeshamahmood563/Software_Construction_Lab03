/*
  Task 3: Add Another Variable
  Description: Collects student details including name, age, GPA, and department, 
  then displays the complete information.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variable declarations
    string name;
    int age;
    double gpa;
    string department; // Task 3: Added department variable

    // Taking inputs from the user
    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter age:";
    cin >> age;

    cout << "Enter GPA:";
    cin >> gpa;

    // Clear the input buffer to safely handle the next string input
    cin.ignore();

    // Task 3: Taking department as input
    cout << "Enter department: ";
    getline(cin, department);

    // Displaying the final formatted output including the department
    cout << "\nStudent Information\n";
    cout << "-------------------\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "GPA: " << gpa << "\n";
    cout << "Department: " << department << "\n"; // Task 3: Display department

    return 0;
}

