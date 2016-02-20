/*
 * =====================================================================================
 *
 *       Filename:  2_FloatErr.c
 *
 *    Description: 부동소수점 오차 테스트 
 *
 *        Version:  1.0
 *        Created:  2016년 02월 18일 16시 34분 05초
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
	int i;
	float num=0.0;

	for(i=0; i<100; i++){
		num += 0.1;
	}
	printf("0.1을 100번 더한 결과 : %f \n", num);
	return 0;
}
