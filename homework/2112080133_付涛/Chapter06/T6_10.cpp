/*
**Filename: 	T6_10.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	calculate circle area
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
const double PI=3.14159;
inline double sphereVolume(const double r)
{
    return 4.0/3.0*PI*pow(r,3);
}
int main()
{
    double r;
    cout<<"Enter the length of the r of your sphere: ";
    cin>>r;
    cout<<"Volume of sphere with r "<<r<<" is "<<sphereVolume(r)<<endl;

    return 0;
}
