#include <iostream>
using namespace std;

int main() {
    int number;
    int oddCount = 0, evenCount = 0;

    cout << "Enter numbers (0 to stop): " << endl;

    while (true) {
        cin >> number;

        if (number == 0) {
            break; // Stop the loop when the user enters 0
        }

        if (number % 2 == 0) {
            evenCount++; // Increment even count
        } else {
            oddCount++; // Increment odd count
        }
    }

    cout << "Total even numbers: " << evenCount << endl;
    cout << "Total odd numbers: " << oddCount << endl;

    return 0;
}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int choice;
//    double num1, num2, result;
//
//    do {
//        // Display the menu
//        cout << "\nSimple Calculator Menu:" << endl;
//        cout << "1: Addition" << endl;
//        cout << "2: Subtraction" << endl;
//        cout << "3: Multiplication" << endl;
//        cout << "4: Division" << endl;
//        cout << "5: Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//            case 1: // Addition
//                cout << "Enter two numbers: ";
//                cin >> num1 >> num2;
//                result = num1 + num2;
//                cout << "Result: " << result << endl;
//                break;
//
//            case 2: // Subtraction
//                cout << "Enter two numbers: ";
//                cin >> num1 >> num2;
//                result = num1 - num2;
//                cout << "Result: " << result << endl;
//                break;
//
//            case 3: // Multiplication
//                cout << "Enter two numbers: ";
//                cin >> num1 >> num2;
//                result = num1 * num2;
//                cout << "Result: " << result << endl;
//                break;
//
//            case 4: // Division
//                cout << "Enter two numbers: ";
//                cin >> num1 >> num2;
//                if (num2 == 0) {
//                    cout << "Error: Division by zero is not allowed." << endl;
//                } else {
//                    result = num1 / num2;
//                    cout << "Result: " << result << endl;
//                }
//                break;
//
//            case 5: // Exit
//                cout << "Exiting the program. Goodbye!" << endl;
//                break;
//
//            default: // Invalid choice
//                cout << "Invalid choice. Please try again." << endl;
//        }
//    } while (choice != 5);
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//    int marks;
//    char grade;
//    char choice;
//
//    do {
//        // Prompt user to enter marks
//        cout << "Enter marks (0-100): ";
//        cin >> marks;
//
//        // Validate input
//        if (marks < 0 || marks > 100) {
//            cout << "Invalid input. Marks should be between 0 and 100." << endl;
//        } else {
//            // Determine grade using if-else
//            if (marks >= 90) {
//                grade = 'A';
//            } else if (marks >= 80) {
//                grade = 'B';
//            } else if (marks >= 70) {
//                grade = 'C';
//            } else if (marks >= 60) {
//                grade = 'D';
//            } else {
//                grade = 'F';
//            }
//
//            // Display grade
//            cout << "Grade: " << grade << endl;
//        }
//
//        // Ask if the user wants to calculate again
//        cout << "Do you want to calculate grades for another student? (y/n): ";
//        cin >> choice;
//
//    } while (choice == 'y' || choice == 'Y'); // Repeat if user chooses 'y' or 'Y'
//
//    cout << "Exiting the program. Goodbye!" << endl;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int number;
//
//    // Prompt the user to enter a positive integer
//    cout << "Enter a positive integer: ";
//    cin >> number;
//
//    if (number <= 0) {
//        cout << "Invalid input. Please enter a positive integer." << endl;
//    } else {
//        cout << "Divisors of " << number << " are: ";
//
//        // Use a for loop to find divisors
//        for (int i = 1; i <= number; i++) {
//            if (number % i == 0) { // Check if 'i' divides the number evenly
//                cout << i << " ";
//            }
//        }
//
//        cout << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//
//    // Prompt the user to enter a positive integer
//    cout << "Enter a positive integer: ";
//    cin >> n;
//
//    if (n <= 0) {
//        cout << "Invalid input. Please enter a positive integer." << endl;
//    } else {
//        // Use nested loops to generate the reverse number pattern
//        for (int i = n; i >= 1; i--) {
//            for (int j = i; j >= 1; j--) {
//                cout << j << " ";
//            }
//            cout << endl;
//        }
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <iomanip> // For formatting output
//using namespace std;
//
//int main() {
//    int n;
//
//    // Prompt the user to enter a positive integer
//    cout << "Enter a positive integer: ";
//    cin >> n;
//
//    if (n <= 0) {
//        cout << "Invalid input. Please enter a positive integer." << endl;
//    } else {
//        // Display the table header
//        cout << setw(6) << "Number" << setw(8) << "Square" << setw(8) << "Cube" << endl;
//
//        // Use a for loop to calculate squares and cubes
//        for (int i = 1; i <= n; i++) {
//            cout << setw(6) << i << setw(8) << i * i << setw(8) << i * i * i << endl;
//        }
//    }
//
//    return 0;
//}

