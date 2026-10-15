/*
  Task 4: Calculate Birth Year
  Description: Collects student details, calculates the birth year based on the current year (2026), 
  and displays all the information.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variable declarations
    string name;
    int age;
    double gpa;
    string department;

    // Taking inputs from the user
    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;

    // Task 4: Calculate birth year immediately after taking age as input
    int birthYear = 2026 - age;

    cout << "Enter GPA: ";
    cin >> gpa;

    // Clear the input buffer to safely handle the next string input
    cin.ignore();

    cout << "Enter department: ";
    getline(cin, department);

    // Displaying the final formatted output including the calculated birth year
    cout << "\nStudent Information\n";
    cout << "-------------------\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "GPA: " << gpa << "\n";
    cout << "Department: " << department << "\n";
    cout << "Birth Year: " << birthYear << "\n"; // Task 4: Display the calculated birth year

    return 0;
}