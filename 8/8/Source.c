#include <stdio.h>

int Hello(int a, int b)
{
	return a + b;
}

typedef int(*HelloPtr)(int,int); //����һ������ָ��

#define Max_Value 3

void Hello_A(int *a)
{
	*a = 100;
}

int *CreateInt()
{
	int C = 100;
	return &C;
}

int *CreateInt_A()
{
	int *p = malloc(sizeof(int));
	*p = 100;
	return p;
}

void ResetValue(int p[3])
{
	p[1] = 100;
}

int *CreateInt_AB()
{
	int p[3] = { 1,2,3 };

	return &p;
}

void Random(unsigned long A[100])
{
	srand((unsigned)time(NULL));//��ʼ���������
	for (int i = 0 ;i < 100 ;i++)
	{
		A [i] = rand();
	}
}

void main()
{
	//int ArrayInt[3] = {1,2,3};//һά����
	//for (int i = 0; i < 3;i++)
	//{
	//	printf("%d \r\n", ArrayInt[i]);
	//}
	//ArrayInt[0];
	//ArrayInt[1];

	//  |    |     |    |    |
	//   | | | | | | | |
	//int *Hello;
	//int *Hello = NULL;
	//int *Hello1 = NULL;
	//int *Hello2 = NULL;
	//int *Hello3 = NULL;
	//int ArrayInt[3] = { 1,2,3 }; //4
	//Hello = &ArrayInt[0];
	//printf("%p \r\n", ArrayInt);
	//printf("%p \r\n", &ArrayInt[0]);
	//printf("%p \r\n", &Hello);

	//printf("%d \r\n", *Hello);
	//Hello += 0x1;
	//printf("%d \r\n", *Hello);
	//Hello += 0x1;
	//printf("%d \r\n", *Hello);
	//long long *p = NULL; //��ַ��ʮ�����ƴ洢
	//printf("%d \r\n",sizeof(p));

	//HelloPtr H = &Hello;
	//printf("%d \r\n", H(1, 2));

	//int(*p)(int ,int) = &Hello;
	//printf("%d \r\n", p(4, 2));

	//int A[Max_Value] = { 1,2,3 };
	//for (int i = 0;i  < Max_Value;i++)
	//{
	//	printf("%d \r\n", A[i]);
	//}

	//printf("////////////////////////////////////// \r\n");

	//ָ������
	/*int *Ptr[Max_Value] = { 1,2,3 };
	for (int i = 0; i < Max_Value; i++)
	{
		printf("%d \r\n", Ptr[i]);
	}*/

	//����ָ��
	//int *Ptr[Max_Value];
	//for (int i = 0; i < Max_Value; i++)
	//{
	//	Ptr[i] = &A[i];
	//}

	//for (int i = 0; i < Max_Value; i++)
	//{
	//	printf("%d \r\n", *Ptr[i]);
	//}

	////����ָ��
	//int(*p)[Max_Value];

	//p = &A;//*p p[0] *p[0] **p *p[1]
	//printf("*p = %p \r\n", *p);
	//printf("p[0] = %p \r\n", p[0]);
	//printf("*p[0] = %d \r\n", *p[0]);
	//printf("**p = %d \r\n", **p);
	//printf("*p[1] = %d \r\n", *p[1]);//��ά�����

	//Typ Inst [V][V].....[n]
	//int A[Max_Value][Max_Value] = { {1,2,3},{4,5,6},{7,8,9}};	//���ӻ�
	//int B[Max_Value][Max_Value] = { 1,2,3,4,5,6,7,8,9};			//�ڴ�������
	////typ Inst [y][x]
	////����2 
	////����3
	//
	//////////// 1  2  3  4
	//////////// 5  6  7  8
	//////////// 9  10 11 12
	//////////// A[1][1]
	////////////

	//for (int i = 0 ; i < Max_Value ; i++)
	//{
	//	for (int j = 0; j < Max_Value; j++)
	//	{
	//		printf("A[%d][%d] = %d \r\n",i,j,A[i][j]);
	//		printf("B[%d][%d] = %d \r\n", i, j, B[i][j]);
	//	}
	//}

	//int B[Max_Value][Max_Value] = { 1,2,3,4,5,6,7,8,9};
	//1.��ӡ��yֵ��xֵ //ͼ������׼��
	//2.ֻ֪�����������׵�ַ,�����ͣ�������ڷ�Χ�ڵ�������ʹ�ʽ i j (��ά) ��ַƫ�� //����ڴ���õİ���
	//3.����10x10������ȡ������6x6��������


	//int p = 10;
	//int *p_1 = &p;
	//int **p_2 = &p_1;
	//int ***p_3 = &p_2;

	//printf("p = %d \r\n",p);

	//printf("&p = %p \r\n", &p);
	//printf("p_1 = %p \r\n", p_1);
	//printf("p_2 = %p \r\n", *p_2);
	//printf("p_3 = %p \r\n", **p_3);

	//int C = 10000;
	//int *p = &C;
	//Hello_A(p); 
	//printf("%d \r\n", *p);

	//int *L =  CreateInt_A();
	//printf("%d \r\n", *CreateInt());
	//printf("%d \r\n", *L);
	//free(L);������

	int AA[3] = { 1,23,4 };
	ResetValue(AA);
	printf("%d \r\n", AA[1]);
	printf("%d \r\n", CreateInt_AB()[1]);
	int p = CreateInt_AB()[1];
	printf("%d \r\n",p);
	int *p_1 = &CreateInt_AB()[1];
	printf("%d \r\n", *p_1);

	//�����
	int AAA[100] = { 0 };
	Random(AAA);
	for (int i = 0; i < 100; i++)
	{
		printf("%d \r\n", AAA[i]);
	}

	system("pause");
}