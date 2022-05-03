/*
FileName : T6_25.cpp
Author   : Futao
E-mail   : 693086605@qq.com
Date     : Apr 11th,2022
College  : School of Computer Science and Information Engineering
Function : Just foe the homework

*/
#include<bits/stdc++.h>

using namespace std;

int const N = 1e5 + 100;

int time(int hour,int minute,int second)
{
	if(hour<=12)
	{
		second=hour*3600+minute*60+second;
	}else
	{
	second=(hour-12)*3600+minute*60+second;
	}
	return second;
}
int main()
{
	
	int hour,minute,second;
	cin>>hour>>minute>>second;
	cout<<time(hour,minute,second);

	return 0;
}
