
#include "Header.h"
int CCC = 100;
static int AAA = 100;

void Recursion(int a ) //�����ڴ�ռ� ���ǻ����ɶ���
{
	if (a > 0)
	{
		printf("%d \r\n", a);
		Recursion(--a);
	}
}

void Hello()
{
	//�ֲ�����
	int a = 0;
	int b = 0;
	{
		int c = 0;
		int D = 0;
		{
			int E = 0;
			int F = 0;

			c = 10;
		}
	}

	{
		int c = 0;
		int D = 0;
	}

	{
		int c = 0;
		int D = 0;
	}
}

//
//int Hello(int &a, int &b);
int main()
{
	/*if (0)
	{
		printf("true \r\n");
	}
	else
	{
		printf("false \r\n");
		if (0)
		{
			printf("true \r\n");
		}
		else
		{
			printf("false \r\n");
			if (0)
			{
				printf("true \r\n");
			}
			else
			{
				printf("false \r\n");
				if (0)
				{
					printf("true \r\n");
				}
				else
				{
					printf("false \r\n");
				}
			}
		}
	}

	int i = 2;
	switch (i)
	{
	case 0:
		printf("0 \r\n");
		break;
	case 2:
		printf("2 \r\n");
		switch (i)
		{
		case 0:
			printf("0 \r\n");
			break;
		case 2:
			printf("2 \r\n");
			switch (i)
			{
			case 0:
				printf("0 \r\n");
				break;
			case 2:
				printf("2 \r\n");
				break;
			case 4:
				printf("4 \r\n");
				break;
			case 5:
				printf("5 \r\n");
				break;
			case 6:
				printf("6 \r\n");
				break;
			default:
				printf("default \r\n");
				break;
			}
			break;
		case 4:
			printf("4 \r\n");
			break;
		case 5:
			printf("5 \r\n");
			break;
		case 6:
			printf("6 \r\n");
			break;
		default:
			printf("default \r\n");
			break;
		}
		break;
	case 4:
		printf("4 \r\n");
		break;
	case 5:
		printf("5 \r\n");
		break;
	case 6:
		printf("6 \r\n");
		break;
	default:
		printf("default \r\n");
		break;
	}
*/
	//(A ? B : C : D)

	//for(;;){}
	//for (int i = 0 ; ; i++)
	//{
	//	int *p = malloc(sizeof(int));
	//	printf("%d \r\n" , *p);
	//}

	//while (1)
	//{
	//	int *p = malloc(sizeof(int));
	//}
	//int b = 0;
	//do
	//{
	//	int b = 1 + 2;
	//} while (b < 4);


	//for (int i = 0;i < 1000000 ; i++)
	//{
	//	printf("%d \r\n", i);
	//	if (i > 100)
	//	{
	//		break;
	//	}
	//}

	//for (int i = 0; i < 100; i++)
	//{	
	//	if (i & 0x1)
	//	{
	//		continue;
	//	}

	//	printf("%d \r\n", i);
	//}

	//goto F;

	//return 0;


	//F:
	//printf("%d \r\n", 10);	
	
	//1.�� do while ������ƽ������
	//2.�� continue �������� 1000 ֮��Ĳ��ܱ�5����������
	//3.��1000���ڵ�������
	//4.ͨ��λ����ʵ�����ݽ���

	//printf("%d \r\n", HelloC(2, 2));

	//int a = 10;
	//int b = 20;
	//printf("a = %d b = %d \r\n",a,b);
	//Swap(&a, &b);
	//printf("a = %d b = %d \r\n", a, b);

//	Recursion(100);//ʵ��
	int A = 0;
	//%d %i
	// %s ��ӡ�ַ���
	//%c �ַ�
	char c = 'H';
	//%p ȡ��ַ
	//int *p = malloc(sizeof(int));//01084E60
	//printf("%p \r\n", p);
	//int cc = 100; //�����ڴ�
	//p = &cc;
	//%02d //00 01  02 03 12:08
	//%.2f //CD 10 9 8  1 0.9 0.8 0.7 0.0
	//%i  ����ʮ���ƣ��˽��ƣ�ʮ����������
	//%d ����ʮ����
	//%o �˽���
	//%x ʮ����������
	//%u �޷��ŵ�ʮ����
	//float cc = 1.18f;
	//printf("%u \r\n", 100u); 






	system("pause");
	//free(p);
	return 0;
}

//int Hello(int *a, int *b)
//{
//	return *a + *b;
//}
