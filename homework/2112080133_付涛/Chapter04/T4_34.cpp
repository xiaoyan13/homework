/*
**Filename: 	T4_34.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/3/19
**Collage:		School of Computer Science and Engineering
**Function: 	three options:
** 				*1 calculate  n!
**				*2 calculate e in precision n
**				*3 calculate e^x in precision n
*/

#include<iostream>

using namespace std;

int main()
{	
	long long n;	
	int op;
	cout << "Which do you want to get? ";
	cin >> op;
	if(op == 1)
	{
		cin >> n;
		int ans;
		if(n == 0) ans = 1;
		else while(n -- ) ans *= n;
		cout << ans << endl;
	}else if(op == 2)
	{
		cin >> n;
		double ans = 1.0;
		if(n < 1) cout << "No answer";
		else for(int i = n; i ; i --) ans = ans*(1.0/i) + 1;
		cout << ans << endl;
	}else if(op == 3)
	{
		cout << "x and n(items): to estimate the e^x: ";
		int x;
		cin >> x >> n;
		double ans = 1.0;
		if(n < 1) cout << "No answer";
		else for(int i = n; i ; i --) ans = ans*(1.0*x/i) + 1;
		cout << ans << endl;
	}
	return 0;
} 
