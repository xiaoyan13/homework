/*
FileName : T6_26.cpp
Author   : Futao
E-mail   : 693086605@qq.com
Date     : Apr 11th,2022
College  : School of Computer Science and Information Engineering
Function : Just foe the homework

*/
#include<iostream>
using namespace std;

int celsius(double fah)
{
	double tem;
	tem=(fah-32)/1.8;
	return tem;
}
int fahrenheit(double tem)
{
	double fah=32+tem*1.8;
	return fah;
}
int main()
{
	for(double tem=0;tem<=100;tem++)
	    cout<<fahrenheit(tem)<<"  ";
	    cout<<endl;
	for(double fah=32;fah<=212;fah++)
	    cout<<celsius(fah)<<"  ";

	return 0;
}
