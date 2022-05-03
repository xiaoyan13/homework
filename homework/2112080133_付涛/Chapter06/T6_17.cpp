/*
**Filename: 	T6_17.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	Simulation of a sieve
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

int main()
{
	srand((unsigned)time(nullptr));
	int k = rand() % 5;
	cout << k << endl;
	int num[5];
	for(auto &i : num) cin >> i;
	cout << num[k] << endl;
	return 0;
} 
