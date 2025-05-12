#include <stdio.h>

double calculate_sum(int n) {
    if (n == 1) {
        return (2.0 * n - 1) / n; // Базовий випадок: перший елемент суми
    } else {
        return ((2.0 * n - 1) / n) + calculate_sum(n - 1); // Рекурсивний виклик
    }
}

int main() {
    system("chcp 65001");
    int n;
    printf("Введіть значення n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n має бути більше або рівне 1.\n");
        return 1;
    }

    double sum = calculate_sum(n);
    printf("Сума s = %.2f\n", sum);

    return 0;
}