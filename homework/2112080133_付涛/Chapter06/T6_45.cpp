/*
FileName : T6_45.cpp
Author   : Futao
E-mail   : 693086605@qq.com
Date     : Apr 11th,2022
College  : School of Computer Science and Information Engineering
Function : Just foe the homework

*/
#include<iostream>
using namespace std;

int mystery(int,int);

int main()
{
	int x=0;
	int y=0;
	cout<<"Enter two integers.....";
	cin >> x >> y;
	cout<<"The result is:"<<mystery(x,y)<<endl;
}

int mystery(int a,int b)
{
if(b>0)
{
	if(1==b)
	    return a;
	    else
	    return a+mystery(a,b-1);
}
    if(1==b)
	{
    a=a*-1;
    return a;
	}
    else return a+mystery(a,b+1);
}






