/*
**Filename: 	T5_16.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/4/2
**Collage:		School of Computer Science and Engineering
**Function: 	calculate compound interest.
*/
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int poww(int x,int y)
{
	int ans = 1;
	for(int i = 0; i < y; i ++ ) ans *= x;
	return ans;
}

int main()
{
	int amount = 1000,amount_cent = 0;
	cout << "Year" << setw(21) << "Amount on deposit" << endl;
	
	cout << fixed << setprecision(2);
	
	for(int year = 1; year <= 10; ++ year)
	{
		amount_cent += amount * 21 % 20;
		amount = amount * 21 / 20;
		
		if(amount_cent >= 20){amount += 1; amount_cent -= 20;}
		
		cout << setw(4) << year << setw(21) << amount;
		if(amount_cent) cout << "." << amount_cent;
		cout << endl;
	}
}
