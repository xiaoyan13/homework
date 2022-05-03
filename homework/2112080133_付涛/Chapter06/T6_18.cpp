/*
**Filename: 	T6_18.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	n^m
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

long integerPower(long base,long exponent)
{
	if(exponent) return base * integerPower(base,exponent - 1);
	return 1;
}

int main()
{
	int n,m; cin >> n >> m;
	cout << integerPower(n,m) << endl;
	
	return 0;
}
