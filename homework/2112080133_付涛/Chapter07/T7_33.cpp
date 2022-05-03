/*
**Filename: 	T7_33.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<bits/stdc++.h>

using namespace std;

int len;
int endx,endy;
char mapp[12][12];

int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

bool dfs(int x,int y)
{
	len ++ ;
	if(x == endx && y == endy)
	{
		cout << endl;
		for(int i = 0; i < 12; i ++ ) 
		{
			for(int j = 0; j < 12; j ++ ) cout << mapp[i][j] << " ";
			cout << endl;
		}
		return true;
	}
	mapp[x][y] = '+';
	for(int i = 0; i < 4; i ++ )
	{
		int xx = x + dx[i],yy = y + dy[i];
		if(xx < 0 || xx > 12 || yy < 0 || yy > 12) continue;
		if(mapp[xx][yy] != '#' && mapp[xx][yy] != '+')
		{
			if(dfs(xx,yy)) return true;
		}
	}
	mapp[x][y] = '.';
	len --;
	return false;
}

int main()
{
	for(int i = 0; i < 12; i ++ )
		for(int j = 0; j < 12; j ++ ) cin >> mapp[i][j];
	
//	cin >> endx >> endy;
	endx = 11;endy = 4;
	
	cout << dfs(2,0) << endl;
	cout << len << endl;
	return 0;
}
