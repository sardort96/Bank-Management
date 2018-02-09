
#include<iostream>
#include<string>
#include<cstring>

#include"Customer.h"
using namespace std;

class Banker:public Customer{
	
	
public:
	
	void set_name(string n);
	void set_id(int i);
	void set_balance(double b);
	string get_name();
	int get_ID();
	void deposit();
	void personalInfo();
	void deposit_transfer(Banker &ob);
};

