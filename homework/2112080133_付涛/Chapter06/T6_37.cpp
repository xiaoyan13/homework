/*
FileName : T6_37.cpp
Author   : Futao
E-mail   : 693086605@qq.com
Date     : Apr 11th,2022
College  : School of Computer Science and Information Engineering
Function : Just foe the homework

*/
#include<iostream>
using namespace std;
int fibonacci(int n){
	int a,c,d,e;
	int num1 = 1;
	int num2 = 1;
	int tmp = 0;
	int i = 0;
	if (n < 3)
	{
		return 1;
	}
	else
	{
		for (i = 0; i>n-3; i++)
		{
			tmp = num1 + num2;
			num1 = num2;
			num2 = tmp;
		}
		return tmp;
	}
}
int main(){
	int n;
	cout<<"1 = YES!,0 = NO!";
	cin >> n;
	cout<<fibonacci(n);

return 0;
}
