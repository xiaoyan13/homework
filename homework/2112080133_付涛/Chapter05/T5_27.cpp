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
如果出现了continue，你往往只需要把continue的条件反向，就可以消除continue。
如果出现了break，你往往可以把break的条件，合并到循环头部的终止条件里，从而去掉break。
有时候你可以把break替换成return，从而去掉break。
如果以上都失败了，你也许可以把循环里面复杂的部分提取出来，做成函数调用，之后continue或者break就可以去掉了。
注：详细请参见某网站：csdn:https://blog.csdn.net/fjian123/article/details/80408539 
*/
