#include <stdio.h>

#define OOO 1
#undef OOO

void main()
{
//#ifdef OOO
//	printf("0");
//#else
//	printf("-1");
//#endif // OOO
//
//#ifndef OOO
//	printf("0");
//#else
//	printf("-1");
//#endif // OOO
//
//#if OOO
//
//#else
//
//#endif
//
//#error Hello World sa dasd ad asd sad asd sa sad  ds
//#pragma once

	
#pragma region hong
    printf("%s \n", __DATE__);
	printf("%s \n", __TIME__);

#pragma region regionName
	printf("%s \n", __FILE__);
	printf("%d \n", __LINE__);
#pragma endregion regionName

#pragma endregion hong

//	printf("%d \n", __STDC__);//__STDC__
	system("pause");
}