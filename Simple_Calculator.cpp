#include <iostream>
#include <string>
using namespace std;
int main() {
char choice;
double num1, num2, result;
string input;
do {
cout << "\n==============================\n";
cout << " SIMPLE CALCULATOR \n";
cout << "==============================\n";
cout << " | 7 | 8 | 9 | / |\n";
cout << " | 4 | 5 | 6 | * |\n";
cout << " | 1 | 2 | 3 | - |\n";
cout << " | . | 0 | = | + |\n";
cout << "=================================\n";
cout << "Enter first number or q to quit: ";
cin >> input;
if (input == "q" || input == "Q") {
cout << "Exiting calculator... Goodbye!\n";
break;
}
num1 = stod(input);
cout << "Enter an operator (+, -, *, /) or q to quit: ";
cin >> choice;
if (choice == 'q' || choice == 'Q') {
cout << "Exiting calculator... Goodbye!\n";
break;
}
cout << "Enter second number: ";
cin >> num2;
switch (choice) {
case '+':
result = num1 + num2;
cout << "Result: " << result << endl;
break;
case '-':
result = num1 - num2;
cout << "Result: " << result << endl;
break;
case '*':
result = num1 * num2;
cout << "Result: " << result << endl;
break;
case '/':
if (num2 != 0) {
result = num1 / num2;
cout << "Result: " << result << endl;
} else {
cout << "Error! Division by zero.\n";
}
break;
default:
cout << "Invalid operator! Please try again.\n";
}
} while (true);
return 0;
}