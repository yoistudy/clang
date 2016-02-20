/*
 * =====================================================================================
 *
 *       Filename:  1_BitOperation.c
 *
 *    Description:  비트 연산자
 *
 *        Version:  1.0
 *        Created:  2016년 02월 19일 13시 20분 30초
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
	int num1 = 15;                // 00000000 00000000 00000000 00001111
	int num2 = 20;                // 00000000 00000000 00000000 00010100

	int and_result = num1 & num2; // 00000000 00000000 00000000 00000100 : 4
	int or_result  = num1 | num2; // 00000000 00000000 00000000 00011111 : 31
	int xor_result = num1 ^ num2; // 00000000 00000000 00000000 00011011 : 27
	int not_result = ~num1;       // 11111111 11111111 11111111 11110000 : -16 
  int lshift_result = num1 << 1;// 00000000 00000000 00000000 00011110 : 30
  int rshift_result = num1 >> 1;// 00000000 00000000 00000000 00000111 : 7

	printf("& 연산 결과 : %d\n", and_result);
	printf("| 연산 결과 : %d\n", or_result);
	printf("^ 연산 결과 : %d\n", xor_result);
	printf("~ 연산 결과 : %d\n", not_result);
	printf("<< 연산 결과 : %d\n", lshift_result);
	printf(">> 연산 결과 : %d\n", rshift_result);
	return 0;
}
