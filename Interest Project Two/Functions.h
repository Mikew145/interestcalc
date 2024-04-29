#pragma once

// Function that displays the required inputs and the user's entered data for those inputs.
void dataDisplay(double amount, double perMonth, double annualRate, int numYears);

// Function that displays the required inputs to the user.
void dataInput();

// Function that calculates interest when called.
double interestCalc(double amount, double perMonth, double annualRate);

// Function that calculates closing total and displays the totals for the month. Called each month by loop in main().
double displayMonthly(double amount, double perMonth, double interest, int numYears, int month);
