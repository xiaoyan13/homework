/*
**Filename: 	T6_22.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	draw a pattern with x*y of "*"
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

void drawPattern(int x)
{
	for(int i= 0; i < x; i ++ )
	{
		for(int j = 0; j < x; j ++ ) cout << "*";
		cout << endl;
	}
}

int main()
{
	int n; cin >> n;
	drawPattern(n);
	
	return 0;
}
