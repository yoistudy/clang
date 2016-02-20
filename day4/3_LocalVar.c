/*
 * =====================================================================================
 *
 *       Filename:  LocalVar.c
 *
 *    Description:  지역변수 범위
 *
 *        Version:  1.0
 *        Created:  2016년 02월 20일 14시 48분 29초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jaeyun Choe 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int SimpleFunc1(void)
{
	int num = 10; //이후부터 SimpleFunc1의 num이 유효
	num ++;
	printf("SimpleFunc1 num: %d\n", num);
	return 0;
}

int SimpleFunc2(void)
{
	int num = 20; //이후부터 SimpleFunc2의 num이 유효
	num ++;
	printf("SimpleFunc2 num: %d\n", num);
	return 0;
}

int main(void)
{
	int num = 17; //이후부터 main의 num이 유효
	SimpleFunc1();
	SimpleFunc2();
	printf("main num : %d\n", num);

	return 0;
}
