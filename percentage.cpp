#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name;
    int roll, marks[3];
    char choice;

    do {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;

        int total = 0;
        for (int i = 0; i < 3; i++) {
            cout << "Enter marks in Subject " << i + 1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }

        double percentage = total / 3.0;
        string grade;
        if (percentage >= 90) grade = "A+";
        else if (percentage >= 80) grade = "A";
        else if (percentage >= 70) grade = "B";
        else if (percentage >= 60) grade = "C";
        else if (percentage >= 50) grade = "D";
        else grade = "F";

        cout << "\n--- Result ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Total Marks: " << total << endl;
        cout << fixed << setprecision(2);
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;

        cout << "\nDo you want to enter another student? (y/n): ";
        cin >> choice;
        cout << endl;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
