#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h> 
#include <direct.h>
#include <stdlib.h>
#include <tchar.h>

int main()
{
	//char Buf[1024];
	//printf("请写入路径：");
	//scanf("%s", Buf);
	//_mkdir(Buf);

	//char Buf[1024];
	//printf("请写入路径：\r\n");
	//scanf("%s", Buf);
	//int re = _rmdir(Buf);
	////stderr
	//printf("%d", re);

//	char Buf[_MAX_PATH];
//	//printf("请写入路径：\r\n");
//	//scanf("%s", Buf);
//	//1 A 2 B 3 C 4 D 5E
////	int re = _getdcwd(4,Buf, _MAX_PATH);
//	int re = _getcwd( Buf, _MAX_PATH);
//	//stderr
//	printf("%s \r\n", Buf);
	
	//char Buf[_MAX_PATH];
	//int re = _getcwd(Buf, _MAX_PATH);
	//printf("%s \r\n", Buf);
	//if (_chdir("F:/C++/C++/16/Debug") == 0)
	//{
	//	_getcwd(Buf, _MAX_PATH);
	//	printf("%s \r\n", Buf);
	//}
	
	//struct _diskfree_t free_t = {0};
	//if (_getdiskfree(3, &free_t) == 0)
	//{
	//	long long tb = (long long)free_t.total_clusters * (long long)free_t.sectors_per_cluster * (long long)free_t.bytes_per_sector;
	//	long long availb = (long long)free_t.bytes_per_sector * (long long)free_t.sectors_per_cluster * (long long)free_t.avail_clusters;
	//	printf("可用集群总数 : %d \r\n", free_t.avail_clusters);
	//	printf("集群总数 : %d \r\n", free_t.total_clusters);
	//	printf("单个集群对应的扇区数  : %d \r\n", free_t.sectors_per_cluster);
	//	printf("每扇区的字节数 : %d \r\n", free_t.bytes_per_sector);
	//	printf("总字节数 : %lld \r\n", tb);
	//	printf("可用字节数 : %lld \r\n", availb);
	//}

	//printf("%d \r\n",_getdrive());
	
	//0000 0000 | 0000 0000 | 0000 0000 | 0000 0001  //32
	//0001
	//0000 0000 | 0000 0010 | 0111 1100 | 0111 1100  //162940
	//                   RQ   PONL MKGI   HGFE DCBA
	//unsigned long DrivesMask = _getdrives();
	//TCHAR DriveMsg[] = _T("A:\n"); //65
	//if (DrivesMask == 0)
	//{
	//	printf("出错 %s",GetLastError());
	//}
	//else
	//{
	//	while (DrivesMask)
	//	{
	//		if (DrivesMask & 1)
	//		{
	//			printf(DriveMsg);
	//		}

	//		++DriveMsg[0];
	//		DrivesMask >>= 1;// /2
	//	}
	//}

	//int D = _getdrive();
	////A 1 B 2 'A' = 65 ASCII
	//printf("%c : \r\n", D + 'A' - 1);

	//for (int i = 1 ;i <= 26 ; i++)
	//{
	//	if (!_chdrive(i))
	//	{
	//		printf("%c :  \r\n", _getdrive() + 'A' - 1);
	//	}
	//	else
	//	{
	//		printf("出错 %d \r\n",i);
	//	}
	//}

	//_chdrive(D);
	//

	////0 
	////2 
	////4
	////6
	//int ret = _access("F:/C++/C++/16/16/Source.c",6);// \\ /
	//if (ret == 0)
	//{
	//	printf("成功 \n");
	//}

	//if (ret == -1)
	//{
	//	printf("失败 \n");
	//}

	int ret = rename("F:/C++/C++/16/16/ooooo.txt", "F:/C++/C++/16/16/www.ini");
	system("pause");
	return 0;
}
