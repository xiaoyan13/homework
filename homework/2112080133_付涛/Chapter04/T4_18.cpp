/*
**Filename: 	T4_18.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/3/19
**Collage:		School of Computer Science and Engineering
**Function: 	cout i(1~5) 10*i 100*i 1000*i
*/

#include<iostream>

using namespace std;

int main()
{
	cout << "N\t10*N\t100*N\t1000*N\n";
	for(int i = 0; i < 5; i ++ )
		cout << i << '\t' << 10*i << '\t' << 100*i << '\t' << 1000*i << '\n';
	
	return 0;
}
