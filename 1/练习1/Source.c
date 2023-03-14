#include <stdio.h>

int Hello(int i,int j)
{
	return i + j;
}

//char argc, char *argv[]
int main(char argc, char *argv[])
{
	//for (int i = 0; i < argc; i++)
	//{
	//	char *ddd = argv[i];
	//	printf("%s \n", ddd);
	//}
	//int a[] = { 1,2,3,4,5,6,7 };
	//int cd = a[2];
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);
	

	int c = Hello(i, j);
	printf("´ð°¸ÊÇ %i \n", c);
	system("pause");

	return 0;
}

