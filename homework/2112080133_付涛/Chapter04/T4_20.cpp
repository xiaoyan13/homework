/*
**Filename: 	T4_20.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/3/19
**Collage:		School of Computer Science and Engineering
**Function: 	cin 1 or 2 two end directly.
*/

#include<iostream>

using namespace std;

int main()
{
	int ans;
	while(1)
	{
		cin >> ans;
		if(ans == 1 || ans == 2) break; 
	}
	
	return 0;
}
