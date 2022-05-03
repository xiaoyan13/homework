/*
**Filename: 	
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022.3.11
**Collage:		School of Computer Science and Engineering
**Function is to print pattern:
**		* * * * * * * *
**		 * * * * * * * *
**		* * * * * * * *
**		 * * * * * * * *
**		* * * * * * * *
**	 	 * * * * * * * *
**	 	 * * * * * * * *
**	 	* * * * * * * *
*/

#include<iostream>

using namespace std;

int main()
{
	char a[2][20] =
	 {"* * * * * * * *",
	  " * * * * * * * *"};
	  
	int i = 4;
	while(i -- ) cout << a[0] << "\n" << a[1] << "\n";
	  
	  
	
	return 0;
} 
