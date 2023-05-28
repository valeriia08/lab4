//Обчислити середнє арифметичне всіх непарних чисел у діапозані [1;80]
//з передумовою

#include <stdio.h>

int main() {
    int sum = 0;  // Змінна для суми непарних чисел
    int count = 0;  // Змінна для кількості непарних чисел
    int i = 1;

    // Цикл з передумовою, який обчислює суму та кількість непарних чисел
    while (i <= 80) {
        sum += i;
        count++;
        i += 2;
    }

    double average = (double) sum / count;  // Обчислення середнього арифметичного
    printf("Середнє арифметичне непарних чисел: %.2lf\n", average);  // Виведення результату

    return 0;
}