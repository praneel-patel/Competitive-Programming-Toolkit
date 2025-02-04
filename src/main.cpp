#include <iostream>
#include "test_runner.h"
#include "input_generator.h"
#include "timer.h"

using namespace std;

void menu() {
    cout << "\nCompetitive Programming Toolkit" << endl;
    cout << "1. Run Test Cases" << endl;
    cout << "2. Generate Test Cases" << endl;
    cout << "3. Measure Execution Time" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    do {
        menu();
        cin >> choice;
        switch(choice) {
            case 1:
                runTests();
                break;
            case 2:
                generateCases();
                break;
            case 3:
                measureTime();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Try again!" << endl;
        }
    } while (choice != 4);
}