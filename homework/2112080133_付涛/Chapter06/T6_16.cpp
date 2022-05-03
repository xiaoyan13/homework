/*
**Filename: 	T6_16.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	rand [a,a + b]
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

int simulate_rand(int st,int len)
{
	srand((unsigned)time(nullptr));
	int a = rand() % len;
	return (st + a);
}

int main()
{
	cout << "Please key in the starting of interval and its len: ";
	int a,len;
	cin >> a >> len;
	cout << simulate_rand(a,len) << endl;
	
	return 0;
}
