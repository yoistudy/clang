/*
 * =====================================================================================
 *
 *       Filename:  PrintfOutput.c
 *
 *    Description:  printf 함수도 리턴값이 있다
 *
 *        Version:  1.0
 *        Created:  2016년 02월 20일 14시 28분 32초
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
	int num1, num2;
	num1 = printf("12345\n");
	num2 = printf("I Love My Home\n");
	printf("%d %d\n", num1, num2);
	
	return 0;
}
