/*
**Filename: 	
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022.3.11
**Collage:		School of Computer Science and Engineering
**Function: 	input i ,calculate sqr(i),cube(i).
*/

#include<iostream>

using namespace std;

int main()
{
	printf("integer   square    cube\n");
	for(int i = 0; i <= 10; i ++ )
		printf("%-10d%-10d%-10d\n",i,i * i,i * i * i);
	
	return 0;
}
