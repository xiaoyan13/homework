/*
**Filename: 	T6_21.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	x % 2 == 0 ?
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

inline double_num(int x) {return x % 2;}

int main()
{
	int n;
	while(cin >> n)
	{
		if(double_num(n)) cout << "No";
		else cout << "Yes";
		cout << endl;
	}
	return 0;
}
