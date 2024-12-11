//#include<iostream>
//using namespace std;
//int main(){
//	int num;
//	
//	cout<<"simple calcultor"<<endl;
//	cout<<"addition"<<endl;
//	cout<<"subtract"<<endl;
//	cout<<"multiply"<<endl;
//	cout<<"divide"<<endl;
//	cout<<"enter 2 num"<<endl;
//	cin>>num;
//	cout<<"choose operator"<<endl;
//	cin>>num;
//	cin>>num;
//	
//	
//	
//	
//	
//	
//	return 0;
//}
#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    do {
        // Display the menu
        cout << "\nSimple Calculator Menu:\n";
        cout << "1: Addition\n";
        cout << "2: Subtraction\n";
        cout << "3: Multiplication\n";
        cout << "4: Division\n";
        cout << "5: Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Addition
                cout << "Enter two numbers: ";
                cin >> num1 >> num2 ;
                
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case 2:
                // Subtraction
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case 3:
                // Multiplication
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case 4:
                // Division
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed.\n";
                } else {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                }
                break;
            case 5:
                // Exit
                cout << "Exiting the calculator. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

