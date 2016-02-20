/*
 * =====================================================================================
 *
 *       Filename:  VarDeclAndInit.c
 *
 *    Description:  변수를 선언하고 초기화
 *
 *        Version:  1.0
 *        Created:  2016년 02월 17일 20시 59분 42초
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
	int num3=30, num4=40;


	//printf("num1: %d, num2:%d\n", num1, num2); //will occur compilation error
	num1=10; num2=20;
	printf("num1: %d, num2:%d\n", num1, num2);
	printf("num3: %d, num4:%d\n", num3, num4);

	return 0;
} 
