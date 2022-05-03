/*
**Filename: 	T7_14.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> m;
	
	int num;
	while(cin >> num)
	{
		int sg = 0;
		for(auto i = m.begin(); i < m.end(); i ++ )
			if(*i == num) {sg = 1;break;}
		if(!sg) m.push_back(num);
	}
	
	
	return 0;
}
