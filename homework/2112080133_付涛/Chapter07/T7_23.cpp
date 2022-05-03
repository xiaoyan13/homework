/*
**Filename: 	T7_23.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:		4/17/2022
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


const int size=8;

void init(int road[size][size])
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			road[i][j]=0;
		}
	}
}
void printarr(int road[size][size])
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			printf("%d  ",road[i][j]);
		}
		cout<<endl;
	}
	cout<<endl;
}

bool validMove(int row,int col,int road[size][size])
{
	return row>=0&&row<size&&col>=0&&col<=size&&road[row][col]==0;
}
int main()
{
	for(int counter = 1;counter<=1000;counter++)
	{
		int road[size][size]; // 用这个数组来记录骑士所巡游的路径
	init(road); 
	bool done= false;
	bool goodMove;
	
	int horizontal[8]={-2,1,-1,-2,-2,-1,1,2};
	int vertical[8]={-1,-2,-1,-1,1,2,2,1};
	int movetype; // 选择巡游的方式 
	int moveNumber=1;  
	
	int currentRow,currentCol;
	int testRow,testCol;
	srand((int)time(NULL));
	currentRow=rand()%8;
	currentCol=rand()%8; // 控制范围在0-7;
	
	while(!done) // 开始巡游直到全部空格都走完 
	{
		movetype=0; // 试探法 
		testRow = currentRow + vertical[movetype];
		testCol = currentCol + horizontal[movetype];
		goodMove = validMove(testRow,testCol,road);
		
		if(goodMove)
		{
			currentCol=testCol;
			currentRow=testRow;
			road[currentRow][currentCol]= moveNumber++;
		}
		else
		{
			for(int count=0;count<size-1&&!goodMove;count++)
			{
				movetype = ++movetype%size;
				testRow = currentRow + vertical[movetype];
				testCol = currentCol + horizontal[movetype];
				goodMove = validMove(testRow,testCol,road);
				
				if(goodMove)
				{
					currentCol=testCol;
					currentRow=testRow;
					road[currentRow][currentCol]= moveNumber++;
				}
			}
			if(!goodMove) // 所有的走法都不存在 
				done=true;
		} 
	}
	printarr(road);
	}
	return 0;
}
