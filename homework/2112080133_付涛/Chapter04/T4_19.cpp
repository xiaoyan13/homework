/*
**Filename: 	T4_19.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/3/19
**Collage:		School of Computer Science and Engineering
**Function: 	cout i(1~5) 10*i 100*i 1000*i
*/

#include<iostream>

using namespace std;

int main()
{
	double largest,larger;
	double num;
	int n = 9;
	
	cin >> largest;
	while(n -- )
	{
		cin >> num;
		if(num >= largest)
		{
			larger = largest;
			largest = num;
		}
	}
	
	cout << larger << " " << largest;
	cout << endl;
	return 0;
}
