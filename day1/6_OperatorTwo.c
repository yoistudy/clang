/*
 * =====================================================================================
 *
 *       Filename:  OperatorTwo.c
 *
 *    Description:  증가감소 연산자
 *
 *        Version:  1.0
 *        Created:  2016년 02월 17일 21시 31분 21초
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
	int num1=12;
	int num2=12;

	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++); //후위증가: 선 연산(대입), 후 증가
	printf("num1: %d \n\n", num1);

	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2); //전위증가: 선 증가, 후 연산(대입)
	printf("num2: %d \n", num2);

	return 0;
}
