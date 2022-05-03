/*
**Filename: 	T5_09.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/4/2
**Collage:		School of Computer Science and Engineering
**Function: 	To calculate the product of odd numbers of the input numbers.
*/
#include<iostream>

using namespace std;

int main()
{
	int ans = 1;
	for(int i = 1; i <= 15; i ++ )
		if(i % 2) ans *= i;
	
	cout << ans << endl;
	
	return 0;
	
}
