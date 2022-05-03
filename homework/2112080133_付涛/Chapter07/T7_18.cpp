/*
**Filename: 	T7_18.cpp
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

//掷双骰子函数
unsigned int rollDice()
{
	unsigned int die1 = 1 + rand() % 6;
	unsigned int die2 = 1 + rand() % 6;
	cout << "Player rolled " << die1 << " + " << die2 << " = " << die1 + die2 << endl;
	return die1 + die2;
}
//游戏部分函数
int game()
{
	srand(static_cast<unsigned int>(time(0)));
	enum Status { CONTINUE, WON, LOST };
	unsigned int myPoint = 0;
	Status gameStatus = CONTINUE;
	unsigned int sumOfDice = rollDice();
	switch (sumOfDice)
	{
	case 7:
	case 11:
		gameStatus = WON;
		break;
	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;
	default:
		gameStatus = CONTINUE;
		myPoint = sumOfDice;
		cout << "Point is " << myPoint << endl;
	}
	while (CONTINUE == gameStatus)
	{
		sumOfDice = rollDice();
		if (sumOfDice == myPoint) { gameStatus = WON; }
		else if (7 == sumOfDice) { gameStatus = LOST; }
	}
	if (WON == gameStatus) { cout << "Player wins" << endl; }
	else { cout << "Player loses" << endl; }
	if (WON == gameStatus)return 1;
	return 0;
}
int main()
{
	int i = 1000,j = 0;
	while(i--)
	{
		if(game())
		{
			j++;
		}
	}
	cout << "赢场： " << j << endl;
	cout << "输场： " << 1000 - j << endl;
	return 0;
}
