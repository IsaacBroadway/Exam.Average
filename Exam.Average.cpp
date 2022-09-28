// Your Name: Isaac Broadway
// Date: 8/31/2022
// Program Title: Test Score Average Calculator
// Program Description: This program computes the average of five test scores that are inputted by user.

#include <iostream>
#include <string>


using namespace std;

// Named constants
const int NUMBER_OF_STUDENTS = 5;


int main()
{

	// Variable declaration
	double test1, test2, test3, test4, test5, sum, avg;
	//Program title and description for the user
	cout << "This program computes the average of five test scores that are inputted by user." << endl;
	cout << "Enter test score when prompted, and decimals are fine." << endl;


	// User input
	cout << "Input test score 1: " << endl;
	cin >> test1;
	cout << "Input test score 2: " << endl;
	cin >> test2;
	cout << "Input test score 3: " << endl;
	cin >> test3;
	cout << "Input test score 4: " << endl;
	cin >> test4;
	cout << "Input test score 5: " << endl;
	cin >> test5;

	// Calculations
	sum = test1 + test2 + test3 + test4 + test5;
	avg = sum / NUMBER_OF_STUDENTS;


	// Output to the screen
	cout << "The average of these 5 test scores is: " << avg << endl;
	return 0;
}