/*
**Filename: 	T4_32.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/3/19
**Collage:		School of Computer Science and Engineering
**Function: 	judge three number can composite triangle or not
*/

#include<iostream>

using namespace std;

int main()
{
	double x,y,z;
	cin >> x >> y >> z;
	if(x <= 0 || y <= 0 || z <= 0) cout << "No";
	else
	{
		if(x + y > z && y + z > x && x + z > y) cout << "Yes";
		else cout << "No";
	}
	
	cout << endl;
	
	return 0;
} 
