/*
**Filename: 	T6_34.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	gass number game
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

int main()
{
    while(true)
	{
    srand(time(nullptr));
    
    int r=rand()%1000+1;
    int n;
    cout<<"I have a number between 1 and 1000"<<endl;
    cout<<"Can you guess the number?"<<endl;
    cout<<"Please type your first guess"<<endl;
    
    cin>>n;
    while(n!=r)
	{
	    if(n<r)
	    {
	        cout<<"To low ,try again"<<endl;
	        cin>>n;
	    }
	    if(n>r)
	    {
	        cout<<"To high ,try again"<<endl;
	        cin>>n;
	    }}
	            char ch;
	    if(n==r)
	    {
	        cout<<"Excellent!You guessed the number!"<<endl;
	        cout<<"Would you like to play again(y or n)"<<endl;
	        cin>>ch;
	    }
        if(ch=='n') break;
	}
    return 0;
}
