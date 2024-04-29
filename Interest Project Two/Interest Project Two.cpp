// Michael Whisenant
// 07Apr2024

#include "Functions.h" // .h file that holds the definition of all functions
#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

int main() {
	double startAmount;
	double monthly;
	double interestPercent;
	int years;
	

	dataInput(); // Calls data input function that displays the required inputs.

	// Gets each input from user individually. 
	cout << "Initial Investment Amount:" << endl;
	cin >> startAmount;
	cout << "Monthly Deposit:" << endl;
	cin >> monthly;
	cout << "Annual Interest:" << endl;
	cin >> interestPercent;
	cout << "Number of years:" << endl;
	cin >> years;

	// Calls data display function that displays required inputs with user entered input
	dataDisplay(startAmount, monthly, interestPercent, years); 

	// Boarders, top row boarders naming for displaying balances.
	cout << endl;
	cout << "--------------------------------------------------------------------";
	cout << "--------------------------------" << endl;
	cout << "  Month    Opening Amount    Deposited Amount  ";
	cout << "         $ Total        $ Interest    Closing Balance  " << endl;
	cout << "--------------------------------------------------------------------";
	cout << "--------------------------------" << endl;

	// Loop for calculating compounding interest monthly (without monthly deposits).
	for (int i = 0; i < (years * 12); ++i) {
		double interest = interestCalc(startAmount, 0.0, interestPercent); // Calls interest calculation function.

		startAmount = displayMonthly(startAmount, 0.0, interest, years, (i + 1)); // Calls function that displays monthly totals.
	}

	// Boarders, bottom row boarder and top row boarders and naming for displaying balances.
	cout << "--------------------------------------------------------------------";
	cout << "--------------------------------" << endl;
	cout << endl;
	cout << "--------------------------------------------------------------------";
	cout << "--------------------------------" << endl; 
	cout << "  Month    Opening Amount    Deposited Amount  ";
	cout << "         $ Total        $ Interest    Closing Balance  " << endl;
	cout << "--------------------------------------------------------------------";
	cout << "--------------------------------" << endl;

	// Loop for calculating compounding interest monthly (with monthly deposits).
	for (int i = 0; i < (years * 12); ++i) {
		double interest = interestCalc(startAmount, monthly, interestPercent); // Calls interest calculation function.

		startAmount = displayMonthly(startAmount, monthly, interest, years, (i + 1)); // Calls function that displays monthly totals.
	}

	// Boarder, bottom row boarder.
	cout << "--------------------------------------------------------------------";
	cout << "--------------------------------" << endl;
	cout << endl;

	return 0;
}