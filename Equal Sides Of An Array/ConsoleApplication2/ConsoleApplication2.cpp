// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;
int find_even_index(const vector <int> numbers);
int main() {
	find_even_index({ 1,2,3,4,3,2,1 });
	system("pause");
	return 0;
};
int find_even_index(const vector <int> numbers) {

	int sumOfTheArray = 0;
	int sumOfLeftSide = 0;
	int length = numbers.size();

	for (int i = 0; i < length; i++) {
		sumOfTheArray += numbers[i];
	}

	for (int i = 0; i < length; i++) {
		if ((2 * sumOfLeftSide) == sumOfTheArray - numbers[i]) {
			return i;
			break;
		}
		sumOfLeftSide += numbers[i];
	}
	
	return -1;
	
}