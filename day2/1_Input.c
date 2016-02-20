/*
 * =====================================================================================
 *
 *       Filename:  1_Input.c
 *
 *    Description:  키보드로부터 정수입력을 위한 scanf함수 호출
 *
 *        Version:  1.0
 *        Created:  2016년 02월 18일 15시 34분 01초
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
	int result;
	int num1, num2;

	printf("정수 one ");
	scanf("%d", &num1);


	printf("정수 two ");
	scanf("%d", &num2);

	result = num1+num2;
	printf("%d + %d = %d\n", num1, num2, result);

	return 0;
}

