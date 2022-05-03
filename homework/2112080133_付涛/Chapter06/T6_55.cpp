/*
FileName : T6_55.cpp
Author   : Futao
E-mail   : 693086605@qq.com
Date     : Apr 11th,2022
College  : School of Computer Science and Information Engineering
Function : Just foe the homework

*/
#include <cstdio>
#include <cstdlib>   
#include <ctime>       
#include <iostream>

using namespace std;

int main()
{
    char choice;
    int ret = 0;
    srand(time(nullptr));
    while(1)
    {
        /* 1.菜单打印 */
        printf("======================\n");
        printf("|     掷骰子游戏     |\n");
        printf("|  1:掷骰子  0:退出  |\n");
        printf("|     上轮点数:%d    |\n", ret);
        printf("======================\n");
        /* 2.操作选择 */
        scanf("%c", &choice);
        while(getchar() != '\n');
        ret = 0;
        switch(choice)
        {
            case '0':
            	printf("Goodbye!\n");
    			return 0;   //退出
            //掷骰子(产生1 ~ 6 随机数)
            case '1':
             	ret = rand() % 6 + 1;
                break;
            default: printf("无效!\n");
        }
    }
    return 0;
}


