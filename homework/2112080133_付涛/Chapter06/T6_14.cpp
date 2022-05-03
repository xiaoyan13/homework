/*
**Filename: 	T6_14.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	Method after the decimal point are rounded
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

inline int roundToIntger(double x) {return floor(x + 0.5);} 
inline double roundToTenths(double x) {return floor(x*10 + 0.5) / 10;}
inline double roundTOHundredths(double x) {return floor(x*100 + 0.5) / 100;}
inline double roundToThousandths(double x) {return floor(x*1000 + 0.5) / 1000;}

int main()
{
	double n; cin >> n;	
	cout << n << " " << roundToIntger(n) << 
				 " " << roundToTenths(n) <<
				 " " << roundTOHundredths(n) << 
				 " " << roundToThousandths(n) << endl;
	return 0;
}
