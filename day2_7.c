//#include <stdio.h>
//int main(void)
//{
//	int input, sum = 0;
//	int i = 1;
//
//	printf("1부터 어디까지 더해야 100과 같거나 최소한으로 초과하는 수를 만들 수 있을까??\n");
//
//	while (sum >= 0) {
//		sum += i;
//		i++;
//
//		if (sum >= 100)
//			break;
//	}
//	printf("The number is %d\n", i);
//	printf("The sum is %d", sum);
//}

//다시 복습
#include<stdio.h>
int main(void)
{
	int sum = 0;
	int start = 1;

	while(sum <= 100) { // while안에 있는 조건문이 참일때까지 실행한다.
		sum += start;
		start++;
	}
	printf("The end number is %d\n", start);
	printf("The sum is %d", sum);
}