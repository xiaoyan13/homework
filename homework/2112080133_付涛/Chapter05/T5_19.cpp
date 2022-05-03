/*
**Filename: 	T5_19.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/4/2
**Collage:		School of Computer Science and Engineering
**Function: 	caulcate PII int a Approximation.
*/
#include<iostream>

using namespace std;

int main()
{
	double ans = 0;
	int sg = 1;
	for(int i = 1; i <= 1000; i ++ )
	{
		double b = 2*i - 1;
		ans += sg/b;
		sg *= -1;
		cout << i << "\t" << 4*ans << endl;
	}
	
	return 0;
}
