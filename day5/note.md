###C프로그래밍 Day 5
#####포인터 변수
- 메모리의 주소(시작 위치)값을 저장하기 위한 변수
- 주소로부터 포인터 형의 크기 만큼 참조한다 
	그렇기 때문에 포인터 변수의 포인터 형과 포인터 변수가 가리키는 변수의 자료 형이 같아야 한다. 
- 포인터를 이용하면 메모리 직접 접근이 가능
- 64비트 시스템에서는 64개의 비트 주소를 표현하기 위해 8바이트, 32는 4바이트
- 관련 연산자
	- `*` 연산자 : 포인터가 가리키는 메모리 공간에 접근할 때 사용하는 연산자
	- `&` 연산자 : 주소값을 반환하는 &연산자

선언
```
//포인터 형, 포인터 변수 이름
int num = 8;
int * ptr1; // int 타입 주소의 변수를 가리킨다
int* ptr2; // *(포인터) 연산자는 형에 붙여도 되고
int *ptr3; // 변수 이름에 붙여도 된다
int * ptr4 = &num; // 초기화
int * ptr5 = NULL; // NULL로 초기화
int * ptr5 = 0; // NULL로 초기화
```
