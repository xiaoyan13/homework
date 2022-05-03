/*
**Filename: 	
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022.3.11
**Collage:		School of Computer Science and Engineering
**Function: 	to cout for numbers' max/min.
*/

#include<iostream>

using namespace std;

int main()
{
	int a,b,c,d,e;
	cin >> a >> b >> c >> d >> e;
	
	int max = a;
	if(b > max) max = b;
	if(c > max) max = c;
	if(d > max) max = d;
	if(e > max) max = e;
	cout << max << endl;
	
	int min = a;
	if(b < min) min = b;
	if(c < min) min = c;
	if(d < min) min = d;
	if(e < min) min = e;
	cout << min << endl;
	
	return 0;
}
