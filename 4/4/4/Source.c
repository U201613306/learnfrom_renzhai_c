#include <stdio.h>

//����
#define num(a,b) a+b 

#define num1(FunName,a,b) \
int FunName##_Hello(int a,int b) \
{\
	return a + b;\
}

#define num2(FunName,a) \
struct CCC_##FunName \
{ \
protected: \
int a; \
};

#define num3(FunName,astring) \
class CCC_##FunName \
{ \
public: \
CCC_##FunName() \
	:a(#astring)\
{}\
protected: \
char a; \
};

#define num4(FunName,a) \
template<class T> \
struct CCC_##FunName \
{ \
num3(FunName,dddd) \
protected: \
T a; \
};

num1(III, l, m);

//class FA
//{
//
//};

typedef unsigned char int8;
//typedef FA HelloC;

typedef int ______;
typedef double ______1____;
typedef float ______1__2__;
#define DDDD ______

int main()
{
	DDDD u = 0;
	______1____ o = 0;

#if 0
	//����
//////////////////////////////////////////////////////////////////////////
	int A = 647; //��������Ǵ�ͳ��ʮ����
	int B = 0647;//��ʾ�˽���
	int C = 0x647;//��ʾʮ������

	//U L
	//U unsigned
	unsigned int TestA = 100u; //��ǿת����
	int TestB = 100;
	long int TestC = 100L;

	unsigned long int TestC = 100;
	unsigned long int TestC = 100uL;
	unsigned long int TestC = (unsigned long int)100;

	//����
//////////////////////////////////////////////////////////////////////////
	float TestD = 3.14f;
	float TestG = .14f;
	float TestF = (float)3.14;
	double TestE = 3.14;

	//E e
	double NewPI = .314159E1;//.31415926 x 10 ^ 1
	double NewPI1 = 314159E-5L;//314159 / 10 ^ 5

	//�ַ�
	char ooo = 'I';
	char PP[] = "Hello World!!!";
//	char *P = PP;
	char III = 12;
	unsigned char YYY = 254;//0~255

	char PPP[] = "int Q = \
		1 + \
		2;"; //"int Q = 1 + 2;";
#endif
	//'e';"sfdsfsdf s"
	printf("%s","\\");
	printf("%s", "\;");
	printf("%s", "\,");
	printf("%s", "\?");
	printf("%s", "�������� \a");
	printf("%s", "�˸�� CC\b");
	printf("%s", "��ҳ�� \f");
	printf("%s", "���з� \n");
	printf("%s", "�س� \r");//\n\r
	printf("%s", "ˮƽ�Ʊ�� \t");//tab
	printf("%s", "��ֱ�Ʊ�� \v");
	printf("%o", "�˽��� \045 \r\n");
	printf("%x", "ʮ������ \x45 \r\n");

	int a = num(1, 2);
	int c = num(1, 2);
	int d = num(1, 2);
	//printf("\r\n %d", a);
	int e = III_Hello(1, 2);
	printf("\r\n %d", e);

	const int W = 0;
	const int W1 = 0;
	const int W2 = 0;
	const int W3 = 0;

	system("pause");
	return 0;
}