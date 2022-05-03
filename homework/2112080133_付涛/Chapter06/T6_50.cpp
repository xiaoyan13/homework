/*
**Filename: 	T6_50.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	Difference of passing by value and passing by reference 
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
#include<utility> 

using namespace std;
int tripleByValue(int count)
{
    return 3*count;
}
void tripleBuReference(int &count)
{
    count*=3;
    return;
}
int main()
{
    int count;
    cin >> count;
    cout << tripleByValue(count) << endl;
    cout << count << endl;
    tripleBuReference(count);
    cout << count << endl;
    
    return 0;
}
