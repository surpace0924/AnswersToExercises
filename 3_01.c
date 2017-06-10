#include <stdio.h>
#include <math.h>	// sqrt関数を使用するためにMathライブラリをインクルードする

int main(void)
{
	// キーボードからの値を入れる変数たち
	int a, b, c;
	
	printf("2次方程式の計算します。\n");
	printf("ax^2 + bx + c = 0\n");
	
	printf("aを入力：");
	scanf("%d", &a);
	
	printf("bを入力：");
	scanf("%d", &b);
	
	printf("cを入力：");
	scanf("%d", &c);
	
	
	// まず判別式に代入して実数解か虚数解かを判断する。
	int D = b * b - 4 * a * c;
	
	// 判別式の値によって、処理を分ける
	if (D > 0) {
		// D > 0であれば異なる2つの実数解をもつため、解の公式を使用して2つの値を計算する。
		double x1 = (-1 * b + sqrt(b * b - 4 *a * c)) / (2 * a);
		double x2 = (-1 * b - sqrt(b * b - 4 *a * c)) / (2 * a);
		printf("この2次方程式の解は%lfと%lfです。\n", x1, x2);
	} else if (D < 0) {
		// D > 0であれば異なる2つの虚数解をもつため、警告を表示する。
		printf("この2次方程式は虚数解をもつため計算できません。\n");
	} else {
		// D = 0であれば実数の2重解を持つため解の公式を使用して1つの値を計算する。
		double x = (-1 * b + sqrt(b * b - 4 *a * c)) / (2 * a);
		printf("この2次方程式の解は%lfです。\n", x);
	}
	
	return 0;
}