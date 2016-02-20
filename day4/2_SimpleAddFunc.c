/*
 * =====================================================================================
 *
 *       Filename:  SimpleAddFunc.c
 *
 *    Description:  덧샘을하여 결과를 반환하는 함수
 *
 *        Version:  1.0
 *        Created:  2016년 02월 20일 14시 34분 20초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jaeyun Choe 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int Add(int num1, int num2)
{
	return num1 + num2;
}

int main(void)
{
	int result;
	result = Add(3, 4);
	printf("덧샘 결과1 : %d \n", result);
	result = Add(5, 8);
	printf("덧샘 결과2 : %d \n", result);

	return 0;
}
