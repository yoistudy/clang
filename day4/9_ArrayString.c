/*
 * =====================================================================================
 *
 *       Filename:  9_ArrayString.c
 *
 *    Description:  char형 배열 확인
 *
 *        Version:  1.0
 *        Created:  2016년 02월 20일 16시 08분 47초
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
	char str[] = "good morning!";
	printf("배열 str의 크기 %d \n", sizeof str);
	printf("null 문자 출력 %c \n", str[13]);
	printf("null 문자 정수형 출력 %d \n", str[13]);

	str[12] = '?';
	printf("문자열 출력 : %s \n", str);

	return 0;
}
