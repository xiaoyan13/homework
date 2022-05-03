/*
**Filename: 	T6_52.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	min(a,b)
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

inline bool minimum(double a,double b)
{
    if(a > b) return 1;
    return 0;
}
int main()
{
	int a,b;
    cin >> a >> b;
    
    if(minimum(a,b)) cout << b << endl;
    else  cout << a << endl;
    
    return 0;
}
