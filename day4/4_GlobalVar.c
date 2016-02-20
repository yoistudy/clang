/*
 * =====================================================================================
 *
 *       Filename:  GlobalVar.c
 *
 *    Description:  전역변수 기본 초기화와 사용
 *
 *        Version:  1.0
 *        Created:  2016년 02월 20일 14시 57분 55초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jaeyun Choe 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

void Add(int val);
int num; //전역변수는 기본 0으로 초기화됨

int main(void)
{
	printf("num: %d \n", num);
	Add(3);
	printf("num: %d \n", num);
	num++; //전역변수 num의 값 1증가
	printf("num: %d \n", num);

	return 0;
}

void Add(int val)
{
	num += val;
}
