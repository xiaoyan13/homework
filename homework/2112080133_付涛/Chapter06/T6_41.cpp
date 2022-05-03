/*
FileName : T6_41.cpp
Author   : Futao
E-mail   : 693086605@qq.com
Date     : Apr 11th,2022
College  : School of Computer Science and Information Engineering
Function : Just foe the homework

*/
#include<bits/stdc++.h>

using namespace std;

int const N = 1e5 + 100;

void swap(int *m,int *n){
	int t;
	if(m < n){
		t = *n;
		n = m;
		*m = t;
	}
}
int  f(int m,int n){
	if(m%n == 0)return n;
	else
		return f(n,m%n);
}
int main(){
	int p = 0,m = 0,n = 0;
	printf("请按照由大到小的顺序输入两个整数,用空格隔开:\n");
	scanf("%d%d",&m,&n);
	swap(m,n);
	p = f(m,n);
	printf("两个数的最大公约数是:%d\n",p);
	return 0;
}
