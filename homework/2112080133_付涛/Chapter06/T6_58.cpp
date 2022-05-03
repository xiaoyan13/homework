/*
**Filename: 	T6_58.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			4/17/2022
**Collage:		School of Computer Science and Engineering
**Function: 	computer assited instruction
*/

#include <iostream>
#include <bitset>
#include <sstream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;
int sum;
int cf()
{
    srand(time(0));
    int a=rand()%9+1;
    int b=rand()%9+1;
    sum=a*b;
    cout<<"How much is "<<a<<" times "<<b<<": ";
}
int main()
{
    while(1){
    cf();
    int n;
    cin>>n;
    while(n!=sum)
    {
        int q=rand()%4+1;
            switch(q){
case 1:
    cout<<"No.Please  try again!"<<endl; break;
case 2:
    cout<<"Wrong .Try once more."<<endl; break;
case 3:
    cout<<"Do not give up!"<<endl; break;
case 4:
    cout<<"No.Keep trying."<<endl; break;}
    cin>>n;
    }
    if(n==sum){
            int p=rand()%4+1;
    switch(p){
case 1:
    cout<<"Very good!"<<endl;
    break;
case 2:
    cout<<"Excellent!"<<endl; break;
case 3:
    cout<<"Nice work!"<<endl; break;
case 4:
    cout<<"Keep up the good work"<<endl; break;
    }}}
    return 0;
}
