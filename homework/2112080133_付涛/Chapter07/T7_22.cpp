/*
**Filename: 	T7_22.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<bits/stdc++.h>

using namespace std;

int const N = 10;

int dx[] = {-1,-1,-2,-2,1,1,2,2};
int dy[] = {2,-2,1,-1,2,-2,1,-1};
int q[N][N];
int n;
int stp = 1,ans = 0;

void dfs(int x,int y)
{
	if(stp == n*n) {ans ++ ; return ;}
	for(int i = 0; i < 8; i ++ )
	{
		int xx = x + dx[i],yy = y + dy[i];
		if(xx < 0 || xx >= n || yy < 0 || yy >= n || q[xx][yy]) continue;
		q[xx][yy] = (++ stp);
		dfs(xx,yy);
		q[xx][yy] = 0;
		stp --;
	}
}
int main()
{
	n = 6;
	
	q[0][0] = 1;
	dfs(0,0);
	cout << ans << endl;
	
	return 0;
} 
