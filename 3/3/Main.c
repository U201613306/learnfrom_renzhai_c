#include <stdio.h>
int ooo = 444;
const char kk[] = "hello";
extern int aaa;
int GetInt(int rrr)
{
	return rrr;
}
//extern int a;
int main()
{
	//aaa = 0;
	aaa = 666;
	//a = 100;

	//x + y = k;
	int A = 4;
	int C = A;//��ֵ�����Ǳ���Ҳ�����ǳ���
	//��ֵһ���Ǳ���
	for (int i = 0; i < 10 ; i++)
	{
		printf("dddd");
	}
	//10 = 30;
	int F = C;
	/////////////////////////////////////////////////
	{
		int c = GetInt(1); //���䵽 ջ

		int *aaaa = (int*)malloc(sizeof(int));
		free(aaaa);
	
		int *aaaa = (int*)malloc(sizeof(int));
		free(aaaa);

		static int i = 0; //DATA�κ�BSS��
	}



	return 0;
}
