/*
**Filename: 	T6_53.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	use of class enum
*/

#include<bits/stdc++.h>

using namespace std;

enum class AccountType 
{
	SAVINGS,
	CHECKING,
	INVESTMENT,
};

int main()
{
	AccountType test = AccountType::CHECKING;
	
	return 0; 
} 
