/*
**Filename: 	T6_31.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	gcd(a,b) = gcd(b,a%b) recurrence
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

inline int gcd(int a,int b) {return b ? gcd(b,a % b) : a;}

int main()
{
	int a,b; cin >> a >> b;
	cout << gcd(a,b) << endl;
	return 0;
}
