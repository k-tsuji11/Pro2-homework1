#include <stdio.h>

int main() {
    // 単価の定義
    int apple_price = 100;
    int orange_price = 88;
    int strawberry_price = 398;

    // 変数の宣言
    int apple_count, orange_count, strawberry_count;
    int total_price;

    printf("--- フルーツショップ会計システム ---\n");

    // 各商品の個数を入力
    printf("りんごの個数を入力してください: ");
    scanf("%d", &apple_count);

    printf("オレンジの個数を入力してください: ");
    scanf("%d", &orange_count);

    printf("苺のパック数を入力してください: ");
    scanf("%d", &strawberry_count);

    // 合計金額の計算
    total_price = (apple_price * apple_count) + 
                  (orange_price * orange_count) + 
                  (strawberry_price * strawberry_count);

    // 結果の表示
    printf("------------------------------\n");
    printf("合計金額は %d 円（税込）です。\n", total_price);

    return 0;
}