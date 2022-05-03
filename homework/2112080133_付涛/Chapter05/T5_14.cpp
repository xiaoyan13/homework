/*
**Filename: 	T5_14.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/4/2
**Collage:		School of Computer Science and Engineering
**Function: 	To calculate the total saled items' value.
*/
#include<iostream>

using namespace std;

int main()
{
	int number,sum;
	cout << "please choose your choice and number:";
	cin >> number >> sum;
	
	double each_value;
	double total_value;
	
	switch (number) {
		case 1:
			each_value = 2.98;
			total_value = each_value*sum;
			break;
		case 2:
			each_value = 4.50;
			total_value = each_value*sum;
			break;
		case 3:
			each_value = 9.98;
			total_value = each_value*sum;
			break;
		case 4:
			each_value = 4.49;
			total_value = each_value*sum;
			break;
		case 5:
			each_value = 6.87;
			total_value = each_value*sum;
			break;
		default:
			break;
	}
	cout << "you should pay totally:";
	cout << total_value << endl;
	
	return 0;
}
