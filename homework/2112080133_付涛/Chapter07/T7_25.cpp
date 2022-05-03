/*
**Filename: 	T7_25.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<cstdio>
#include<string>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<queue>
#include<stack> 
#include<ctime>
#include<array>
#include<set>
#include<map>
#include<vector>
#include<queue>
#include <utility> 

using namespace std;

int n = 8;
int sum;
int a[10];
bool p = 1;

int main()
{
	for(int x1 = 1;x1<=8;x1++)
	{
		a[1] = x1;
		for(int x2 = 1;x2<=8;x2++)
		{
			a[2] = x2;
			for(int x3 = 1;x3<=8;x3++)
			{
				a[3] = x3;
				for(int x4 = 1;x4<=8;x4++)
				{
					a[4] = x4;
					for(int x5 = 1;x5<=8;x5++)
					{
						a[5] = x5;
						for(int x6 = 1;x6<=8;x6++)
						{
							a[6] = x6;
							for(int x7 = 1;x7<=8;x7++)
							{
								a[7] = x7;
								for(int x8 = 1;x8<=8;x8++)
								{
									a[8] = x8;
									p = true;
									for(int i = 8;i>=1;i--)
									{
										for(int j = 1;j<=8;j++)
										{
											if(i>j)
											{
												if (( fabs(a[i] - a[j]) == i-j) || (a[i] == a[j]))
										{
											p = false;
										}
											}
										if(!p)
										break;
										}
										if(!p)
										break;
									}
									if(p)
										{
											for(int i = 1;i<=8;i++)
											{
												cout << a[i];
											}
											cout << endl;
											sum++;
										}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << sum;
	return 0;
}
