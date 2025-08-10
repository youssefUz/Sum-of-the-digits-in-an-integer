#include <iostream>
using namespace std;

int main() {
	cout << "\t\tHello Man" << endl;

	cout << "Enter a number between 0 and 1000: ";
	double number;
	cin >> number;

	cout << "\n======================\n";

	double firstDig = (int)number % 10; // return the first dig
	double removeFiDig = number / 10; // remove the extracted digit

	double secondDig = (int)removeFiDig % 10; // return the second dig
	double removeSecDig = removeFiDig / 10; // remove the extracted digit

	double thirdDig = removeSecDig; // put the digit in a new var

	double sumOfDigits = firstDig + secondDig + thirdDig;

	cout << "The sum of the digits is " << (int)sumOfDigits;


	return 0;
}
