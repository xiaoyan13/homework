
/*
**Filename: 	T4_33.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/3/19
**Collage:		School of Computer Science and Engineering
**Function: 	judge three numbers can compisite right-angled triangle or not
*/
#include<iostream>

using namespace std;

int main()
{
	int a,b,c;//a b c all positive now. 
	cin >> a >> b >> c;
	if(a > b) swap(a,b);
	if(b > c) swap(b,c);
	if(c*c == a*a + b*b) cout << "Yes";
	else cout << "No";
	
	cout << endl;
	
	return 0;
} 
