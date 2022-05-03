/*
**Filename: 	T7_32.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<bits/stdc++.h>

using namespace std;

template <typename T>
double coutT(const T &arr,int i,int j)
{
	if(i == j) return arr[i];
	return min(coutT(arr,i + 1,j),arr[i]);
}

int main()
{
	array<double,5> m = {1000,2,3,4,5.12332};
	cout << coutT(m,0,4) << endl;
}
