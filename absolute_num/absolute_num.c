#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    printf("整数を入力してください: ");
    scanf("%d", &number);

    int absoluteValue = abs(number);

    printf("絶対値は %d です。\n", absoluteValue);

    return 0;
}