/*
**Filename: 	T4_13.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/3/19
**Collage:		School of Computer Science and Engineering
**Function: 	input miles and gallons to calculate gallons_per_mile and total miles/gallons.
*/

#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	double miles_total = 0,gallons_total = 0;
	double mile,gallon;
	while(1)
	{
		cout.setf(ios_base::showpoint);
		cout.setf(ios::fixed);
		cout.precision(6);
		
		cout << "Enter miles driven(-1 to quit): " ;
		cin >> mile;
				
		if(mile == -1) break;
		
		cout << "Enter gallons used : ";
		cin >> gallon;
		
		cout << "MPG this trip : " << mile/gallon << endl;
		
		miles_total += mile,gallons_total += gallon;
		cout << "Total MPG: " << miles_total/gallons_total << endl;
		
		cout << endl;
	}
	
	return 0;
}
