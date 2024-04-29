# interestcalc
This is a program I wrote for school that I kind of liked.

This code takes user input of: initial investment, monthly deposit, annual interest and number of years and calculates the monthly earned interest and total account balance. It displays earned interest and balance without the monthly deposits first then with monthly deposits.
I like the way I formated the displayed information. It feel familiar to an old dot matric printout you would have gotten from the bank in the 80s.
You could add more inputs and/or calculations to display more information. For example if you have an account that had fluctuating interest and a rss feed or api you could modify the code to calculate the changes everytime the interest rate changes. This provided you are able/capable of polling the rss/api on a regular basis. 
Getting the alignments to look the way I wanted probably took the longest and were all done by trial and error. I had to lookup how to pause the program and wait for the user to "press any key" was not taught that one in class but I turned out to be fairly easy to find on Stack Overflow.
The left and right align with widths are a simple system but great for formatting you information into easy to read output for the user.
I did split the code into three file one Main, one Functions file and one Functions.h to allow the easy addition of the functions to Main. The boarders, headers, and user's input are handled in Main and the calculations and display formatting are all done in the Functions file. That way if you play with Main you are not going to mess up the calculations. 

Hope you like it,
Mike
