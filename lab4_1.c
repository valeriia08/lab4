#include <stdio.h>

int main()
{
    int x, y, z;
    double t;

    // Зчитування значень x, y і z з клавіатури
    printf("Введіть значення x: ");
    scanf("%d", &x);

    printf("Введіть значення y: ");
    scanf("%d", &y);

    printf("Введіть значення z: ");
    scanf("%d", &z);

    // Перевірка ділення на нуль
    if (z == 0)
    {
        printf("Помилка: неможливо здійснити ділення на нуль.\n");
        return 0; // Завершення програми
    }

    // Обчислення значення функції t
    t = (1 + z) * x + y / (double)z / x - 1 / (1 + x * x);

    // Виведення результату
    printf("Значення функції t: %.2lf\n", t);

    return 0;
}