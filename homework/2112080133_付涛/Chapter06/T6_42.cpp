/*
**Filename: 	T6_42.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	calculate distance of two points(x1,y1),(x2,y2).
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

inline double distance(double x1,double y1,double x2,double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main()
{
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    cout<< distance(x1,y1,x2,y2)<<endl;
    return 0;
}
