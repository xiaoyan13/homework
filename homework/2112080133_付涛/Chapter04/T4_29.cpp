/*
**Filename: 	T4_29.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/3/19
**Collage:		School of Computer Science and Engineering
**Function: 	cout 2^n
*/

#include<iostream>

using namespace std;

int main()
{
	long long i = 1;
	int n = 69;
	while(n -- )
	{
		i *= 2;
		cout << i << endl;
	}
	//as you see,if dont limit n,it will cout 0 after 64 output.
	
	return 0;
}
