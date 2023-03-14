#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <stdbool.h>

bool copy_file(const char *src,const char *dest)
{
	char buf[512] = { 0 };
	int file_size = 0;
	FILE *f_src = NULL;
	FILE *f_dest = NULL;

	if ((f_src = fopen(src,"rb")) != NULL)
	{
		if ((f_dest = fopen(dest, "wb")) != NULL)
		{
			while ((file_size = fread(buf,sizeof(char),sizeof(buf),f_src)) > 0)
			{
				fwrite(buf, file_size,sizeof(char),f_dest);
				memset(buf, 0, sizeof(buf));
			}

			fclose(f_dest);
			fclose(f_src);

			return true;
		}
	}

	return false;
}

void main()
{
	//char V;
	//printf("请输入一个字符 ：\r\n");
	//V = getchar();
	//printf("您输出的字符是 ：\r\n");
	//putchar(V);
	//printf("\r\n");

	/*char V[128];
	printf("请输入字符串 ：\r\n");
	fgets(V,128,stdin);

	printf("您输出字符串 ：\r\n");
	fputs(V,stdout);

	printf("\r\n");*/

	//char V[128];
	//int Hello = 0;
	//printf("请输入字符串 ：\r\n");
	//scanf("%s %d" ,V,&Hello);

	//printf("您输出字符串 ：\r\n %s %d", V, Hello);

	//printf("\r\n"); 

	//写入
	//FILE *fp = fopen("F:/C++/C++/12/hello.fbx","w+");
	//fprintf(fp, "PPPPp \n");

	//读取
	//FILE *fp = fopen("F:/C++/C++/12/hello.fbx", "a");
	//char buff[256];
	//fgets(buff, 255, fp);
	//printf("%s", buff);
	

	//写入
	//FILE *fp = fopen("F:/C++/C++/12/hello.fbx", "a");
	//fprintf(fp, "Hello \n");

	//w
	//r
	//a
	//w+
	//a+
	//r+
	//rb
	//wb
	//ab
	//rb+
	//wb+
	//ab+
	//r+b
	//w+b
	//a+b

	//FILE *fp = fopen("F:/C++/C++/12/hello.fbx", "r+");
	//fprintf(fp, "Hello\n");//He$
	//fseek(fp,2, SEEK_SET);
	//if (fputc(65, fp) == EOF)
	//{
	//	return -1;
	//}

//	FILE *fp = fopen("F:/C++/C++/12/hello.fbx", "r+");
//	int Hello = fgetc(fp);
//	char buf[128];
////	fprintf(fp, "asdasdas");
//	fscanf(fp, "%s", buf);
//	printf("%s \r\n", buf);
//	
//
//	//64 A
//	fclose(fp);
//	system("pause");

	//1 .日志系统cmd
	//  a.生成一个文件
	//  b.删除一个文件
	//  c.移动一个文件
	//  d.拷贝一个文件
	//  e.路径直接生成文件
	//	生成文件树
	//  字符串的拼接

	//FILE *fp = fopen("F:/C++/C++/12/hello.fbx", "rb");
	//if (!fp)
	//{
	//	int ErrorCode = errno;
	//	fprintf(stderr, "错误代码是： %d\n", ErrorCode);

	//	fprintf(stderr, "错误信息：%s\n", strerror(ErrorCode));

	//	system("pause");
	//	exit(EXIT_FAILURE); 
	//}

	////64 A
	//fclose(fp);


	//copy_file("F:\\c\\c\\12\\12\\asdasdasd.txt", "F:\\c\\c\\12\\12\\asdasdasd1111.txt");
	remove("F:\\c\\c\\12\\12\\asdasdasd1111.txt");
	system("pause");
	exit(EXIT_SUCCESS);
}	