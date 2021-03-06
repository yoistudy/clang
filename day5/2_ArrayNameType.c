/*
 * =====================================================================================
 *
 *    Description:  배열과 그 요소의 참조 값 확인
 *
 *       Compiler:  gcc
 *
 *         Author:  Jaeyun Choe 
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void) {
	int arr[3] = {1, 2, 3};

	printf("배열의 참조 값        : %p \n", arr);
	printf("첫번째 요소의 참조 값 : %p \n", &arr[0]);
	printf("두번째 요소의 참조 값 : %p \n", &arr[1]);
	printf("세번째 요소의 참조 값 : %p \n", &arr[2]);

	return 0;
}
