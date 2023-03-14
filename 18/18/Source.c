//Copyright (C) RenZhai.2019.All Rights Reserved.
//作者 人宅
//该c库的详细源码讲解在AboutCG 《手把手入门硬核c语言》视频工程里面：
//https://www.aboutcg.org/courseDetails/902/introduce
//希望学习其他方面技术 比如做UE4游戏, 可以访问下列网址：
//https://zhuanlan.zhihu.com/p/60117613
//
//bibi可以看到各个人宅系列教程介绍：
//https://space.bilibili.com/29544409
//
//个人博客网站
//http://renzhai.net
//
//关于本套案例的详细操作 :
//文字版本(详细)：
//https://zhuanlan.zhihu.com/p/144558934
//视频版本：
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