#include <stdio.h>

int *GetInt()
{
	static int o = 0;//�洢�ھ�̬�� ����ջ��
	return &o;
}

int main()
{
	auto int a0 = 0;
	int a1 = 0;

	register int a2 = 0; //�Ĵ���
//	int *p = &a2;//& ȡ�ڴ�ĵ�ַ

	printf("%d \r\n", *GetInt());
	*GetInt() = *GetInt() +  1;
	printf("%d \r\n", *GetInt());

	system("pause");
	return 0;
}