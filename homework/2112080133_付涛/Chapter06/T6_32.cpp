/*
**Filename: 	T6_32.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	classify grades in five ranks
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
#include<utility> 

using namespace std;

int qualityPoints(int x)
{
	if(x >= 90) return 4;
	if(x >= 80) return 3;
	if(x >= 70) return 2;
	if(x >= 60) return 1;
				return 0;
}
int main()
{
	int points; cin >> points;
	cout << qualityPoints(points);
	
	return 0;
}
