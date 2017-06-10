#include <stdio.h>

int main(void)
{
	int x, y;		// キーボードからの値を入れる変数
	
	printf("xのy乗を計算します。\n");
	
	printf("xを入力：");
	scanf("%d", &x);
	
	printf("yを入力：");
	scanf("%d", &y);
	
	int i;	// カウンタ変数
	int answer = 1;	// 計算結果を入れる変数
	for (i = 0; i < y; i++) {	// yの回数だけxをかける
		answer *= x;
	}
	
	printf("%dの%d乗は%dです。\n", x, y, answer);
	
	return 0;
}