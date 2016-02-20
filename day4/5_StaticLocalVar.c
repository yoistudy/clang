/*
 * =====================================================================================
 *
 *       Filename:  StaticLocalVar.c
 *
 *    Description:  지역변수에 static 선언
 *
 *        Version:  1.0
 *        Created:  2016년 02월 20일 15시 05분 37초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jaeyun Choe 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

void SimpleFunc(void)
{
	static int num1 = 0; // 초기화하지 않으면 0 초기화;
	int num2=0;
	num1++, num2++;
	printf("static: %d, local: %d \n", num1, num2);
}

int main(void)
{
	int i;
	for(i=0; i<3; i++)
	{
		SimpleFunc();
	}
	return 0;
}
