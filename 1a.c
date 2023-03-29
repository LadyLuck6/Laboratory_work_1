#include <stdio.h>
#include <math.h>

int main() {

  float a, b, c;

  printf("Введіть три різні числа: ");
  scanf("%1f %lf %lf", &a, &b, &c);

  // якщо a більше b і c, a є найбільшим
  if (a >= b && a >= c)
    printf("%2f є найбільшим числом.", a);

  // якщо b більше за a і c, b є найбільшим
  if (b >= a && b >= c)
    printf("%2f є найбільшим числом.", b);

  // якщо c більше за a і b, c є найбільшим
  if (c >= a && c >= b)
    printf("%2f є найбільшим числом.", c);

  return 0;

}