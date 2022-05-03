/*
**Filename: 	T6_19.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	distance of two points
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

inline double xie_edg(double x,double y) {return sqrt(x*x + y*y);}

int main()
{
	 int x,y;
	 cin >> x >> y;
	 cout << xie_edg(x,y) << endl;
	
	return 0;
}
