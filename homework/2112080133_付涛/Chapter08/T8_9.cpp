/*
**Filename: 	T8_09.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main()
{
	long value1 = 20000,value2;
	
	long *longptr = &value1;
	
	cout << longptr << endl;
	
	value2 = *longptr;
	
	cout << value2 << endl;
	
	cout << &value1 << endl;
	
	cout << longptr << endl;
	
	return 0;
}
