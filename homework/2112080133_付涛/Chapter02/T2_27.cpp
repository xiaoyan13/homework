/*
**Filename: 	
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022.3.11
**Collage:		School of Computer Science and Engineering
**Function: 	to change char to int(ANSII).
*/

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char a[] = "aA!#$%^&*()_+=[]{};'<>?4";
	
	int len = strlen(a);
	for(int i = 0; i < len; i ++ ) cout << static_cast<int>(a[i]) << endl;
	
	
	return 0;
} 
