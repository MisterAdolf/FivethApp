#include <iostream>

using namespace std;

int PrintSum();
int PrintMin();
int PrintEq();
int PrintD();




int PrintSum(int firstNumber, int secondNumber) {
	return firstNumber + secondNumber;

}

int PrintMin(int firstNumber, int secondNumber) {
	return firstNumber - secondNumber;

}

int PrintEq(int firstNumber, int secondNumber) {
	return firstNumber * secondNumber;

}

int PrintD(int firstNumber, int secondNumber) {
	return firstNumber / secondNumber;

}

int main() {
	int firstNumber;
	int secondNumber;
	char symbol;

	cin >> firstNumber;
	cin >> symbol;
	cin >> secondNumber;


	if (symbol == '+') {
		cout << PrintSum(firstNumber, secondNumber);
	}

	else if (symbol == '-') {
		cout << PrintMin(firstNumber, secondNumber);
	}

	else if (symbol == '*') {
		cout << PrintEq(firstNumber, secondNumber);
	}

	else if (symbol == '/') {
		cout << PrintD(firstNumber, secondNumber);
	}
	else {
		cout << "error";
	}




}