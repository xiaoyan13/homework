/*
**Filename: 	T7_24.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	n皇后问题求解 
*/


#include<iostream>

using namespace std;

int const N = 100;

bool col[N],dg[N],udg[N];
int n;
int ans[N];//存答案 
int x;
void dfs(int u)
{
	if(u == n)
	{
		x ++ ;
		return ;
	}
	
	for(int i = 1; i <= n; i ++ )
	{
		if(!col[i] && !dg[u + i] && !udg[n - u + i])
		{
			col[i] = dg[u + i] = udg[n - u + i] = 1;
			ans[u] = i;
			dfs(u + 1);
			col[i] = dg[u + i] = udg[n - u + i] = 0;
		}
	}
	
}

int main()
{
	scanf("%d",&n);
	
	dfs(0);
	printf("%d",x);
	
	return 0; 
}

