/*
**Filename: 	T6_53.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	max(a,b)
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

inline max(double a,double b) {return a > b;}

using namespace std;

int main()
{
	double a,b;
	cin >> a >> b;
    if(max(a,b)) cout << "a > b";
    else cout << "a < b";
    cout << endl;
    
    return 0;
}
