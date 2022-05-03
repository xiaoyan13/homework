/*
**Filename: 	T6_57.cpp
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
    if(n==sum)
        cout<<"Very good!"<<endl;
    while(n!=sum)
    {cout<<"No.Please  try again!"<<endl;
    cin>>n;
    }}
    return 0;
}
