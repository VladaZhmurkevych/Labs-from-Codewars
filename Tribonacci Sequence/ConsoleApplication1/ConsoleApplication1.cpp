// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "vector"
using namespace std;
vector <int> tribonacci(vector<int> signature, int n);
int main()
{
	tribonacci({ 0, 0, 1 }, 10);
	system("pause");
    return 0;
}
vector<int> tribonacci(vector<int> signature, int n) {
	vector <int> result;
	for (int i = 0; i < n; i++) {
		if (i <= 2) {
			result.push_back(signature[i]);
		}
		else {
			int sum = result[i - 1] + result[i - 2] + result[i - 3];
			result.push_back(sum);
		}
		cout << result[i] << endl;
	}
	return result;
}
