#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void)
{
	printf("Maximum value of doble:%g\n", DBL_MAX);
	printf("Minimum value of doble:%g\n\n", DBL_MIN);
	
	printf("Maximum value of int:%d\n", INT_MAX);
	printf("Minimum value of int:%d\n\n", INT_MIN);
	
	printf("Maximum value of float:%f\n", FLT_MAX);
	printf("Minimum value of float:%Le\n\n", FLT_MIN); //%Le:大き目の数値で使える（教科書表記なし）
	
	printf("Maximum value of long:%ld\n", LONG_MAX);
	printf("Minimum value of long:%ld\n\n", LONG_MIN);
	
	printf("Maximum value of short:%d\n", SHRT_MAX);
	printf("Minimum value of short:%d\n\n", SHRT_MIN); //short:short intのこと

    return 0;
}
