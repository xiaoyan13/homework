/*
**Filename: 	
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022.3.11
**Collage:		School of Computer Science and Engineering
**Function: 	print a number,each bit will interval 3 spaces left-aligned.
*/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char a[10];
	cin >> (a + 1);
	int len = strlen(a);
	for(int i = 1; i <= len; i ++ ) printf("%-3c",a[i]);
	
	return 0;
} 
