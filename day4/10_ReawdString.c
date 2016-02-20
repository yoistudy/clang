/*
 * =====================================================================================
 *
 *       Filename:  10_ReawdString.c
 *
 *    Description:  scanf함수를 이용한 문자열 입력
 *
 *        Version:  1.0
 *        Created:  2016년 02월 20일 16시 17분 06초
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
	char str[50];
	int idx=0;

	printf("문자열 입력: ");
	scanf("%s", str); // 문자열을 입력받아서 배열 str에 저장, str앞에 &을 붙이지 않는다!

	printf("문자 단위 출력");
	while(str[idx]!='\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");

	return 0;
}
