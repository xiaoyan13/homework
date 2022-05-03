/*
**Filename: 	T5_08.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/4/2
**Collage:		School of Computer Science and Engineering
**Function: 	to calculate minimum of the following numbers.
*/
#include<iostream>

using namespace std;

int main()
{
	int n;cin >> n;
	
	int ans;
	for(int i = 0,num;i < n; i ++ )
	{
		if(!i) cin >> ans;
		else cin >> num,ans = min(ans,num);
	}
	
	cout << ans << endl;
	
	return 0;
}
