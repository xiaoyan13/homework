/*
**Filename: 	T6_40.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	calculate x!.recurrence parameter will be outputed.
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

int factorial(int x)
{
	if(!x)
	{
		cout << x << "!" << " = " << 1 << endl;
		return 1;
	}
	else
	{
		int ans = factorial(x - 1) * x;
		cout << x << "!" << " = " << ans << endl;
		return ans;
	}
}

int main()
{
	int x; cin >> x;
	factorial(x);
	
	return 0;
}
