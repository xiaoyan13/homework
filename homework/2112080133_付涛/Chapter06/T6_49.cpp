/*
**Filename: 	T6_49.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	calculate area of circle
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

#define PI 3.1415926

inline double calculates(double r)
{
    return PI*r*r;
}
int main()
{
    double r;
    cin>>r;
    cout << calculates(r) << endl;
    return 0;
}
