/*
FileName : T6_36.cpp
Author   : Futao
E-mail   : 693086605@qq.com
Date     : Apr 11th,2022
College  : School of Computer Science and Information Engineering
Function : Just foe the homework

*/
#include<bits/stdc++.h>

using namespace std;

int const N = 1e5 + 100;

int power(int base,int exponent){
	int a=base;
	if(exponent!=1)
	{
		for(int j=1;j<exponent;j++)
		base=a*base;
	}
return base;
}
int main(){
int base,exponent;
cin>>base;
cin >> exponent;
cout<< power(base,exponent);
cout << endl;


return 0;
}

