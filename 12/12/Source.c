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
	//printf("������һ���ַ� ��\r\n");
	//V = getchar();
	//printf("��������ַ��� ��\r\n");
	//putchar(V);
	//printf("\r\n");

	/*char V[128];
	printf("�������ַ��� ��\r\n");
	fgets(V,128,stdin);

	printf("������ַ��� ��\r\n");
	fputs(V,stdout);

	printf("\r\n");*/

	//char V[128];
	//int Hello = 0;
	//printf("�������ַ��� ��\r\n");
	//scanf("%s %d" ,V,&Hello);

	//printf("������ַ��� ��\r\n %s %d", V, Hello);

	//printf("\r\n"); 

	//д��
	//FILE *fp = fopen("F:/C++/C++/12/hello.fbx","w+");
	//fprintf(fp, "PPPPp \n");

	//��ȡ
	//FILE *fp = fopen("F:/C++/C++/12/hello.fbx", "a");
	//char buff[256];
	//fgets(buff, 255, fp);
	//printf("%s", buff);
	

	//д��
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

	//1 .��־ϵͳcmd
	//  a.����һ���ļ�
	//  b.ɾ��һ���ļ�
	//  c.�ƶ�һ���ļ�
	//  d.����һ���ļ�
	//  e.·��ֱ�������ļ�
	//	�����ļ���
	//  �ַ�����ƴ��

	//FILE *fp = fopen("F:/C++/C++/12/hello.fbx", "rb");
	//if (!fp)
	//{
	//	int ErrorCode = errno;
	//	fprintf(stderr, "��������ǣ� %d\n", ErrorCode);

	//	fprintf(stderr, "������Ϣ��%s\n", strerror(ErrorCode));

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