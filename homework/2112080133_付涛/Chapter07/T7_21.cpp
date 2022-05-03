/*
**Filename: 	T7_21.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<iostream>
#include<iomanip>
#include<array>
#include<stdexcept>

using namespace std;

int main()
{
	array<array<int,3>, 5> sales = {0};
	
	cout << "cin your saleInfos.\n";
	int tip;
	while(cin >> tip && tip != -1)
	{
		int number,daliy_sales;
		cin >> number >> daliy_sales;
		/*
		try
		{
				
		}catch(out_of_range & ex)
		{
			cout << "Please cin number in valid range" << endl;
			continue;
		}
		*/
		
		sales[tip][number] = daliy_sales;
	}
	
	cout << "Total Sattistics are following...\n";
	
	cout << "sale\t";
	for(int i = 1; i <= 4; i ++ ) cout << i << '\t';
	cout << endl; 
	
	for(int j = 1; j <= 2; j ++ )
	{
		cout << j << '\t';
		for(int i = 1; i <= 4; i ++ )
			cout << sales[i][j] << "\t";
		cout << endl;
	}
	
	return 0;
} 
