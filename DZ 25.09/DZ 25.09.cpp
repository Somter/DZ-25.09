// DZ 25.09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Bankomat.h"
using namespace std;	

int main()
{
	int id = 1;
	int sum = 100;
	int max = 1000;
	int min = 10;	
	int AddSum, cont, GiveMoney;	
	Bankomat Bank1(id, sum, max, min);		
	Bank1.Print();	
	do {
		cout << "Enter the amount you want to add ( 10, 20, 50, 100, 200, 500, 1000 ): ";	
		cin >> AddSum;	
		Bank1.LoadinBanknotes(AddSum, max, min);
		cout << "\nDo you want to continue?\n";
		cout << "1 - yes\n";
		cout << "2 - No\n";	
		cout << "Your choice: ";	
		cin >> cont;
	}while (cont != 2);
	cout << "How much money to withdraw?: ";
	cin >> GiveMoney;	
	int rezult = Bank1.WithdrawMoney(GiveMoney, max, min);	
	if (rezult != -1) {	
		cout << Bank1.toString(rezult);		
	}
	else {
		cout << "Your amount is not in the range\n";	
	}


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
