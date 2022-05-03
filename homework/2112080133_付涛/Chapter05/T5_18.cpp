/*
**Filename: 	T5_18.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/4/2
**Collage:		School of Computer Science and Engineering
**Function: 	cout 1 - 256 in hex doc oct.
*/
#include<iostream>

using namespace std;

void binary_func(int a)
{
	if(a) binary_func(a/2);
	if(!a) {if(a % 2) cout << 1;return;}
	cout << a%2;
}

int main()
{
	cout << "D\tB\t\tO\tH" << endl;
	for(int i = 1; i <= 256; i ++ )
	{
		cout << dec << i << '\t';
		binary_func(i); cout << "\t\t";
		cout << oct << i << '\t';
		cout << hex << i << endl;
		
	}
	
	return 0;
}
