/*
**Filename: 	
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022.3.11
**Collage:		School of Computer Science and Engineering
**Function: 	to caclulate three numbers' average , max , min 
*/

#include<iostream>

using namespace std;

int main()
{
	int a,b,c,sum;
	cin >> a >> b >> c;
	sum = a + b + c;
	cout << a + b << endl;
	cout << sum/3.0 << endl;
	cout << a * b * c<< endl;
	cout << min(min(a,b),c) << endl;
	cout << max(max(a,b),c) << endl;
}
