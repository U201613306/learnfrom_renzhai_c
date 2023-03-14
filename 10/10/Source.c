#include <stdio.h>

enum EName
{
	XIAOHONG0 = 0,
	XIAOMING1 ,
	MAX,
} A,B,C,D;

//int unsigned int
//typedef enum 
//{
//	XIAOHONG,
//	XIAOMING,
//	MAX,
//} EName1;

//#define XIAOHONG1 0
//#define XIAOHONG2 2
//#define XIAOHONG3 3
//#define XIAOHONG4 4
//#define XIAOHONG5 5

void main()
{
	enum EEE {X,Y,Z,W};
	enum { X1, Y2, Z3, W4 } Hello;
	enum EEE E = X;
	A = MAX;
	int P[] = { 0x1 ,0x2, 0x3 };
	//P[0]
	printf("A = %x \r\n", A);

	for (unsigned int i = 0 ; i < MAX;i++)
	{
		switch (i)
		{
		case XIAOHONG0:
			printf("XIAOHONG0 \r\n",i);
			break;
		case XIAOMING1:
			printf("XIAOMING1 \r\n", A);
			break;
		case MAX:
			printf("MAX \r\n", A);
			break;
		}
	}



	system("pause");
}