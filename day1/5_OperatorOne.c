/*
 * =====================================================================================
 *
 *       Filename:  OperatorOne.c
 *
 *    Description:  대입연산자와 산술연산자
 *
 *        Version:  1.0
 *        Created:  2016년 02월 17일 21시 21분 55초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jaeyun Choe 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void)
{
	int num1=2, num2=4;
	printf("%d + %d = %d\n", num1, num2, num1+num2);
	printf("%d * %d = %d\n", num1, num2, num1*num2);
	
	num1 *= 6;
	num2 /= 3;

	printf("num1 *=6 (num1:%d)\n", num1);
	printf("num2 /=3 (num2:%d)\n", num2);
	
	return 0;
}
