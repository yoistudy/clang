/*
 * =====================================================================================
 *
 *    Description:  포인터 변수의 증감연산
 *
 *       Compiler:  gcc
 *
 *         Author:  Jaeyun Choe 
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void) {
	int num1 = 1;
	double num2 = 1.0;
	int * ptr1 = &num1;
	double * ptr2 = &num2;

	printf("int형 ptr1    : %p \n", ptr1);
	printf("ptr1 1증가    : %p \n", ptr1+1);
	printf("ptr1 2증가    : %p \n", ptr1+2);
	printf("int의 크기 %d 단위로 증가\n\n", sizeof(int));

	printf("double형 ptr2 : %p \n", ptr2);
	printf("ptr2 1증가    : %p \n", ptr2+1);
	printf("ptr2 2증가    : %p \n", ptr2+2);
	printf("double의 크기 %d 단위로 증가\n", sizeof(double));
	return 0;
}
