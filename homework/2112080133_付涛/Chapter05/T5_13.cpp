/*
**Filename: 	T5_13.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/4/2
**Collage:		School of Computer Science and Engineering
**Function: 	cin a number n and print "*" n times.
*/
#include<iostream>

using namespace std;

int main()
{
	for(int i = 0,a; i < 5; i ++ )
	{
		cin >> a;
		for(int j = 0; j < a; j ++ ) cout << "*";
		cout << endl;
	}
	
	return 0;
} 
