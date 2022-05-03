/*
**Filename: 	T7_16.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<cstdlib>
#include<ctime>
#include<iostream>
#include<array>

using namespace std;


void distribution(array<int,6> & m)
{
	m = {0};
	for(int i = 0;i < 36000; i ++ )
	{
		int ans = rand() % 6;
		++ m[ans];
	}
}
int main()
{
	srand(time(nullptr));
	
	array<int,6> m,n;
	distribution(m);
	distribution(n);
	
	for(auto i : m) cout << i << " " ;
	cout << endl;
	for(auto j : n) cout << j << " " ;
	cout << endl;
	
	array<int,11> p = {0};
	for(int i = 0; i < 6; i ++ )
		for(int j = 0; j < 6; j ++ )
			p[i + j] += m[i] + n[j];
	
	for(auto i : p) cout << i << endl;
	
	return 0;
}
