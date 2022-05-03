/*
**Filename: 	T6_33.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	Simulation of a coin
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
#include<utility> 

using namespace std;


int flip()
{
	int m = rand() % 2;
	return m;
}
int main()
{
	srand((unsigned)time(nullptr));
	
	int n ; cin >> n;
	int num1 = 0,num2 = 0;
	for(int i = 0; i < n; i ++ )
		if(flip()) num1 ++ ; 
		else num2 ++ ;
	
	cout << num1 << " " << num2 << endl;
	cout << "you put " << n << " times.The chance to 1 equal to " << num1*1.0/n << ".\n";
}
