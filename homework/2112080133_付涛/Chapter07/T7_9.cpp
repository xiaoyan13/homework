/*
**Filename: 	T7_09.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<bits/stdc++.h>

using namespace std;

int const M = 2,N = 3;

int main()
{
	array<array<int,3> ,2> t;
	
	t[1][2] = 0;
	
	t = {};
	
	for(auto i : t)
		for(int &j : i) j = 0;
	
	for(int i = 0; i < 2; i ++ )
		for(int j = 0; j < 3; j ++ ) cin >> t[i][j];
	
	int mini = t[0][0];
	for(auto i : t)
		for(int j : i) mini = min(mini,j);
	cout << mini << endl;
	
	cout << t[0][1] + t[1][1] << endl; 
		
	return 0;
}
