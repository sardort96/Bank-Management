/*/////////////////////////////
/ Name:		Bank Account //////
/ Author:	Sardor       //////
/ ID:		U1510072     //////
*//////////////////////////////



#include<iostream>
#include<string>
#include<cstring>
#include<Windows.h>
#include"Banker.h"


using namespace std;



void main()
{
	static int index = 0;   //create an index to access the elements of the array where objects are stored
	static Banker arr[20];  //array of objects where accounts will be stored when they are created
	int n1;
	do{
		
		cout << "Press:\n1 if you are a banker, 2 if you are a customer, 0 to exit: "; // you can access as a banker or a customer-they have different priorities
		cin >> n1;
		system("cls");  //clear screen not to gather too many things on the little console screen
		if (n1 == 1)
		{
			int n;
			do{

				cout << "Press:\n1 to open a new account\n0 - to exit: ";
				cin >> n;
				system("cls");
				if (n == 1)
				{
					
					string n;
					double m;
					static int id = 1; // ID is given aoutomatically
					cout << "Enter your name: ";
					cin >> n;
					cout << "Enter money: ";
					cin >> m;
					system("cls");
					arr[index].set_name(n);
					arr[index].set_id(id);
					arr[index].set_balance(m);
					cout << "You have created an account with ID " << arr[index].get_ID() << endl;
					id++;  //increment id to give another id value in a contiguous order when a new account is created
					int choice;
					do{
						cout << "Press the following to choose an option:" << endl;
						cout << "1 - deposit money\n2 - withdraw money\n3 - check balance\n4 - get personal information\n0 - to quit: ";
						cin >> choice;
						system("cls");
						switch (choice)
						{
						case 1:
							arr[index].deposit();
							break;
						case 2:
							arr[index].withdraw();
							break;
						case 3:
							cout << "Your balance is $" << arr[index].check_balance() << endl;;
							break;
						case 4:
							arr[index].personalInfo();
							break;
						case 0:
							continue;
						default:
							cout << "No such option" << endl;
							continue;
						}

					} while (choice);
					index++; //increment index to access the next object in the array
				}
			} while (n);

		}
		else
		if (n1 == 2)
		{
			int n;
			int id;
			int i;
			cout << "Enter your ID to access your account: ";
			cin >> id;
			cout << "Dear customer, You are in your account" << endl;
			do{
				cout << "Press:\n1 to check your balance\n2 to withdraw money from your balance\n3 to transfer money to another account\n0 to exit: \n";
				cin >> n;
				system("cls");
				switch (n)
				{
				case 1:
					cout << "Your balance is $" << arr[id - 1].check_balance() << endl;
					break;
				case 2:
					arr[id - 1].withdraw();
					break;
				case 3:
					cout << "Enter the ID of the account to which you want to transfer the money from your balance: ";
					cin >> i;
					arr[i-1].deposit_transfer(arr[id - 1]);
					break;
				case 0:
					continue;
				default:
					cout << "No such option" << endl;
					continue;
			
				}

			} while (n);
			
			

		}

	} while (n1);
	
		
	
	
	
	system("pause");
	
}