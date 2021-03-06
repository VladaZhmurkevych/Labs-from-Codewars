// Basics 03 Strings, Numbers and Calculation.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

string calculateString(string calcIt);
int main()
{
	calculateString("gdfgdf234dg54gf*23oP42");
	system("pause");

return 0;
}
string calculateString(string calcIt) {
	string result = "";
	string firstNum = "";
	string secondNum = "";
	int sign;
	double number;


	// find the position of '+'/'-'/'*'/'/'
	for (int i = 0; i < calcIt.length(); i++) {
		switch (calcIt[i]) {
		case '+': sign = i;
			break;
		case '-': sign = i;
			break;
		case '*': sign = i;
			break;
		case '/': sign = i;
			break;
		}
	}

	//find the number before the sign
	for (int i = 0; i < sign; i++) {
		if (isdigit(calcIt[i]) || calcIt[i] == '.') {
			firstNum += calcIt[i];
		}
	}

	//find the number after the sign
	for (int i = sign; i < calcIt.length(); i++) {
		if (isdigit(calcIt[i]) || calcIt[i] == '.') {
			secondNum += calcIt[i];
		}
	}

	//making the operating and finding the result
	double a = stod(firstNum);
	double b = stod(secondNum);

	switch (calcIt[sign]) {
	case '/': number = a / b;
		break;
	case '*': number = a * b;
		break;
	case '+': number = a + b;
		break;
	case '-': number = a - b;
		break;
	}

	result = to_string((int)round(number));
	cout << result; 
	return result;
	
}