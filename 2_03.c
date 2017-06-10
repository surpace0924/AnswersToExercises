#include <stdio.h>

int main(void)
{
	double radius;		// キーボードからの値を入れる変数
	
	printf("円の面積を計算します。\n");
	
	printf("半径を入力：");
	scanf("%lf", &radius);
	
	// 面積を計算
	double surfaceArea = 3.14 * radius * radius;
	
	printf("半径%lfの面積は%lfです。\n", radius, surfaceArea);
	
	return 0;
}