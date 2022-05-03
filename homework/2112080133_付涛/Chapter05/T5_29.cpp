/*
**Filename: 	T5_29.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/4/2
**Collage:		School of Computer Science and Engineering
**Function: 	calculate how much money the man could get when he buy a island 300 years ago..if he still survives in the world haha..
*/
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

//formatting stuff
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f,precis p);

int main()
{
	double amount;
	double principal = 24.0;
	cout << "Year" << setw(21) << "Amount on deposit" << endl;
	
	format initialState = setFormat();
	precis prec = cout.precision(2);
	
	for(double rate = 0.05;rate <= 0.10; rate += 0.01)
	{
		for(int year = 1; year <= 387; ++ year)
		{
			amount = principal * pow(1 + rate,year);
			
			cout << setw(4) << year << setw(21) << amount << endl;
		}
		cout << endl;
	}
	restore(initialState,prec);
}

format setFormat()
{
	//set up ###.## format
	return cout.setf(std::ios_base::fixed,
				 std::ios_base::floatfield);
}

void restore(format f,precis p)
{
	cout.setf(f,std::ios_base::floatfield);
	cout.precision(p);
}
