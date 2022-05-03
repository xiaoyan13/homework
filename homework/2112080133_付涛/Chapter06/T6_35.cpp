/*
**Filename: 	T6_35.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	modify T6_34.cpp
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
    int sum=0;
    while(1){
    srand(time(0));
    int r=rand()%1000+1;
    int n;
    cout<<"I have a number between 1 and 1000"<<endl;
    cout<<"Can you guess the number?"<<endl;
    cout<<"Please type your first guess"<<endl;
    cin>>n;
    while(n!=r){
    if(n<r)
    {
        sum+=1;
        cout<<"To low ,try again"<<endl;
        cin>>n;
    }
    if(n>r)
    { sum+=1;
        cout<<"To high ,try again"<<endl;
        cin>>n;
    }}
            char ch;
    if(n==r)
    {
        if(sum<10)
            cout<<"Ether you know the secret or you got lucky!"<<endl;
         if(sum==10)
            cout<<"Aha! you know the secret"<<endl;

         if(sum>10)
            cout<<"you should be able to do better"<<endl;

        cout<<"Would you like to play again(y or n)"<<endl;
        cin>>ch;
    }
    if(ch=='n')
    break;
	}
    return 0;
}
