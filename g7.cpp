//#include <iostream>
//using namespace std;
//
//int main() {
//    int items;
//    cout << "Enter the number of items: ";
//    cin >> items;
//
//    double total = 0.0, price;
//    int i = 1;
//
//    while (i <= items) {
//        cout << "Enter price of item " << i << ": ";
//        cin >> price;
//
//        if (price < 0) {
//            cout << "Negative price ignored.\n";
//            continue;
//        }
//
//        if (price == 0) {
//            cout << "Zero price entered. Ending input.\n";
//            break;
//        }
//
//        total += price;
//        i++;
//    }
//
//    cout << "Total bill: $" << total << endl;
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//    int day = 1;
//    double steps, totalSteps = 0.0;
//
//    while (day <= 7) {
//        cout << "Enter steps for day " << day << ": ";
//        cin >> steps;
//
//        if (steps < 1000) {
//            cout << "Warning: Activity below average!\n";
//        }
//
//        totalSteps += steps;
//        day++;
//    }
//
//    cout << "Average steps for the week: " << totalSteps / 7 << endl;
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//    int i = 1;
//
//    while (i <= 50) {
//        if (i % 5 == 0) {
//            i++;
//            continue;
//        }
//
//        if (i % 2 == 0) {
//            cout << "Even Number: " << i << endl;
//        } else {
//            cout << "Odd Number: " << i << endl;
//        }
//
//        i++;
//    }
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//    int balance, withdraw;
//
//    cout << "Enter your balance: ";
//    cin >> balance;
//
//    do {
//        cout << "Enter amount to withdraw (0 to exit): ";
//        cin >> withdraw;
//
//        if (withdraw == 0) {
//            cout << "Transaction cancelled.\n";
//            break;
//        }
//
//        if (withdraw > balance || withdraw %500 != 0) {
//            cout << "Invalid amount. Try again.\n";
//            continue;
//        }
//
//        balance -= withdraw;
//        cout << "Transaction successful. Remaining balance: " << balance << endl;
//
//    } while (withdraw != 0);
//
//    return 0;
//}
#include <iostream>
using namespace std;

int main() {
    int employees, hours;

    cout << "Enter the number of employees: ";
    cin >> employees;

    int i = 1;

    do {
        cout << "Enter hours worked by employee " << i << ": ";
        cin >> hours;

        if (hours <= 40) {
            cout << "No overtime pay.\n";
        } else {
            double overtimePay = (hours - 40) * 10;
            cout << "Overtime pay for employee " << i << ": $" << overtimePay << endl;
        }

        i++;
    } while (i <= employees);

    return 0;
}

