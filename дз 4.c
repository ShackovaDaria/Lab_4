#include <stdio.h>
int dz();
int main () {
dz();
}
int dz() {
    int a, b, c;
    printf("введите номера игроков a b c\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("%s\n", ((a + b + c) % 3 == 0) ? "счастливая тройка" : "не счастливая");
    return 0;
}
