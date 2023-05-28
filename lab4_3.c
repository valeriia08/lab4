/*Створити програми для розв’язування задачі згідно свого варіанту:
Варіант 6: Задані дійсне число а та натуральне число n. 
Обчислити: (а+1)(а+1+2)…(а+1+2+…+n).*/

#include <stdio.h>

int main() {
    double a;
    int n;
    double result = 1.0;
    double sum = 0.0;

    printf("Введіть дійсне число a: ");
    scanf("%lf", &a);

    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
        result *= (a + sum);
    }

    printf("Результат: %.2lf\n", result);

    return 0;
}