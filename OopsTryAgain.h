/*
Nick Spizzirri
10/05/2024
CSC122
*/

// Libraries + Headers
#pragma once
using namespace std;

// Functions
int inputValidation(int Lbound, int Ubound, string promptMsg, string errorMsg) {
	int input;
	bool isValid = false;
	while (!isValid) {
		cout << promptMsg << endl;
		cin >> input;
		if (cin.fail() || input < Lbound || input > Ubound) {
			cin.clear();
			cin.ignore();
			cout << errorMsg << endl;
		}
		else {
			isValid = true;
		}
	}
	return input;
}