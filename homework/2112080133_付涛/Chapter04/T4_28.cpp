/*
**Filename: 	T4_28.cpp
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
	for(int i = 0; i < 4; i ++) 
	{
		for(int i = 0; i < 8; i ++ ) cout << "* ";
		cout << endl;
		for(int i = 0; i < 8; i ++ ) cout << " *";
		cout << endl;
	}
	
	return 0;
}
