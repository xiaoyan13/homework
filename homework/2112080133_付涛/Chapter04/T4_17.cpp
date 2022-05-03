/*
**Filename: 	T4_17.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/3/19
**Collage:		School of Computer Science and Engineering
**Function: 	find largest number of 10.
*/

#include<iostream>

using namespace std;

int main()
{
	double largest,num,n = 9;
	
	cin >> largest;
	while(n -- )
	{
		cin >> num;
		largest = max(largest,num);
	}
	cout << largest;
	
	return 0;
}
