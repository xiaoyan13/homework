/*
**Filename: 	T4_14.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/3/19
**Collage:		School of Computer Science and Engineering
**Function: 	input balance and charges to calculate wheather the account is out of limit of credit.
*/

#include<iostream>

using namespace std;

int main()
{
	int account;
	double begin_balance;
	double total_charges;
	double total_credits;
	double credit_limit;
	double new_balance;
	
	cout.setf(ios_base::showpoint);
	cout.setf(ios_base::fixed);
	cout.precision(2);
	while(1)
	{
		cout << "Enter account number(or -1 to quit) : " ;
		cin >> account;
		
		if(account == -1) break;
		
		cout << "Enter beginning balance : ";
		cin >> begin_balance;
		cout << "Enter total charges : ";
		cin >> total_charges;
		cout << "Enter total credits : ";
		cin >> total_credits;
		cout << "Enter credit limit : ";
		cin >> credit_limit;
		
		new_balance = begin_balance + total_charges - total_credits;
		cout << "New balance is " << new_balance << endl;
		if(new_balance > credit_limit)
		{
			cout <<"Account : " << account;
			cout << "Credit limit : " << credit_limit;
			cout << "Balance : " << new_balance;
			cout << "Credit Limit Exceeded." << endl;
		}
		
		cout << endl;
	}
	cout.unsetf(ios_base::floatfield);
	
	
	return 0;
}
