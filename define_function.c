//#include <stdio.h>
//void drawGraph (int score);
//int main(void)
//{
//	int score;
//
//	printf("������ �Է��ϼ���.: ");
//	scanf("%d", &score);
//
//	drawGraph( score );//�����ִ� ���� ��� �Լ� �θ���
//
//	return 0;
//}
//
//void drawGraph (int score)
//{
//	int i;
//	int count = score / 10;
//
//	printf("%d�� 10���� ���� ��ŭ�� ��: ", score);
//
//	for (i = 0; i < count; i++) 
//		printf("* ");
//	printf("\n");
//
//	return;
//}

// ����

#include<stdio.h>
void Stars(int score); // �Լ� ����

int main(void)
{
	int score;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);

	Stars(score);

}
void Stars(int score)
{
	int i;

	printf("������ŭ ���� �ٲ���>>>\n\n");

	for (i = 1; i <= score; i++) {
		printf(" *");
		if (i % 10 == 0){
			printf("\n");
		}
	}
	printf("\n");
	return;
}