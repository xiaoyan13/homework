/*
**Filename: 	T6_29.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	one number is prime or not
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

int const N = 1e5 + 100;

int prime(int x)
{
	if(x == 0 || x == 1) return 0;
	for(int i = 2; i < x/i; i ++ )
		if(!(x/i)) return 0;
	return 1;
}

int main()
{
	int x ; cin >> x;
	if(prime(x)) cout << "YES" ;
	else cout << "NO";
	
	return 0;
}
