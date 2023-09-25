#include "Bankomat.h"
#include <string>	
#include <iostream>
using namespace std;
Bankomat::Bankomat(int id, int sum, int max, int min)	
{
	this->id = id;		
	this->sum = sum;		
	this->max = max;				
	this->min = min;	
}

void Bankomat::LoadinBanknotes(int sum, int max, int min)		
{
	if (sum >= min && sum == 10 || sum == 20 || sum == 50 || sum == 100 || sum == 200 || sum == 500 || sum == 1000 && sum <= max) {	
		this->sum += sum;	
		cout << "added " << "+" << sum << " UAH\n";	
		cout << this->sum;
	}	
	else {
		cout << "Your amount is not up to par";	
		this->sum = 100;	
	}
}

int Bankomat::WithdrawMoney(int sum, int max, int min)
{
	if (sum >= min && sum <= max) {			
		if (sum < this->sum) 
		{
			this->sum = this->sum - sum;	
			return this->sum;		
		}
		else {
			cout << " at an ATM less than 100 UAH";
			return -1;	
		}
	}	
	else {
		return -1;	
	}
}

void Bankomat::Print() const
{
	cout << "Bankomat: \n";
	cout << "id: " << id << endl;	
	cout << "Money in an ATM: " << sum << endl;	
	cout << "Minimum denomination: " << min << endl;	
	cout << "Maximum denomination: " << max << endl;
	cout << "------------------------------------------\n\n";
}

string Bankomat::toString(int sum)
{
	rezult = to_string(sum);	
	rezult += " amount of money in ATM";		
	return rezult;	
}
