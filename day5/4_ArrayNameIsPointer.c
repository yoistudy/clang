/*
 * =====================================================================================
 *
 *    Description:  포인터를 배열의 이름처럼 사용할 수도 있다
 *
 *       Compiler:  gcc
 *
 *         Author:  Jaeyun Choe 
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void) {
	int arr[2] = {10, 20};
	int * ptr = &arr[0]; // int * ptr = arr 와 동일
	

	printf("ptr[0] : %d, arr[0] : %d \n", ptr[0], arr[0]);
	printf("ptr[1] : %d, arr[1] : %d \n", ptr[1], arr[1]);
 	printf("*ptr : %d, *arr : %d \n", *ptr, *arr);	
	return 0;
}
