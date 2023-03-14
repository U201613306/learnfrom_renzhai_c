#pragma once
#include <stdio.h>
int HelloC(int a, int b);


static int Hello_C(int a, int b);

inline void Swap(int *a,int *b)
{
	int Temp = *a;
	*a = *b;
	*b = Temp;
}
