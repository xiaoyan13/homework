/*
**Filename: 	T4_36.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/3/19
**Collage:		School of Computer Science and Engineering
**Function: 	end to end cryptographic .
*/

#include<iostream>

using namespace std;

int main()
{
	string a;
	cin >> a;
	for(int i = 0,len = a.size(); i < len ; i ++ )
		a[i] = (a[i] - '0' + 7) % 10 + '0';
	
	swap(a[0],a[2]);
	swap(a[1],a[3]);
	
	cout << a;
	
	return 0;
}
