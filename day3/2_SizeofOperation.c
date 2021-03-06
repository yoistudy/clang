/*
 * =====================================================================================
 *
 *       Filename:  2_sizeofOperation.c
 *
 *    Description:  sizeof 연산자
 *
 *        Version:  1.0
 *        Created:  2016년 02월 19일 14시 12분 05초
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
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	
	printf("변수 ch의 크기 : %d\n", sizeof(ch));
	printf("변수 inum의 크기 : %d\n", sizeof(inum));
	printf("변수 dnum의 크기 : %d\n", sizeof(dnum));
	
	printf("char의 크기 : %d\n", sizeof(char));
	printf("int의 크기 : %d\n", sizeof(int));
	printf("long의 크기 : %d\n", sizeof(long));
	printf("long long의 크기 : %d\n", sizeof(long long));
	printf("float의 크기 : %d\n", sizeof(float));
	printf("double의 크기 : %d\n", sizeof(double));
	
	return 0;
}
