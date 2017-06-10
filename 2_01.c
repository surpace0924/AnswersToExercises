#include <stdio.h>

int main(void)
{
	int num;
	int answer;
	
	printf("整数を入力：");
	scanf("%d", &num);
	
	answer = num * num;
	
	printf("%dの2乗は%dです。\n", num, answer);
	
	return 0;
}