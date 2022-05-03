/*
**Filename: 	T7_19.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<cstdio>
#include<string>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<queue>
#include<stack> 
#include<ctime>
#include<array>
#include<set>
#include<map>
#include<vector>
#include<queue>
#include <utility> 

using namespace std;

void outputArray1( const array<int,7> &array );
void inputArray1( array<int,7> &array );
void outputArray2( const array<int,10>&array );
void inputArray2( array<int,10> &array );

int main()
{
	array<int,7> integers1 = {0};
	array<int,10>integers2 = {0};
	cout<<"Size of array integers1 is "<<integers1.size()<<"\nArray after initialization: "<<endl;
	outputArray1(integers1);
	cout<<"\nSize of array integers2 is "<<integers1.size()<<"\nArray after initialization: "<<endl;
	outputArray2( integers2 );
	
	cout<<"\nEnter 17 integers:"<<endl;
	inputArray1(integers1);
	inputArray2(integers2);
	cout<<"\nAfter input,the array contain:\n"<<"integers1:"<<endl;
	outputArray1(integers1);
	cout<<"integers2:"<<endl;
	outputArray2(integers2);
	
	cout<<"\nintegers1[5] is "<<integers1[5];
	cout<<"\n\nAssigning 1000 to integers1[5]"<<endl;
	integers1[5] = 1000;
	cout<<"integers1:"<<endl;
	outputArray1(integers1 );
	

	{
		cout<<"\nAttempt to display integers1.at(15)"<<endl;
		cout<< integers1.at(15) <<endl;
	}
	
}


void outputArray1( const array<int,7> &array )
{
	for(auto item : array )
	cout<<item<<" ";
	cout<<endl;
}

void inputArray1( array<int,7> &array )
{
	for(auto &item : array )
	cin >> item;
}

void outputArray2( const array<int,10>&array )
{
	for(auto item : array )
	cout<<item<<" ";
	cout<<endl;
}

void inputArray2( array<int,10> &array )
{
	for(auto &item : array )
	cin>>item;
}
