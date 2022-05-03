/*
**Filename: 	T5_05.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/4/2
**Collage:		School of Computer Science and Engineering
**Function: 	to calculate sum of 5 num
*/
#include<iostream>

using namespace std;

int main()
{
	int n ;
	cin >> n;
	int num = 0;
	for(int i = 0,j; i < n; i ++ ) cin >> j,num += j;
	
	cout << num << endl;
	
	return 0;
} 
