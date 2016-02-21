/*
 * =====================================================================================
 *
 *       Filename:  PointerOne.c
 *
 *    Description:  포인터 변수의 참조 
 *
 *       Compiler:  gcc
 *
 *         Author:  Jaeyun Choe 
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void) {
	int num1 = 100, num2 = 100;
	int * pnum;

	pnum = &num1; // num1의 주소값을 가리킴(참조)
	(*pnum) += 30; // num1 += 30;과 같음
  
	pnum = &num2; // num2의 주소값을 가리킴(참조)
	(*pnum) += 50; // num2 += 50;과 같음

	printf("num1 : %d, num2 : %d \n", num1, num2);
	
	return 0;
}

