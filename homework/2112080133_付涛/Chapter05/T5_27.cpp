/*
**Filename: 	T5_27.cpp
**Author:		Tao Fu
**E-mail: 		693086605@qq.com
**Date:			2022/4/2
**Collage:		School of Computer Science and Engineering
**Function: 	How to kill your continue and break in coding .
*/
#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	for(unsigned int i = 1; i <= 10; ++ i)
	{
		if(i != 5) cout << i << " ";
	} 
	
	cout << "\nUsed one skill to avoid continue in for .\n";
	return 0;
}

/*
���������continue��������ֻ��Ҫ��continue���������򣬾Ϳ�������continue��
���������break�����������԰�break���������ϲ���ѭ��ͷ������ֹ������Ӷ�ȥ��break��
��ʱ������԰�break�滻��return���Ӷ�ȥ��break��
������϶�ʧ���ˣ���Ҳ����԰�ѭ�����渴�ӵĲ�����ȡ���������ɺ������ã�֮��continue����break�Ϳ���ȥ���ˡ�
ע����ϸ��μ�ĳ��վ��csdn:https://blog.csdn.net/fjian123/article/details/80408539 
*/
