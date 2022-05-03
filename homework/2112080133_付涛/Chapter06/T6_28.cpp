/*
**Filename: 	T6_28.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	number B : sum of primes smaller than B == B itself? 
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

int a[N],cnt;
void solve(int x)
{
	int i = 2;
	for(; i < x/i; i ++ )
	{
		if(!(x % i))
		{
			a[cnt ++ ] = i;
			a[cnt ++ ] = x/i;
		}
	}
	if(i * i == x) a[cnt ++ ] = i;
}

int main()
{
	int m; cin >> m;
	
	solve(m);
	
	int sum = 1;
	for(int i = 0; i < cnt; i ++ ) sum += a[i];
	if(sum == m) cout << "YES";
	else cout << "NO";
	cout << endl; 
	
	return 0;
} 
