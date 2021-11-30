/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 adan rodriguez
 */
#include "std_lib_facilities.h"

int main()
{	
    string operation;
	double val1, val2, result;

	bool x;
    x = false;

	cout << "Please insert an operation followed by two operands (Example + 100 3.14): ";
	cin >> operation >> val1 >> val2;

	if (operation == "+") {
		result = val1 + val2;
		x = true;
	}

	if (operation == "plus") {
		result = val1 + val2;
		x = true;
	}

	if (operation == "-") {
		result = val1 - val2;
		x = true;
	}

	if (operation == "minus") {
		result = val1 - val2;
		x = true;
	}

	if (operation == "*") {
		result = val1 * val2;
		x = true;
	}

	if (operation == "mul") {
		result = val1 * val2;
		x = true;
	}

	if (operation == "/") {
		result = val1 / val2;
		x = true;
	}

	if (operation == "div") {
		result = val1 / val2;
		x = true;
	}

	if (x == true) {
		cout << "Your result is: " << result << '\n';
	}

	else {
		cout << "Invalid operation.\n";
	}

	return 0;
}