#pragma once
#include <iostream>	
#include <string>
using namespace std;	

class Bankomat	
{
private:
	string rezult;	
	int sum;	
	int id;
	int min;
	int max;	
public:	
	Bankomat() = default;	
	Bankomat(int id, int sum, int max, int min);
	void LoadinBanknotes(int sum, int max, int min);
	int WithdrawMoney(int sum, int max, int min);
	void Print() const;	
	string toString(int sum);		

};

