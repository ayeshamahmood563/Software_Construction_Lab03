/*
  Task 5: Use Different Data Types
  Description: Stores and displays values using char and double data types.
*/

#include <iostream>

using namespace std;

int main() {
    // Storing values in different data types
    char grade = 'A';
    double fee = 2500.75;

    // Displaying all stored values
    cout << "Academic Record\n";
    cout << "---------------\n";
    cout << "Grade: " << grade << "\n";
    cout << "Fee: $" << fee << "\n";

    return 0;
}