/*
**Filename: 	T6_53.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	hanNuoTa problem -- recurrence
*/

#include<bits/stdc++.h>

using namespace std;

int const N = 1e5 + 100;

void move(int x,int y)
{
	cout << x << " -> " << y << endl;
}

void solve(int n,int x,int y,int z) //x -> y zÎªÌø°å 
{
	if(!n) return;
	
	solve(n - 1,x,z,y);
	move(x,y);
	solve(n - 1,z,y,x);
}
int main()
{
	int n; cin >> n;
	solve(n,1,3,2);
	return 0;
}
