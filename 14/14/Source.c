#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	int x;
	int y;
}FTest;

void main()
{
	//char name[128];
	//strcpy(name, "Tom");

	///*void* **/	
	//FTest *pName = (FTest*) calloc(10,sizeof(FTest));//ÈÝÒ×ÄÚ´æÐ¹Â©
	//
	//pName = (FTest*) realloc(pName, 10 + 2 * sizeof(FTest));
	//pName[14].x = 10;
	//printf("%d \n\r",pName[14].x);//
	//free(pName);

//	char str[] = "IIIIIIIIIIIIII";
////	memset(str,'K',sizeof(str)-1);
//	memset(str, 0, strlen(str));
//	printf("%s \r\n", str);

	typedef unsigned char uint8;

	//F 
	//char src[20] = "ÄãºÃ~~~~";
	//char dest[20] = {0};
	/*int i = 0;
	while (i>=20)
	{
		dest[i] = src[i];
		i++;
	}*/
//	memcpy(dest, src, sizeof(src));
	//memcpy(dest, src, 2);
	//printf("%s \r\n", dest);

	system("pause");
}