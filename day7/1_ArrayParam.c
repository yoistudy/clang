/*
 * =====================================================================================
 *
 *    Description:  배열의 주소를 인자로 전달받는 함수
 *
 *       Compiler:  gcc
 *
 *         Author:  Jaeyun Choe 
 *
 * =====================================================================================
 */

#include <stdio.h>

void ShowArrayAllElements(int * param, int size) {
	int i;
	for(i = 0; i < size; i++) {
		printf("%d번째 요소 : %d \n", i, param[i]);
	}
}

int main(void) {
	int arr[4] = {1, 22, 333, 4444};
	ShowArrayAllElements(arr, sizeof(arr)/sizeof(int));

	return 0;
}
