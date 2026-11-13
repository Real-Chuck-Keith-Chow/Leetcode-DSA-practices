#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string FILE_NAME = "students.txt";

void addStudent() {
    cout << "Add a student\n";
}
void viewStudents() {
    cout << "View students\n";
}
void searchStudent() {
    cout << "Search student\n";
}
void updateStudent() {
    cout << "Update student\n";
}
void deleteStudent() {
    cout << "Delete student\n";
}


// Complete the below function---------------------
void handleUserChoice(const string& choice) {

    // Check if user selected option 1 → Add a new student
    if (__________) {
        __________;

    // Check if user selected option 2 → View all students
    } else if (__________) {
        __________;

    // Check if user selected option 3 → Search for a student
    } else if (__________) {
        __________;

    // Check if user selected option 4 → Update a student’s record
    } else if (__________) {
        __________;

    // Check if user selected option 5 → Delete a student’s record
    } else if (__________) {
        __________;

    // Check if user selected option 6 → Exit the application
    } else if (__________) {
        // Inform user that the program is exiting
        cout << "Exiting Student Database Manager..." << endl;

    // Handle invalid input (any choice other than 1-6)
    } else {
        cout << "Invalid choice. Please enter a valid option." << endl;
    }

    //--------------------------------------------------
}


// ------------------- Main Function -------------------

int main() {
    while (true) {
        cout << "\nStudent Database Manager\n";
        cout << "1. Add a Student\n";
        cout << "2. View All Students\n";
        cout << "3. Search Student by ID or Name\n";
        cout << "4. Update Student Details\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Choose an option (1-6): ";

        string choice;
        getline(cin, choice);

        if (choice == "6") {
            cout << "Exiting Student Database Manager..." << endl;
            break;  // exit loop
        }

        handleUserChoice(choice);
    }

    return 0;
}
