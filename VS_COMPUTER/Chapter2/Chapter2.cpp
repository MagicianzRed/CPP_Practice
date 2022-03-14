#include <stdio.h>


// 这样一个字节总之很引用一个字节序列，其中每一个字节都被认为是一个非负整数
typedef unsigned char* byte_pointer; 

// size_t，表示数据结构大小的首选数据类型

/* 打印出每一个以十六进制表示的字节。*/
void show_bytes(byte_pointer start, size_t len)
{
	size_t i;
	for (i = 0; i < len; i++)
	{
		printf(" %.2x", start[i]); // 整数必须至少要用两个数字的十六进制格式输出
	}
	printf("\n");
}

void show_int(int x)
{
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x)
{
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void* x)
{
	show_bytes((byte_pointer) &x, sizeof(void*));
}

void test_show_bytes(int val)
{
	int ival = val;
	float fval = (float)ival;
	int* pval = &ival;
	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}
int main()
{
	/*补码的机器*/
	//short x = 12345;
	//short mx = -x;
	//show_bytes((byte_pointer)&x, sizeof(short));
	//show_bytes((byte_pointer)&mx, sizeof(short));
	//test_show_bytes(12345);

	short int v = -12345;
	unsigned short uv = (unsigned short)v;
	printf("v = %d, uv = %u\n", v, uv);/*只是改变了这些位的解释方式*/
	return 0;
}
