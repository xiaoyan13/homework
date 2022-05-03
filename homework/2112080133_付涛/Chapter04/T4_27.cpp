/*
**Filename: 	T4_27.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/3/19
**Collage:		School of Computer Science and Engineering
**Function: 	dinary to decimal number.
*/

#include<iostream>

using namespace std;

typedef long long ll;

ll solve(int a)
{
	ll tail = a % 10;
	a /= 10;
	ll ans = tail,i = 1;
	while(a)
	{
		tail = a % 10;
		i*= 2;
		if(tail) ans += i;
		a /= 10;
	}
	
	return ans;
}

int main()
{
	int a;
	cin >> a;	
	ll ans = solve(a);
	cout << ans << endl;
	
	return 0;
}
