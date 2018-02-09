


#include<iostream>
#include<string>
#include<cstring>


using namespace std;
class Customer{
protected:
	string name;
	int ID;
	double balance;
public:
	double check_balance();
	void withdraw();
	double withdraw_transfer();



};

