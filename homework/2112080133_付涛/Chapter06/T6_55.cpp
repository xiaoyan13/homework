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
        /* 1.�˵���ӡ */
        printf("======================\n");
        printf("|     ��������Ϸ     |\n");
        printf("|  1:������  0:�˳�  |\n");
        printf("|     ���ֵ���:%d    |\n", ret);
        printf("======================\n");
        /* 2.����ѡ�� */
        scanf("%c", &choice);
        while(getchar() != '\n');
        ret = 0;
        switch(choice)
        {
            case '0':
            	printf("Goodbye!\n");
    			return 0;   //�˳�
            //������(����1 ~ 6 �����)
            case '1':
             	ret = rand() % 6 + 1;
                break;
            default: printf("��Ч!\n");
        }
    }
    return 0;
}


