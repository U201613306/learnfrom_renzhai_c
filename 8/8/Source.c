#include <stdio.h>

int Hello(int a, int b)
{
	return a + b;
}

typedef int(*HelloPtr)(int,int); //声明一个函数指针

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
	srand((unsigned)time(NULL));//初始化随机种子
	for (int i = 0 ;i < 100 ;i++)
	{
		A [i] = rand();
	}
}

void main()
{
	//int ArrayInt[3] = {1,2,3};//一维数组
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
	//long long *p = NULL; //地址以十六进制存储
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

	//指针数组
	/*int *Ptr[Max_Value] = { 1,2,3 };
	for (int i = 0; i < Max_Value; i++)
	{
		printf("%d \r\n", Ptr[i]);
	}*/

	//数组指针
	//int *Ptr[Max_Value];
	//for (int i = 0; i < Max_Value; i++)
	//{
	//	Ptr[i] = &A[i];
	//}

	//for (int i = 0; i < Max_Value; i++)
	//{
	//	printf("%d \r\n", *Ptr[i]);
	//}

	////数组指针
	//int(*p)[Max_Value];

	//p = &A;//*p p[0] *p[0] **p *p[1]
	//printf("*p = %p \r\n", *p);
	//printf("p[0] = %p \r\n", p[0]);
	//printf("*p[0] = %d \r\n", *p[0]);
	//printf("**p = %d \r\n", **p);
	//printf("*p[1] = %d \r\n", *p[1]);//多维数组的

	//Typ Inst [V][V].....[n]
	//int A[Max_Value][Max_Value] = { {1,2,3},{4,5,6},{7,8,9}};	//可视化
	//int B[Max_Value][Max_Value] = { 1,2,3,4,5,6,7,8,9};			//内存连续性
	////typ Inst [y][x]
	////矩阵2 
	////矩阵3
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
	//1.打印出y值和x值 //图像处理做准备
	//2.只知道这个数组的首地址,和类型，求给定在范围内的任意访问公式 i j (二维) 地址偏移 //理解内存最好的案例
	//3.给定10x10矩阵，提取矩阵中6x6矩阵到数组


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
	//free(L);、、、

	int AA[3] = { 1,23,4 };
	ResetValue(AA);
	printf("%d \r\n", AA[1]);
	printf("%d \r\n", CreateInt_AB()[1]);
	int p = CreateInt_AB()[1];
	printf("%d \r\n",p);
	int *p_1 = &CreateInt_AB()[1];
	printf("%d \r\n", *p_1);

	//随机数
	int AAA[100] = { 0 };
	Random(AAA);
	for (int i = 0; i < 100; i++)
	{
		printf("%d \r\n", AAA[i]);
	}

	system("pause");
}