#include <stdio.h>//введення бібліотек
#include <math.h>

int main() {
    int a = 3, b = 27;//введення змінних
    float sa, sg;

    // Середнє арифметичне
    sa = (a + b) / 2.0;

    // Середнє геометричне
    sg = sqrt(a * b);

    printf("Середнє арифметичне: %.1f\n", sa);
    printf("Середнє геометричне: %.1f\n", sg);

    return 0;
}