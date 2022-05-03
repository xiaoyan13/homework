/*
**Filename: 	T4_16.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/3/19
**Collage:		School of Computer Science and Engineering
**Function: 	calculate total salary of hours given.
*/

#include<iostream>

using namespace std;

int main()
{
	double hours = 0.0;
	double money_per_hour = 0.0;
	double salary = 0.0;
	
	cout.setf(ios_base::showpoint);
	cout.setf(ios_base::fixed);
	cout.precision(2);
	while(1)
	{
		cout << "Enter hours worked(-1 to quit) : ";
		cin >> hours;
		
		if(hours == -1) break;
		
		cout << "Enter hourly rate of the employee($00.00) : ";
		cin >> money_per_hour;
		
		salary = money_per_hour * hours;
		if(hours > 40) salary += 0.5*money_per_hour*(hours - 40);
		
		cout << "Salary is $" << salary << endl;
		
		cout << endl; 
	}	
	
	return 0;
} 
