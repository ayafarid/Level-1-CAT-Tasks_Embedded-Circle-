#include <stdio.h>
#include "STD_MATH.h"
int main()
{
	char byte=0b00001000;
	int bitNum=4;
	printf("%d\n",byte);
	SET_BIT(byte,bitNum);
	printf("%d\n",byte);
}