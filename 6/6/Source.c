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
	//运算符号
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
			printf("偶数 %d \r\n", newI);
		}
		else
		{
			printf("基数 %d \r\n", newI);
		}
	}
	//秒 60 分 60 时 24 

	//关系运算符号
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

	// 逻辑运算符
	int A = 0;
	int B = 1;
	//&&  A && B //且
	//||  A || B //或
	//!	  !(A && B) //非
	//!A 
	printf("%s \r\n", Num(A, &&, B));
	printf("%s \r\n", Num(A, || , B));
	printf("%s \r\n", Num(A, &&, B, Hello));
	printf("%s \r\n", Num(A, &&, B, !));

	// & （&A取地址）  A & B
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

		//当条件同时为1结果为1
		//0000 
		//1111

		//密码验证
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
		// 其中一个为1 结果为 1
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

		//同则 为 0 异为 1
		printf("%d \r\n", Num1(A ^ B));
	}
	// A = 10
// ~ ~A
// A= -11

//http://renzhai.net/
//1 利用位运算求奇偶
//2 求100范围内的数是否存在2的整数次幂
//3 手机验证 <1> 获取状态，<2> 删除状态 <3> 增加状态
//4 求二进制转换问题

//<<
//>>
//0 0000
	int A = 3;//0011 ////0000
	//0001 1
	//0010 2
	//0100 4
	//1000 8
	// y = A * n * 2 //移动规则
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
	A = A >> 1; //向下取整 3/2  = 1;
	printf("%d \r\n", Num1(A));

	//赋值运算符
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
	int P = 44; //定义我们的变量的时候会自动分配内存
	int *ptr = &P;
#endif
	//后缀
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

	//一元
	//+ - ! ~ ++ -- (type) * & sizeof
	//int C = 10;
	//char c = (char)C;//C风格
	//char *p = &c;
	//char o = *p;//char o = c;

	//乘除 
	//* / % 
	//6 * 7

	//加减 
	//+ - 


	//位移
	//<< >> 


	//关系
	//< <= > >= 


	//相等
	//== != 

	//位
	//& ^ |

	//逻辑
	//&& ||

	//条件
	//？ A > B ? A:B

	// 赋值
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