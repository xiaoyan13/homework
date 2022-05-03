/*
**Filename: 	T4_26.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/3/19
**Collage:		School of Computer Science and Engineering
**Function: 	palindrome number
*/

#include<iostream>

using namespace std;

int solve(string a)
{
	for(int i = 0,j = a.size() - 1; i < j; i ++ ,j -- ) 
		if(a[i] != a[j]) return 0;
		
	return 1;
}

int main()
{
	string a;
	cin >> a;
	if(solve(a)) cout << "Yes";
	else cout << "No";
	
	cout << endl;
	
	return 0;
} 
