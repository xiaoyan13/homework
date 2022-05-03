/*
**Filename: 	T6_20.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	y % x == 0?
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

inline bool multipe(int x,int y) {return y % x ? 0 : 1;}

int main()
{
	int x,y;
	cin >> x >> y;
	cout << multipe(x,y) << endl;	
}
