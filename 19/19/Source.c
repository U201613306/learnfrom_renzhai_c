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
#include <io.h>

#define INDEX_NONE -1
typedef struct
{
	int index;
	char paths[30][36];
}defstring;

void find_files(char const *in_path, defstring *str)
{
	struct _finddata_t finddata;

	long hfile = 0;
	char tmp_path[128] = { 0 };
	strcpy(tmp_path,in_path);
	strcat(tmp_path,"\\*");
	if ((hfile = _findfirst(tmp_path, &finddata)) != INDEX_NONE)
	{
		do 
		{
			if (finddata.attrib & _A_SUBDIR)
			{
				if (strcmp(finddata.name,".") == 0 || 
					strcmp(finddata.name, "..") == 0)
				{
					continue;
				}

				char new_path[128] = { 0 };
				strcpy(new_path, in_path);
				strcat(new_path, "\\");
				strcat(new_path, finddata.name);

				find_files(new_path, str);
			}
			else
			{
				if (finddata.attrib & _A_NORMAL)
				{
					printf("_A_NORMAL \r\n");
				}
				else if (finddata.attrib & _A_RDONLY)
				{
					printf("_A_RDONLY \r\n");
				}
				else if (finddata.attrib & _A_HIDDEN)
				{
					printf("_A_HIDDEN \r\n");
				}
				else if (finddata.attrib & _A_SYSTEM)
				{
					printf("_A_SYSTEM \r\n");
				}
				else if (finddata.attrib & _A_ARCH)
				{
					printf("_A_ARCH \r\n");
				}
				
				strcpy(str->paths[str->index],in_path);
				strcat(str->paths[str->index], "\\");
				strcat(str->paths[str->index++], finddata.name);
			}

		} while (_findnext(hfile,&finddata) == 0);
		_findclose(hfile);
	}
}

void main()
{
	defstring str;
	str.index = 0;

	find_files("F:\\DLC", &str);

	for (int i = 0; i < str.index; i++)
	{
		printf("%s \r\n", str.paths[i]);
	}

	//char *p = "...\\pp\\";
	//_mkdir(p);

	system("pause");
}