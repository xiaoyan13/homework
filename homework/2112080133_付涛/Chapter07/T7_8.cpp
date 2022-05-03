/*
**Filename: 	T7_08.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<iostream>
#include<algorithm>
#include<cstring>
#include<array>

using namespace std;

int const N = 10;

int main()
{
	array<char,N> alphabet = {0};
	cout << get<3>(alphabet) << endl;//Ä¬ÈÏÊä³ö¿Õ 
	
	array<double,N> grades;
	cin >> grades[4];
	
	array<int,5> values;
	values.fill(8);
	for(int i : values) cout << i << " " ;
	cout << endl;
	
	array<double,100> temperatures = {};
	temperatures.fill(20);
	double sum = 0;
	for(auto i = begin(temperatures); i < end(temperatures); i ++ ) sum += *i ;
	cout << sum << endl;
	
	return 0;
}
