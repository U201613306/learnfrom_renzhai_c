#pragma once
#include "Core/simple_array_c_macro.h"

typedef struct
{
	char data[256];
}str_node;

SIMPLE_ARRAY_C_STRUCT(simple_c_string,str_node)

 void init_string(simple_c_string *array_c);//初始化 分配内存

 void destroy_string(simple_c_string *array_c);

 void add_string(char const *  in_data,simple_c_string *array_c);

 void printf_string(simple_c_string *array_c);