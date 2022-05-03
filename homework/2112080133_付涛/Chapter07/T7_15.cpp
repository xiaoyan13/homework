/*
**Filename: 	T7_15.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
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

const int row = 3;
const int column = 5;
int main()
{
	array<array<int,column>,row>sales;
	int counter = 1;
	for(size_t r = 0;r<sales.size();r++)
	{
		for(size_t c = 0;c<sales[r].size();c++)
		{
			sales[r][c] = counter;
			counter++;
		}
	} 
	for(size_t r = 0;r<sales.size();r++)
	{
		for(size_t c = 0;c<sales[r].size();c++)
		{
			cout << sales[r][c] << " ";
		}
	}
	
}
