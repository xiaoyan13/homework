/*
**Filename: 	T6_27.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	return min(x,y,z)
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

inline double mininum(double x,double y,double z) {return min(x,min(y,z));}
int main()
{
	double x,y,z;
	cin >> x >> y >> z;
	cout << mininum(x,y,z) << endl;
	
	return 0;
}
