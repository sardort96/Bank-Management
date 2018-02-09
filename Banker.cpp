
#include<iostream>
#include<string>
#include<cstring>
#include"Banker.h"

using namespace std;

void Banker::set_name(string n){ name = n; }
void Banker::set_id(int i){ ID = i; }
void Banker::set_balance(double b){ balance = b; }
string Banker::get_name(){ return name; }
int Banker::get_ID(){ return ID; }

void Banker::deposit()
{
	double m;
	cout << "How much money do you want to deposit into your account? ";
	cin >> m;
	balance = balance + m;
}
void Banker::personalInfo()
{
	cout << "Personal Information" << endl;
	cout << "Your name is " << get_name() << endl;
	cout << "Your ID number is " << get_ID() << endl;
	cout << "Your balance is " << check_balance() << endl;
}

void Banker::deposit_transfer(Banker &ob){
	
	balance = balance + ob.withdraw_transfer();
}

