/*
**Filename: 	T6_12.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	sale statistic graph
*/

#include<cstdio>
#include<string>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<queue>
#include<stack> 
#include<ctime>
#include<array>
#include<set>
#include<map>
#include<vector>
#include<queue>
#include <utility> 

using namespace std;

int main()
{
	cout << "Please key in your parking time: ";
	double a[4];
	double total_hours = 0.0,total_charge = 0.0;
	for(int i = 1; i <= 3; i ++ ) cin >> a[i],total_hours += a[i];
	cout << "Car\t" << "Hours\t" << "Charge\t\n";
	for(int i = 1; i <= 3; i ++ ) 
	{
		cout << i << "\t" << a[i] << "\t";
		double money;
		if(a[i] <= 3) money = 2;
		else
		{
			money = (ceil(a[i]) - 3)*0.5 + 2;
			if(money > 10) money = 10;
		}
		cout << money << "\t\n";
		total_charge += money;
	}
	cout << "Total\t" << total_hours << "\t" << total_charge << "\t\n";
	
	return 0;
}

