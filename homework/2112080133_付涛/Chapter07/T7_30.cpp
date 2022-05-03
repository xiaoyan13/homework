/*
**Filename: 	T7_30.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<bits/stdc++.h>

using namespace std;

template <typename T>
void coutT(const T &arr,int i,int j)
{
	cout << arr[i] << " ";
	if(i == j) return ;
	coutT(arr,i + 1,j);
}

int main()
{
	array<double,5> m = {1,2,3,4,5.12332};
	coutT(m,0,4);
	
	return 0;
}
