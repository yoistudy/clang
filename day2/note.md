####C프로그래밍 Day 2
연산자에서 결합방향
- 우선순위가 동일한 두 연산자가 하나의 수식에 존재하는 경우 어떠한 순서대로 연산하느냐를 결정해 놓은 것


진수의 표현
```
int num1 = 10;  //기본 10진수
int num2 = 012; //0으로 시작하면 8진수
int num3 - 0x2  //0x로 시작하면 16진수
```

정수와 실수의 표현
정수
- C언어에서 보통 4바이트로 표현
- 정수의 가장 왼쪽비트를 부호비트(MSB)라고 하며 1이면 음, 0이면 양
- 양의 정수 비트 기준으로 음의 정수로 표현할때는 2의 보수를 취해야한다
	2의 보수란 1의 보수를 취하로고(각 비트별로 0은 1로, 1은 0으로 바꾼다) 1을 더하는 것다다..
    역순으로하면 양의 정수 비트를 알 수 있고 그 비트로 음의 정수값을 알 수 있다

실수
- 실수를 표현하는 방식에는 오차가 존재한다(부동소수점 오차)

비트 연산자
