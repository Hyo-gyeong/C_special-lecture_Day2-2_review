//#include <stdio.h>
//int main(void)
//{
//	int input, sum = 0;
//	int i = 1;
//
//	printf("1���� ������ ���ؾ� 100�� ���ų� �ּ������� �ʰ��ϴ� ���� ���� �� ������??\n");
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

//�ٽ� ����
#include<stdio.h>
int main(void)
{
	int sum = 0;
	int start = 1;

	while(sum <= 100) { // while�ȿ� �ִ� ���ǹ��� ���϶����� �����Ѵ�.
		sum += start;
		start++;
	}
	printf("The end number is %d\n", start);
	printf("The sum is %d", sum);
}