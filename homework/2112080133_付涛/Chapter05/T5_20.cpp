/*
**Filename: 	T5_20.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/4/2
**Collage:		School of Computer Science and Engineering
**Function: 	if three numbers could compose a triangle , print them in a row.
*/
#include<bits/stdc++.h>

using namespace std;

int const N = 500;

int sum;
int ans[N],cnt;

int sqr_t(int a,int b)
{
	return sqrt(a*a + b*b);
}

int main()
{
	for(int i = 1; i < N; i ++ )
	{
		for(int j = i; j < N; j ++ )
		{
			int m = sqr_t(i,j);
			if(m < N && m*m == i*i + j*j)
			{
				cout << i << " " << j << " " << m << endl;
				ans[++ cnt] = m;
			}
		}
	}
	
	cout << cnt << endl;
//	for(int i = 1; i <= cnt; i ++ ) cout << ans[i] << endl; 
} 
