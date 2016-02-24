/*
 * =====================================================================================
 *
 *    Description:  포인터 배열
 *
 *       Compiler:  gcc
 *
 *         Author:  Jaeyun Choe 
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void)
{
	int num1 = 1, num2 = 2, num3 = 3;
	int * ptrArr[3] = {&num1, &num2, &num3};

	printf("*ptrArr[0] : %d \n", *ptrArr[0]);
	printf("*ptrArr[1] : %d \n", *ptrArr[1]);
	printf("*ptrArr[2] : %d \n", *ptrArr[2]);
	
	return 0;
}
