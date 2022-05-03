/*
**Filename: 	T7_31.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<bits/stdc++.h>

using namespace std;

inline void 
	recursiveMinimum(string m,int j)
{
	if(j == m.size()) return;
	recursiveMinimum(m,j + 1);
	cout << m[j] << " ";
}

int main()
{
	string m = "12323";
	recursiveMinimum(m,0);
	return 0;
}
