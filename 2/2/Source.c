#include "stdio.h"
typedef unsigned char uint8;
void main()
{
	//while (0)
	//{
	//	printf("hello \n");
	//}
	unsigned int eee = 100;
	unsigned long long wdf = 100;//0 ~ 9223372036854775808 *2
	signed int UU = 100; //-2147483648~2147483647								4
	long long WW = 100;//-9223372036854775808 ~ 9223372036854775808		8
	long II = 100;//32 -2147483648~2147483647							4
	unsigned long ee = 100;//32 0 ~2147483647 * 2 => :0~4294967295		4
	short qwe = 00; //-32,768 ~ 32,767
	unsigned short wwww = 100;//0 ~ 32,767 * 2

	char c = 'd';//-128 到 127 
	unsigned char R = 'd';//0~255
	unsigned char G = 'd';//0~255
	unsigned char B = 'd';//0~255
	unsigned char A = 'd';//0~255
	unsigned char wwww1 = 'k';
	unsigned char wwww2 = 0;
	unsigned char wwww3 = 255;
	wchar_t ccc = 'd';

	//浮点类型
	int oo = 1;
	float wert = 1.000001f;//1.2E-38 ~ 3.4E+38  //6 位小数
	double k1 = 1.0;//2.3E-308 ~ 1.7E+308 //15 位小数

	printf("%i \n", sizeof(long double));
	system("pause");
}