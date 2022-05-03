/*
**Filename: 	T6_24.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	x/b == 0? x %b == 0 ?
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

inline int func1(int x,int b) {return x / b;}
inline int func2(int x,int b) {return x % b;}
char * func3(int x) {char *m = new char[20]; return itoa(x,m,10);}

int main()
{
	int m,n;
	cin >> m >> n;
	cout << func1(m,n) << endl;
	cout << func2(m,n) << endl;
	
	int x;
	cin >> x;
	char *p = func3(x);
	for(auto i = p; *i != '\0'; i ++ ) cout << *i << " ";
	cout << endl;
	delete p;
	
	return 0;
} 
