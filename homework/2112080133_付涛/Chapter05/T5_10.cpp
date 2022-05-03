/*
**Filename: 	T5_10.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/4/2
**Collage:		School of Computer Science and Engineering
**Function: 	n!
*/
#include<iostream>

using namespace std;

int main()
{
	for(int i = 1,ans = 1; i <= 5; i ++ )
	{
		ans *= i;
		cout << i << "\t" << ans << endl;
	}
	return 0;
}
