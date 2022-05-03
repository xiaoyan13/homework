/*
**Filename: 	T5_06.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/4/2
**Collage:		School of Computer Science and Engineering
**Function: 	to calculate the average of 5 number.
*/
#include<iostream>

using namespace std;

int main()
{
	int i,n,sum = 0;
	for(i = 0;(cin >> n) && n != 9999; i ++ ) sum += n;
	cout <<  1.0*sum/i << endl;
	
	return 0;
} 
