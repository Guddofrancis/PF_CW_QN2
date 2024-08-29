#include <iostream>
using namespace std;

// Function to display divisors in decreasing order
void displayDivisors(int num) {
    cout << "Divisors of " << num << " in decreasing order: ";
    for (int i = num; i >= 1; --i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int num;
    
    // Inform user about program behavior
    cout << "This program reads a positive integer, prints its divisors in decreasing order,\n";
    cout << "and repeats the process until a non-positive integer is entered.\n\n";

    do {
        cout << "Enter a positive integer: ";
        cin >> num;

        if (num > 0) {
            displayDivisors(num);

            char choice;
            cout << "Do you want to continue? (y/n): ";
            cin >> choice;

            while (choice != 'y' && choice != 'n') {
                cout << "Invalid input. Please enter y or n: ";
                cin >> choice;
            }

            if (choice == 'n') {
                break;
            }
        } else {
            cout << "Exiting program due to non-positive input.\n";
        }
    } while (num > 0);

    cout << "Thank you for using the program. Goodbye!" << endl;
    return 0;
}
