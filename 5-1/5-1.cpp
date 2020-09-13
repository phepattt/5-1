#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int score[100], num, a;
	printf("how many student :");
	scanf("%d", &num);
	for (a = 0; a < num; a++) {
		printf("Enter your score :");
		scanf("%d", &score[a]);
		if (score[a] >= 101) {
			printf("error\n");
		}
		if (score[a] <= 100 && score[a] >= 80) {
			printf("grade = G\n");
		}
		if (score[a] < 80 && score[a] >= 50) {
			printf("grade = P\n");
		}
		if (score[a] < 50 && score[a] >= 0) {
			printf("grade = F\n");
		}
		if (score[a] < 0) {
			printf("error\n");
		}
	}
	return 0;
}
