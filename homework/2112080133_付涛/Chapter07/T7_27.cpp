/*
**Filename: 	T7_27.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<bits/stdc++.h>

using namespace std;

int const N = 1010;

//line_primes
int line_primes(int prime[])
{
	int st[N] = {0};
	int cnt = 0;
	
	for(int i = 2; i <= 1000; i ++ ) 
	{
		if(!st[i]) prime[cnt ++ ] = i;
		for(int j = 0; prime[j] <= 1000 / i; j ++ )
		{
			st[prime[j] * i] = 1;
			if(i % prime[j] == 0) break;
		}
	}
	return cnt;
}

//Eraosthenes
int Eraosthenes(int prime[])
{
	int st[N] = {0};
	int cnt = 0;
	
	for(int i = 2; i <= 1000; i ++ )
	{
		if(!st[i]) prime[cnt ++ ] = i;
		for(int j = 2; j <= 1000 / i; j ++ ) 
			st[j * i] = 1;
	}
	
	return cnt;
}

int main()
{
	int prime[N];
	int len1 = line_primes(prime);
	for(int i = 0; i < len1 ; i ++ ) 
		cout << prime[i] << " ";
	
	cout << endl;
	
	int prime2[N];
	int len2 = Eraosthenes(prime2);
	for(int i = 0; i < len2 ; i ++ )
		cout << prime2[i] << " ";
		
	cout << endl;
	
	return 0;
}
