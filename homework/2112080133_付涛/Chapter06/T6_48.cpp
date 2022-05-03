/*
FileName : T6_48.cpp
Author   : Futao
E-mail   : 693086605@qq.com
Date     : Apr 11th,2022
College  : School of Computer Science and Information Engineering
Function : Just foe the homework

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num1,num2;
    srand(time(nullptr));
    rand();
    num1 = rand() % 6 + 1;
    num2 = rand() % 6 + 1;
    printf("玩家1的点数：%d\n",num1);
    printf("玩家2的点数：%d\n",num2);

    if(num1 == num2)
    {
        printf("平");
    }
    else if(num1 > num2)
    {
        printf("玩家1赢");
    }
    else if(num1 < num2)
    {
        printf("玩家2赢");
    }
    return 0;
}
