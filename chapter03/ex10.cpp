#include <iostream>

using namespace std;

int main(){

    double operand1, operand2;
    string operation;


    cout << "Input an operation (+, -, * or /), and two operands. Space all entries ";
    cin >> operation >> operand1 >> operand2;

    if (operation == "+" || operation == "plus")
        cout << operand1 + operand2;

    if (operation == "-" || operation == "minus")
        cout << operand1 - operand2;

    if (operation == "*" || operation == "mul")
        cout << operand1 * operand2;

    if (operation == "/" || operation == "div")
        cout << operand1 / operand2;
    
    cout << endl;
}