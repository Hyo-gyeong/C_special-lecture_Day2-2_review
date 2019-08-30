//#include <stdio.h>
//void drawGraph (int score);
//int main(void)
//{
//	int score;
//
//	printf("점수를 입력하세요.: ");
//	scanf("%d", &score);
//
//	drawGraph( score );//던져주는 값만 적어서 함수 부르기
//
//	return 0;
//}
//
//void drawGraph (int score)
//{
//	int i;
//	int count = score / 10;
//
//	printf("%d를 10으로 나눈 만큼의 별: ", score);
//
//	for (i = 0; i < count; i++) 
//		printf("* ");
//	printf("\n");
//
//	return;
//}

// 복습

#include<stdio.h>
void Stars(int score); // 함수 선언

int main(void)
{
	int score;

	printf("점수를 입력하세요 : ");
	scanf("%d", &score);

	Stars(score);

}
void Stars(int score)
{
	int i;

	printf("점수만큼 별을 줄께요>>>\n\n");

	for (i = 1; i <= score; i++) {
		printf(" *");
		if (i % 10 == 0){
			printf("\n");
		}
	}
	printf("\n");
	return;
}