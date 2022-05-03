/*
**Filename: 	T7_11.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	array<int,10> counts = {};
	
	array<int,15> bonus = {};
	for(auto &i : bonus) i += 1;
	
	array<double,12> monthlyTemperatures;
	for(int i = 0; i < 12; i ++ ) cin >> monthlyTemperatures[i];
	
	array<array<int,5> ,6> bestScores = {};
	for(int i = 0,len = bestScores[1].size(); i < len; i ++ )
	{
		for(int j = 0,len = bestScores.size(); 
			    j < len; j ++ )	
				cout << bestScores[i][j] << " ";
		cout << endl;
	}
	
	return 0;
}
