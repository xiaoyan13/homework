/*
**Filename: 	T5_24.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/4/2
**Collage:		School of Computer Science and Engineering
**Function: 	As same as T5_23,cout a diamond pattern.
*/
#include<iostream>

using namespace std;

int main()
{
	int len; cin >> len;
	int n = (len - 1) >> 1;
	
	for(int i = 1; i <= n; i ++ )
	{
		for(int j = 0; j < (n - i + 1); j ++ ) cout << " ";
		for(int j = 0; j < 2*i - 1; j ++ ) cout << "*";
		for(int j = 0; j <= (n - i + 1); j ++ ) cout << " ";
		cout << endl;
	}
	
	for(int i = 0; i < len; i ++ ) cout << "*";
	cout << endl;
	
	for(int i = 1; i <= n; i ++ )
	{
		for(int j = 0; j < i; j ++ ) cout << " ";
		for(int j = 0; j < 2*n - 2*i + 1; j ++ ) cout << "*";
		for(int j = 0; j <= i; j ++ ) cout << " ";
		cout << endl;
	}
	
	
	
	
	return 0;
} 
