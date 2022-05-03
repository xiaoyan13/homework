/*
**Filename: 	T7_13.cpp
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
	array<int,20> m;
	
	int num,cnt = 0;
	while(cin >> num)
	{
		int sg = 0;
		for(int i = 0; i < cnt; i ++ )
			if(num == m[i]) {sg = 1;break;}
		if(!sg)	m[cnt ++ ] = num;
	}
	
	return 0;
}
