#include <stdio.h>

int main() {
    double a, b, c;
    double total_players, not_participating;

    printf("--- チーム編成計算システム ---\n");

    // 各データの入力（実数として入力）
    printf("クラスの人数 (a) を入力してください: ");
    scanf("%lf", &a);
    printf("野球のチーム数 (b) を入力してください: ");
    scanf("%lf", &b);
    printf("バレーのチーム数 (c) を入力してください: ");
    scanf("%lf", &c);

    // スポーツに参加する合計人数の計算
    // 野球は9人、バレーは6人
    total_players = (9.0 * b) + (6.0 * c);

    // 参加できない人数の計算
    not_participating = a - total_players;

    // 結果の表示
    printf("------------------------------\n");
    printf("参加できない人数は %.1f 人です。\n", not_participating);

    return 0;
}