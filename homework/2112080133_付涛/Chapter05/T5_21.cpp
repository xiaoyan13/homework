/*
**Filename: 	T5_21.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/4/2
**Collage:		School of Computer Science and Engineering
**Function: 	calculate each kind of staffs' salary.
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;cin >> n;
	
	double salary = 0.0; 
	int working_time = 0;
	switch (n) {
		case 1:
			cout << "Your salary is : " << 1000000000 << endl;
			break;
		case 2:
			cout << "Please key in your working time...\n";
			cin >> working_time;
			cout << "Pease key in the salary each hour...\n";
			int each_salary;
			cin >> each_salary;
			if(working_time > 40) salary = (working_time - 40) * 1.5 * each_salary 
											 + (40 * each_salary);
			else salary = working_time * each_salary;
			cout << "Your salary is : " << salary << endl;
			break;
		case 3:
			cout << "Please key in the total volume of your values amount...\n";
			int value;
			cin >> value;
			salary = 0.057 * value + 250;
			cout << "Your salary is : " << salary << endl;
			break;
		case 4:
			cout << "Pease key in each value of production you make and how many you produce...\n";
			int production_each_value;
			int numbers;
			cin >> production_each_value >> numbers;
			salary = production_each_value * numbers;
			cout << "Your salary is : " << salary << endl;
			break; 
		default:
			
			break;
	}
}

