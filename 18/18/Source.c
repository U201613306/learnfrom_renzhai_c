//Copyright (C) RenZhai.2019.All Rights Reserved.
//���� ��լ
//��c�����ϸԴ�뽲����AboutCG ���ְ�������Ӳ��c���ԡ���Ƶ�������棺
//https://www.aboutcg.org/courseDetails/902/introduce
//ϣ��ѧϰ�������漼�� ������UE4��Ϸ, ���Է���������ַ��
//https://zhuanlan.zhihu.com/p/60117613
//
//bibi���Կ���������լϵ�н̳̽��ܣ�
//https://space.bilibili.com/29544409
//
//���˲�����վ
//http://renzhai.net
//
//���ڱ��װ�������ϸ���� :
//���ְ汾(��ϸ)��
//https://zhuanlan.zhihu.com/p/144558934
//��Ƶ�汾��
//https://www.bilibili.com/video/BV1x5411s7s3
//core minimal
#include <stdio.h>
#include "simple_c_array.h"

void main()
{
	simple_c_string array_c;
	init_string(&array_c);
	{
		add_string("asdasdkas;ofkaslf", &array_c);
		add_string("asdasf asdf a", &array_c);
		add_string("asdasf", &array_c);
		add_string("asasdgadfasdf", &array_c);
		add_string("asasdgadfasdf111", &array_c);
		add_string("asasdgadfasdf2222222", &array_c);
	}
	printf_string(&array_c);

	destroy_string(&array_c);


	simple_c_int int_array;
	init_simple_c_int(&int_array);
	{
		add_simple_c_int(5, &int_array);
		add_simple_c_int(1, &int_array);
		add_simple_c_int(3, &int_array);
		add_simple_c_int(6, &int_array);
		add_simple_c_int(7, &int_array);
	}
	for (int i = 0; i < int_array.size; i++)
	{
		printf("%d \r\n",int_array.data[i]);
	}

	destroy_simple_c_int(&int_array);

	system("pause");
}