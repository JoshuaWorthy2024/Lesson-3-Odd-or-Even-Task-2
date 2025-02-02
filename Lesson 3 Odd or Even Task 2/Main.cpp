#include <iostream>
#include <cstdlib>

using std::endl;
using std::cout;
using std::cin;

/*
Practice Task 2: Odd or Even
Objective: Explore random number generation and parameter handling.

Instructions:

Create a program that:
Generates a random whole number between 1 and 100 using a function.
Prints the result.
Determines whether the number is odd or even using another function.
Outputs "ODD" or "EVEN" based on the result.
Use the modulus operator (%) to check for odd/even numbers.

https://www.cprogramming.com/tutorial/modulus.html
https://www.w3schools.com/cpp/cpp_howto_random_number.asp
*/

int generateRandomNumber(int max) {
	return (rand() % max) + 1;
}

bool checkIfOddOrEven(int x) {
	if (x % 2 == 0) {
		return false;
	}
	else {
		return true;
	}
}

int main() {
	int randomNumber = generateRandomNumber(100);
	cout << "Random Number is: " << randomNumber << endl;

	bool isOdd = checkIfOddOrEven(randomNumber);

	if (isOdd) {
		cout << "ODD" << endl;
	}
	else {
		cout << "EVEN" << endl;
	}

	return 0;
}