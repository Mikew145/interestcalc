
#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

// Function that displays the required inputs to the user.
void dataInput() {

	cout << "*********************************" << endl;
	cout << "********** Data Input ***********" << endl;
	cout << "Initial Investment Amount:" << endl;
	cout << "Monthly Deposit:" << endl;
	cout << "Annual Interest %:" << endl;
	cout << "Number of years:" << endl;
	system("pause"); // Pauses system and displays "Press any key to continue...".
}

// Function that displays the required inputs and the user's entered data for those inputs.
void dataDisplay(double amount, double perMonth, double annualRate, int numYears) {
	 
	cout << "*********************************" << endl;
	cout << "********** Data Input ***********" << endl;
	cout << "Initial Investment Amount:  $" << amount << endl;
	cout << "Monthly Deposit:  $" << perMonth << endl;
	cout << "Annual Interest %:  " << annualRate << "%" << endl;
	cout << "Number of years:  " << numYears << endl;
	system("pause"); // Pauses system and displays "Press any key to continue...".

}

// Function that calculates interest when called.
double interestCalc(double amount, double perMonth, double annualRate) {
	double total;

	total = (amount + perMonth) * ((annualRate / 100.0) / 12.0);
	return total;

}

// Function that calculates closing total and displays the totals for the month. Called each month by loop in main().
double displayMonthly(double amount, double perMonth, double interest, int numYears, int month) {
	double totalBefore = amount + perMonth;
	double closeAmount = amount + perMonth + interest;

	cout << right << setw(7) << month;
	cout << right << setw(18) << amount;
	cout << right << setw(20) << perMonth;
	cout << right << setw(18) << totalBefore;
	cout << right << setw(18) << fixed << setprecision(2) << interest;
	cout << right << setw(19) << fixed << setprecision(2) << closeAmount << endl;
	

	return closeAmount;

}