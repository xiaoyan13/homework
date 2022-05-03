/*
**Filename: 	T4_37.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/3/19
**Collage:		School of Computer Science and Engineering
**Function: 	calculate poplation increasing rate.
*/

#include<iostream>

using namespace std;

typedef long long ll;

int main()
{
	double rate = 0.1;
	double initatial_num = 7.3e9;
	double num = initatial_num;
	cout << "year\t" << "number  \t\t" << "NumberWillRise\n";
	for(int i = 1; i <= 75; i ++ )
	{
		num *= (1 + rate);
		cout << i << '\t';
		cout << num << "\t\t";
		cout << num*rate <<'\t';
		cout << endl;
	}
	
	
	return 0;
} 
