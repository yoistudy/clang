/*
 * =====================================================================================
 *
 *       Filename:  7_ArrayAccess.c
 *
 *    Description:  1차원 배열을 선언하고 접근
 *
 *        Version:  1.0
 *        Created:  2016년 02월 20일 15시 45분 08초
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
	int arr[5];
	//int arr[5] = {10, 20, 30, 40, 50}; // 선언과 동시에 초기화 방법1
	//int arr[] = {10, 20, 30, 40, 50};  //선언과 동시에 초기화 방법2
	int sum =0, i;

	arr[0]=10, arr[1]=20, arr[2]=30, arr[3]=40, arr[4]=50;

	for(i=0; i<5; i++)
	{
		sum += arr[i];
	}

	printf("배열 요소에 저장된 값의 합 %d \n", sum);
	
	return 0;
}
