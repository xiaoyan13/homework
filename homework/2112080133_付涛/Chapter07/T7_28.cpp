/*
**Filename: 	T7_28.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<bits/stdc++.h>

using namespace std;

bool PalinString(string obj)
{
	if(obj == "" || obj.size() == 1) return 1;
	if(obj[0] == obj.back() && PalinString(obj.substr(1,obj.size() -2)))
		return 1;
	return 0;
}
int main()
{
	string test = "able was i ere i saw elba";
	cout << PalinString(test) << endl;
	
	return 0;
}
