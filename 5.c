#include <stdio.h>

int main() {
    // 実数を扱うために double 型を使用
    double base, height, area;

    printf("--- 三角形の面積計算プログラム ---\n");

    // 底辺の入力を受け取る
    printf("底辺の長さを入力してください: ");
    scanf("%lf", &base);

    // 高さの入力を受け取る
    printf("高さを入力してください: ");
    scanf("%lf", &height);

    // 面積の計算 (底辺 * 高さ / 2)
    area = (base * height) / 2.0;

    // 結果の表示 (%.2f で小数第2位まで表示)
    printf("--------------------------------\n");
    printf("底辺: %.2f\n", base);
    printf("高さ: %.2f\n", height);
    printf("面積: %.2f\n", area);

    return 0;
}