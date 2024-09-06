#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14
int main() {
    int choice;
    double num1, num2, result;
    cout << "\t\t\t\t\t\tScientific Calculator\n" << endl;
    while (true) {
		cout<<"Following are the choices for mathematical operations"<<endl;
        cout << "1. Basic Operations" << endl;
        cout << "2. Trigonometric Functions" << endl;
        cout << "3. Exponential Functions" << endl;
        cout << "4. Logarithmic Functions" << endl;
        cout << "5. Root Functions" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "1. Addition" << endl;
                cout << "2. Subtraction" << endl;
                cout << "3. Multiplication" << endl;
                cout << "4. Division" << endl;
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice) {
                	
                    case 1:
                        cout << "Enter two numbers: ";
                        cin >> num1 >> num2;
                        result = num1 + num2;
                        break;
                    case 2:
                        cout << "Enter two numbers: ";
                        cin >> num1 >> num2;
                        result = num1 - num2;
                        break;
                    case 3:
                        cout << "Enter two numbers: ";
                        cin >> num1 >> num2;
                        result = num1 * num2;
                        break;
                    case 4:
                        cout << "Enter two numbers: ";
                        cin >> num1 >> num2;
                        if (num2 != 0)
                            result = num1 / num2;
                        else {
                            cout << "Error! Division by zero." << endl;
                            continue;
                        }
                        break;
                    default:
                        cout << "Invalid choice!" << endl;
                }

                cout << "Result: " << result << endl;
                break;

            case 2:
                cout << "1. Sine" << endl;
                cout << "2. Cosine" << endl;
                cout << "3. Tangent" << endl;
                cout << "Enter your choice: ";
                cin >> choice;

                cout << "Enter an angle (in degrees): ";
                cin >> num1;

                switch (choice) {
                    case 1:
                        result = sin(num1 * PI / 180);
                        break;
                    case 2:
                        result = cos(num1 * PI / 180);
                        break;
                    case 3:
                        result = tan(num1 * PI / 180);
                        break;
                    default:
                        cout << "Invalid choice!" << endl;
                }

                cout << "Result: " << result << endl;
                break;

            case 3:
                cout << "1. Exponential" << endl;
                cout << "2. Power" << endl;
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice) {
                    case 1:
                        cout << "Enter a number: ";
                        cin >> num1;
                        result = exp(num1);
                        break;
                    case 2:
                        cout << "Enter base and exponent: ";
                        cin >> num1 >> num2;
                        result = pow(num1, num2);
                        break;
                    default:
                        cout << "Invalid choice!" << endl;
                }

                cout << "Result: " << result << endl;
                break;

            case 4:
                cout << "1. Natural Logarithm" << endl;
                cout << "2. Base-10 Logarithm" << endl;
                cout << "Enter your choice: ";
                cin >> choice;

                cout << "Enter a number: ";
                cin >> num1;

                switch (choice) {
                    case 1:
                        result = log(num1);
                        break;
                    case 2:
                        result = log10(num1);
                        break;
                    default:
                        cout << "Invalid choice!" << endl;
                }

                cout << "Result: " << result << endl;
                break;

            case 5:
                cout << "1. Square Root" << endl;
                cout << "2. Cube Root" << endl;
                cout << "Enter your choice: ";
                cin >> choice;

                cout << "Enter a number: ";
                cin >> num1;

                switch (choice) {
                    case 1:
                        result = sqrt(num1);
                        break;
                    case 2:
                        result = cbrt(num1);
                        break;
                    default:
                        cout << "Invalid choice!" << endl;
                }
                
                cout << "Result="<<result<<endl;
            case 6:
            	cout<<"Exit"<<endl;
            	break;
            default:
            	cout<<"Invalid mathematical operation. Please enter valid mathematical operation."<<endl;
		}
	break;
	}    
	return 0;
}
