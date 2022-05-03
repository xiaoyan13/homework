/*
**Filename: 	T4_15.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/3/19
**Collage:		School of Computer Science and Engineering
**Function: 	calculate salary_per_month.
*/

#include<iostream>

using namespace std;

int main()
{
	double salary = 200.0;
	double sale_volume = 0.0;
	
	cout.setf(ios_base::showpoint);
	cout.setf(ios_base::fixed);
	cout.precision(2);
	while(1)
	{
		salary = 200.0;
		
		cout << "Enter sales in dolars (-1 to end): ";
		cin >> sale_volume;
		
		if(sale_volume == -1) break;
		
		salary += sale_volume * 0.09;
		cout <<"Salary is: $" << salary << endl;
		cout <<endl;
	}
	cout.unsetf(ios_base::floatfield);
	
	return 0;
}
