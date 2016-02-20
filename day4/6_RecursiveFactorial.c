/*
 * =====================================================================================
 *
 *       Filename:  RecursiveFactorial.c
 *
 *    Description:  팩토리얼을 재귀함수로 구현
 *
 *        Version:  1.0
 *        Created:  2016년 02월 20일 15시 20분 16초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jaeyun Choe 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int Factorial(n)
{
	if(n==0)
		return 1;
	else
		return n * Factorial(n-1);
}

int main(void)
{
	printf("1! = %d \n", Factorial(1));
	printf("2! = %d \n", Factorial(2));
	printf("3! = %d \n", Factorial(3));
	printf("4! = %d \n", Factorial(4));
	printf("9! = %d \n", Factorial(9));
	
	return 0;
}

