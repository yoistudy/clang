/*
 * =====================================================================================
 *
 *    Description:  문자열을 저장하는 배열 
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
	char * ptrArr[2] = {"John", "Jane"}; // 문자열은 메모리 공간에 저장된 후 그 주소값이 반환됨
	
	printf("ptrArr[0] : %s \n", ptrArr[0]);
	printf("ptrArr[1] : %s \n", ptrArr[1]);

	return 0;
}
