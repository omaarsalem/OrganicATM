#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

class StarzBank {

public:
	string BankName;
	int Bankid;
};
class Customer : public StarzBank {
public:
	double CustomerBalance=1000;
	string CustomerName;
	int Customerid;
	string CustomerEmail;
	int CustomerPhoneNumber;
	string CustomerDOB;
};
////////////////////////////////////
///////////////////////////////////
class TheGlobalBank {
public:
	string BankName;
	int Bankid;
};
class Customer2 : public TheGlobalBank {

	double CustomerBalance=1000;
	string CustomerName;
	int Customerid;
	string CustomerEmail;
	int CustomerPhoneNumber;
	string CustomerDOB;
};
////////////////////////////////////
///////////////////////////////////
class TheRoyalBank {
public:
	string BankName;

	int Bankid=888;
};
class Customer3 : public TheRoyalBank {
public:
	double CustomerBalance=1000;
	string CustomerName;
	int Customerid;
	string CustomerEmail;
	int CustomerPhoneNumber;
	string CustomerDOB;
};

class Card : public Customer {

	void CreditCard();
	int creditCardNumber;
	string creditCardExpiryDate;
	int creditCardPin=778;
	int creditCardLimit=10000;

	void DebitCard();
	int debitCardNumber;

	string debitCardExpiryDate;
	int debitCardPinNumber=773;
};
/////////////////////////////////
////////////////////////////////
class ATM_Transactions : public Customer, TheRoyalBank, TheGlobalBank, StarzBank {
public:
	void Deposit()
	{
		int Depositamount;
		cout << "Welcome to Deposit Department" << endl;
		cout << "How much would you like to Deposit" << endl;
		cin >> Depositamount;

		cout << "The amount is Deposited Successfully: " << Depositamount << endl;
	}

	void Withdraw()
	{
		
		int Withdrawamount{};
		if (Withdrawamount <=1000) {


			cout << "Welcome to Withdraw Department" << endl;
			cout << "The Available Balance is : " << CustomerBalance << endl;
			cout << "How much would you like to Withdraw" << endl;
			cin >> Withdrawamount;
			cout << "Current Balance is: " << CustomerBalance - Withdrawamount << endl;
		}
		else if (Withdrawamount > 1000) {
			cout << "Sorry, you don't have enough funds to complete this transaction" << endl;

		}
	}

	void ChangecreditPin()
	{
		cout << "Here you can change your cards pin" << endl;
		int pin;
		int response{};
		cout << "Please enter your current pin for the required card" << endl;
		cin >> response;


		if (response == 778)

		{
			//while (response == 778)
			{
				cout << "Here you can change pin number of the Credit Card " << endl;
				cout << "Please Enter Your New Pin: 4 digits max " << endl;
				cin >> pin;
				cout << "Your New Pin is Updated";
			}
			

		}
		
	else if (response == 773)
		{
			//while (response == 773) 
			{

				cout << "Please Enter Your New Pin: 4 digits max " << endl;
				cin >> pin;
				cout << "Your New Pin is Updated";

			}

		}
		
	}

};

int main() {
	cout << "Welcome to The Oragnic ATM" << endl;
	cout << "This ATM is associated with The Royal Bank, The Global Bank, Starz Bank" << endl;
	cout << "You are Welcome to choose your disrable operation for today" << endl;
	cout << "1. Deposit ""2. Withdraw ""3. Change Pin" << endl;
	while (true) {
		
		char choice;
		cin >> choice;

		switch (choice) {

		case '1': { ATM_Transactions operation;

			operation.Deposit(); } break;

		case '2': { ATM_Transactions operation1;

			operation1.Withdraw(); } break;

		case '3': { ATM_Transactions operation2;


			operation2.ChangecreditPin(); } break;



		default:
			 break;  // if the user made an input of diffrenet value of the cases this message will be printed out.
			 
			 }
		cout << "\nWould you like to preform another operation" << endl;
		cin >> choice;
		if (choice > 3) {
			exit;
		}
	}
	
	return 0;
}








