#include <stdio.h>

int *GetInt()
{
	static int o = 0;//存储在静态区 不是栈区
	return &o;
}

int main()
{
	auto int a0 = 0;
	int a1 = 0;

	register int a2 = 0; //寄存器
//	int *p = &a2;//& 取内存的地址

	printf("%d \r\n", *GetInt());
	*GetInt() = *GetInt() +  1;
	printf("%d \r\n", *GetInt());

	system("pause");
	return 0;
}