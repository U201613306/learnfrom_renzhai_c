#include <stdio.h>
//���룺
//4278255360
//2147483648
int Hello_Fun(int A)
{
	return A;
}
struct FLocation
{
	float X;
	float Y;
	float Z;
};

struct FHello
{
	char Name[45];
	unsigned char Age[45];
	struct FLocation Pos[45];
	int(*Func)(int);
};

struct FHelloB
{
	char Name[45];
	unsigned char Age[45];
	struct FLocation Pos[45];
	int(*Func)(int);
};

struct
{
	int A;
	int B;
	char C;
	char Array[128];
} NewStruct = {1,2,'k',"Hello World~~"};

typedef struct
{
	int A;
	int B;
} FHolle_C;

struct FHello_CC
{
	char Content[128];
};

void PrintfCC(struct FHello_CC CC)
{
	printf("%s", CC.Content);
}

void main()
{
	struct FHello Hello,Helloc[20],*Helloc_p;
	Hello.Func = &Hello_Fun;
//	printf("%d", Hello.Func(1));

	NewStruct.A = 0;
	FHolle_C c = {1,2};
	FHolle_C co[2] = {{1,2},{2,4}};
	FHolle_C cop[2] = {1,2,3,4};

	struct FHello AA, BB;
	struct FHelloB CC;
	AA.Func = &Hello_Fun;
	BB = AA;
	//printf("%d", BB.Func(1));

	struct FHello_CC CCA;
	strcpy(CCA.Content, "Hello World");
//	PrintfCC(CCA);

	struct FA
	{
		char Content[128];
	};

	struct FB
	{
		struct FA *p;
		char *pc;
	};

	struct FA New_A;
	strcpy(New_A.Content, "Hello World");
	struct FB New_B;
	New_B.p = &New_A;

//	printf("%s", New_B.p);

	//0000 0000
	//00 01 10 11 100
	struct
	{
		//unsigned int p : 1; //0~255
		unsigned a : 1;
		unsigned   : 1; //���λ�ò���ʹ��
		unsigned b : 1;

	}Hello_CCCC;

//	printf("%d \r\n", sizeof(Hello_CCCC));

	struct
	{
		//unsigned char P; //1
		//unsigned char A; //1
		//unsigned char B; //1
		//unsigned char C; //1
		//unsigned char F; //1
		//unsigned int D;  //4
		//long long KK;  //8

		unsigned char A : 1;
		unsigned char B : 1;
		unsigned char C : 1;
		unsigned char D : 1;
		unsigned char E : 1;
		unsigned char F : 1;
		unsigned char G : 1;
		unsigned char I : 1;
		unsigned char GG : 1;
	}TestA;
	//��ͨ�ڴ��������
	// P A B C | F 0 0 0 | D D D D 
	// P A B C F 0 0 0 | D D D D 0 0 0 0 | K K K K K K K K |

	//λ��
	//0000 0000 0000 0000

	//printf("TestA = %d \r\n", sizeof(TestA));

	union 
	{
		unsigned char C;//1
		unsigned int D;//4
		double F;//8
	} MyUnion;
	//0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 //64λ
	//printf("TestA = %d \r\n", sizeof(MyUnion)); // 8���ֽ�
	//MyUnion.C = 'p';//Ӣ��ֻռһ���ֽ� ����ռ�����ֽ�
	//printf("C = %c,D = %d,F = %f \r\n", MyUnion.C, MyUnion.D, MyUnion.F);
	//MyUnion.D = 10;
	//printf("C = %c,D = %d,F = %f \r\n", MyUnion.C, MyUnion.D, MyUnion.F);
	//MyUnion.F = 3.1415926;
	//printf("C = %c,D = %d,F = %f \r\n", MyUnion.C, MyUnion.D, MyUnion.F);

	//������
	//�ڴ�ĵ�ַ �� �� �� ��
	//0x1
	//0000 0000 | 0000 0000 | 0000 0000 | 0000 0000 //int
	//0000 0000 | 0000 0000 | 0000 0000 | 0000 0001 // С��int
	//0000 0001 | 0000 0000 | 0000 0000 | 0000 0000 // ���int
	union
	{
		char string ;
		int Hello_int; //4�ֽ�
	} Hello_Union;

	//Hello_Union.Hello_int = 0x12345;

	//if (Hello_Union.string == 0x45)
	//{
	//	printf("С�� \r\n");
	//}
	//else if (Hello_Union.string == 0x1)
	//{
	//	printf("��� \r\n");
	//}


	system("pause");
}