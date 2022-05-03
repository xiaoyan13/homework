/*
**Filename: 	T7_34.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	
*/

#include<bits/stdc++.h>

using namespace std;

char mapp[12][12];
inline void setDoor(int x = 3,int y = 5)
{
	mapp[x][0] = mapp[11][y] = '.';
}
int main()
{
	srand(time(nullptr));
	
	for(int i = 0; i < 12; i ++ ) 
		for(int j = 0; j < 12; j ++ )
		{
			int c = rand() % 2;
			if(c) mapp[i][j] = '#';
			else mapp[i][j] = '.';
		}
	
	setDoor();
	
	for(int i = 0; i < 12; i ++ )
	{
		for(int j = 0; j < 12; j ++ ) 
		 	cout << mapp[i][j] << " ";
		cout << endl;
	}
		 	
	
	return 0;
}

/*
# # . # . # # . . . # #
# # . # . . . . . . . .
. # . # # # # . # . # .
. . . . # # . # # # # #
. . . . # # # # # . . .
# # . . . . . . . . . .
. # # # # # . . # # # #
# # # # . . . . # # . #
. . . # . . # . # # . #
. # . # # . # . . # # #
# # # # # . . # . . # #
. . # . . . . # . . # #
*/
