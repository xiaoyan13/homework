/*
**Filename: 	T7_35.cpp
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
	array<array<int,10>, 5> chart;
	
	array<string,5> questions;
	questions[0] = "why ...";
	questions[1] = "should ....";
	questions[2] = "I ...";
	questions[3] = "do ...";
	questions[4] = "this kind of homework..";
	
	int maxi,mini;
	int maxq = 11,minq = 0;
	for(int i = 0; i < 5; i ++ )
	{
		cout << questions[i] << endl;
		for(int j = 0; j < 10; j ++ )
		{
			cin >> chart[i][j];
			if(maxq < chart[i][j]) maxq = chart[i][j],maxi = i;
			if(minq > chart[i][j]) mini = chart[i][j],mini = i;
		}
	}
	
	int sum1 = 0,sum2 = 0;
	for(int i = 0; i < 10; i ++ ) 
	{
		sum1 += chart[maxi][i];
		sum2 += chart[mini][i];
	}
	
	cout << sum1/10.0 << " " << sum2/10.0 << endl;
	
	return 0;
}
