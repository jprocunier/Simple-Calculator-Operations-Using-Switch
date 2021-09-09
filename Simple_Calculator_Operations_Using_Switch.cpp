// Simple_Caluculator_Operations_Using_Switch.cpp : This file was created to accept a single operator and two operands to perform simple addition, subtraction, multiplication, and division
// 
// ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-
//
// Program written by Jessi Procunier using Microsoft Visual Studios
//
// ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

#include <iostream>
using namespace std;

int main()
{
    char op;
    double input1, input2;

    cout << "Please enter the operator you'd like to use ('+' '-' '*' or '/'): ";

    cin >> op;

    cout << "\nEnter your first operand: ";

    cin >> input1;
    
    cout << "\nEnter your second operand: ";
    
    cin >> input2;

    switch (op) {
    case '+':
        cout << "\n" << input1 << " + " << input2 << " = " << input1 + input2 << "\n";
        break;
    case '-':
        cout << "\n" << input1 << " - " << input2 << " = " << input1 - input2 << "\n";
        break;
    case '*':
        cout << "\n" << input1 << " * " << input2 << " = " << input1 * input2 << "\n";
        break;
    case '/':
        cout << "\n" << input1 << " / " << input2 << " = " << input1 / input2 << "\n";
        break;
    default:
        cout << "Operator not recognized, please enter one of the following: + - * or /\n";   // Runs when the operator given by the user is not one of the four accepted operators
        break;
    }

    return 0;
}