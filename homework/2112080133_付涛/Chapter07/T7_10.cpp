/*
**Filename: 	T7_10.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<bits/stdc++.h>

using namespace std;

int const N = 1000;

int classify(int x)
{
	double money = 200 + x*0.09;
	if(money < 300) return 0;
	if(money < 400) return 1;
	if(money < 500) return 2;
	if(money < 600) return 3;
	if(money < 700) return 4;
	if(money < 800) return 5;
	if(money < 900) return 6;
	if(money <1000) return 7;
					return 8;
}

int main()
{
	array<int,10> m = {};
	
	int value;
	cout << "input your values , -1 to quit" << endl;
	while(cin >> value && value != -1) 
	{
		++m[classify(value)];
	}
	
	for(int i = 0; i < 9; i ++ ) cout << m[i] << " ";
	cout << endl;
	return 0;
}
