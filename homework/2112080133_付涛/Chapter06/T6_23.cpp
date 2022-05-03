/*
**Filename: 	T6_23.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	draw a parter with x*y of "m".
*/

#include<cstdio>
#include<string>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<queue>
#include<stack> 
#include<ctime>
#include<array>
#include<set>
#include<map>
#include<vector>
#include<queue>
#include <utility> 

using namespace std;

void drawPattern(int x,char m)
{
	for(int i= 0; i < x; i ++ )
	{
		for(int j = 0; j < x; j ++ ) cout << m;
		cout << endl;
	}
}

int main()
{
	int n;char m;
	cin >> n >> m;
	drawPattern(n,m);
	
	return 0;
}
