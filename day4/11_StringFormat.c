/*
 * =====================================================================================
 *
 *       Filename:  11_StringFormat.c
 *
 *    Description:  문자열 서식문자인 %s의 출력범위 확인
 *
 *       Compiler:  gcc
 *
 *         Author:  Jaeyun Choe 
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void)
{
	char str[50]="I am 6 feet tall";
	int strLen;

	strLen=printf("%s", str);
	printf("\n문자열의 길이 %d \n\n", strLen);

	str[10]='\0'; // null 문자 삽입
	strLen=printf("%s", str);
	printf("\n11번째 요소에 null문자, 출력 문자열의 길이 %d \n\n", strLen);
	
	str[5]=0; // null 문자 삽입
	strLen=printf("%s", str);
	printf("\n6번째 요소에 null문자, 출력 문자열의 길이 %d \n\n", strLen);
	
	return 0;
}
