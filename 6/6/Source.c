#include <stdio.h>

int Hello(int o)
{
	return o;
}
// 
#define Num(A,F,B,...) __VA_ARGS__(A F B) != 0 ?"true":"false"
#define Num1(Code,...) __VA_ARGS__(Code)
//(A ? B: C)

int main()
{
#if 0
	//�������
	// +
	// -
	// *
	// /
	// %
	// ++
	// --
	int i = 0;
	int j = 0;
	printf("%d \r\n", 1 + 2);
	printf("%d \r\n", 1 - 2);
	printf("%d \r\n", 1 * 2);
	printf("%f \r\n", 1.f / 2.f);
	printf("%d \r\n", ++i); //i = i + 1;
	printf("%d \r\n", --j); //j = j - 1;

	//10 % 3 = 1;
	printf("%d \r\n", 10 % 3);
	for (int newI = 0 ; newI < 10; newI++)
	{
		if ((newI % 2) == 0)
		{
			printf("ż�� %d \r\n", newI);
		}
		else
		{
			printf("���� %d \r\n", newI);
		}
	}
	//�� 60 �� 60 ʱ 24 

	//��ϵ�������
	//A B A = 0, B = 1;
	//== A==B
	//!= A != B
	//> 600
	//< 600
	//<= 600
	//>= 600

	int A = 0;
	int B = 1;
	printf("%s \r\n", Num(A, ==, B));
	printf("%s \r\n", Num(A, !=, B));
	printf("%s \r\n", Num(A, >,  B));
	printf("%s \r\n", Num(A, <,  B));
	printf("%s \r\n", Num(A, >=, 1));
	printf("%s \r\n", Num(B, >= , 1));
	printf("%s \r\n", Num(B, <= , 1));
	printf("%s \r\n", Num(A, <= , 1));

	// �߼������
	int A = 0;
	int B = 1;
	//&&  A && B //��
	//||  A || B //��
	//!	  !(A && B) //��
	//!A 
	printf("%s \r\n", Num(A, &&, B));
	printf("%s \r\n", Num(A, || , B));
	printf("%s \r\n", Num(A, &&, B, Hello));
	printf("%s \r\n", Num(A, &&, B, !));

	// & ��&Aȡ��ַ��  A & B
	{
		int A = 0;
		int B = 0;
		{
			A = 0;
			B = 0;
		}
		{
			A = 1;
			B = 0;
		}
		{
			A = 0;
			B = 1;
		}
		{
			A = 1;
			B = 1;
		}

		//������ͬʱΪ1���Ϊ1
		//0000 
		//1111

		//������֤
		//0010 2
		//0100 4
		//1000 8
		//1111 
		int C = 15;
		C & 0xf;//0xf = 1111
		//1111
		//1110
		//1110
		//1111
		//1111
		printf("%d \r\n", Num1(A & B));
	}

	// A|B
	{
		int A = 0;
		int B = 0;
		{
			A = 0;
			B = 0;
		}
		{
			A = 1;
			B = 0;
		}
		{
			A = 0;
			B = 1;
		}
		{
			A = 1;
			B = 1;
		}
		// 15 1111 0xf
		// 0101 10
		A = 10; // 0101

		// 1111
		// ����һ��Ϊ1 ���Ϊ 1
		printf("%d \r\n", Num1(((A | 0xf) == 0xf)));
	}

	// A ^ B
	{
		int A = 0;
		int B = 0;
		{
			A = 0;
			B = 0;
		}
		{
			A = 1;
			B = 0;
		}
		{
			A = 0;
			B = 1;
		}
		{
			A = 1;
			B = 1;
		}

		//ͬ�� Ϊ 0 ��Ϊ 1
		printf("%d \r\n", Num1(A ^ B));
	}
	// A = 10
// ~ ~A
// A= -11

//http://renzhai.net/
//1 ����λ��������ż
//2 ��100��Χ�ڵ����Ƿ����2����������
//3 �ֻ���֤ <1> ��ȡ״̬��<2> ɾ��״̬ <3> ����״̬
//4 �������ת������

//<<
//>>
//0 0000
	int A = 3;//0011 ////0000
	//0001 1
	//0010 2
	//0100 4
	//1000 8
	// y = A * n * 2 //�ƶ�����
	// A << n
	//n  = 1 
	//n  = 2 
	//n  = 3 
	//A = A << 1;
	//A = A >> 1;
	//
	//A = A * 4;
	//A = A << 2;

	//A = A / 2;
	A = A >> 1; //����ȡ�� 3/2  = 1;
	printf("%d \r\n", Num1(A));

	//��ֵ�����
	int A = 0;
	int B = 1;
	int C = 10;
	B = A;

	printf("%d \r\n", B);

	B += C;//B = B + C;
	printf("%d \r\n", B);

	B -= 4;//B = B - 4;
	printf("%d \r\n", B);

	B *= 4;//B = B * 4;
	printf("%d \r\n", B);

	B /= 4;//B = B / 4;
	printf("%d \r\n", B);

	B %= 4;//B = B % 4;
	printf("%d \r\n", B);

	B <<= 1;//B = B << 1;
	printf("%d \r\n", B);

	B >>= 1;//B = B >> 1;
	printf("%d \r\n", B);

	B &= 0x3;//B = B & 0x3; 0010 & 0011 = 0010
	printf("%d \r\n", B);

	B |= 0x3;//B = B | 0x3; 0010 | 0011 = 0011
	printf("%d \r\n", B);

	B ^= 0x3;//B = B ^ 0x3; 0011 ^ 0011 = 0000
	printf("%d \r\n", B);

	//sizeof
	printf("%d \r\n", sizeof(float));

	//& 
	//*
	int P = 44; //�������ǵı�����ʱ����Զ������ڴ�
	int *ptr = &P;
#endif
	//��׺
	//() [] -> . ++ -- 
	//int i = 0;
	//i++;//i += 1;
	//i++;//i -= 1;
	//
	//struct FHello
	//{
	//	int a;
	//};

	//FHello mHello;
	//mHello.a = 10;
	//FHello *p = &mHello;
	//p->a = 10;
	//FHello mHellos[100];
	//int A = 10 + 2 - (5 + 4);
	//const int C = 100;
	//auto PP = [&](int A,int B)->bool
	//{
	//	return A > B ? C :0;
	//};
	//bool C = PP(1, 2);

	//һԪ
	//+ - ! ~ ++ -- (type) * & sizeof
	//int C = 10;
	//char c = (char)C;//C���
	//char *p = &c;
	//char o = *p;//char o = c;

	//�˳� 
	//* / % 
	//6 * 7

	//�Ӽ� 
	//+ - 


	//λ��
	//<< >> 


	//��ϵ
	//< <= > >= 


	//���
	//== != 

	//λ
	//& ^ |

	//�߼�
	//&& ||

	//����
	//�� A > B ? A:B

	// ��ֵ
	//= += -= *= /= %= >>= <<= &= ^= |= 
//	int A += (1 + 2 / 4 * 4);

	//,
	//int a, b, c, d;
	//a = 0;
	//printf("%d \r\n", b);


	system("pause");
	return 0;
}

void F()
{

}