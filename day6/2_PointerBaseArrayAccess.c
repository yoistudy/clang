/*
 * =====================================================================================
 *
 *    Description:  arr[i] == *(arr+i)
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
	int arr[3]={11, 22, 33};
	int * ptr = arr; // 배열 이름 arr을 가리킴

	printf("%d %d %d \n", arr[0], arr[1], arr[2]);
	printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));
	printf("%d ", *ptr);
	ptr++; // ptr이 가리키는 주소값이 4증가
	printf("%d ", *ptr);
	ptr++; // ptr이 가리키는 주소값이 4증가
	printf("%d ", *ptr);

	return 0;
}
