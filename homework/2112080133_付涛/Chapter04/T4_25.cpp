/*
**Filename: 	T4_25.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/3/19
**Collage:		School of Computer Science and Engineering
**Function: 	cout a pattern..
*/

#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i ++) cout << "*";
	cout << "\n";
	for(int i = 0; i < n - 2; i ++ )
	{
		cout << "*";
		for(int j = 0; j < n - 2; j ++ ) cout << " ";
		cout << "*\n";
	}
	for(int i = 0; i < n; i ++) cout << "*";
	
	return 0;
}
