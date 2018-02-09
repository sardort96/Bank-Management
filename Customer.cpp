#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include"Customer.h"

using namespace std;

double Customer::check_balance(){ return balance; }


void Customer::withdraw()
{
	double amount;
	cout << "How much money would you like to withdraw from your account? ";
	cin >> amount;
	if (abs(amount) <= balance)
	{
		balance = balance - abs(amount);
		cout << "You have withdrawn $" << abs(amount) << " from your account" << endl;
		cout << "$" << balance << " is left on your balance" << endl;
	}
	else
		cout << "You do not have that amount of money on your account" << endl;
}

double Customer::withdraw_transfer(){
	double amount;
	cout << "How much money would you like to withdraw from your account in order to transfer? ";
	cin >> amount;
	if (abs(amount) <= balance)
	{
		balance = balance - abs(amount);
		return amount;

	}
	else
		return 0;
}
