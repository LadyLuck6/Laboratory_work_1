#include <stdio.h>
 
int main() {
  int x, y, z;
  printf("Ввести значення x: ");
  scanf("%d", &x);
  printf("Ввести значення y: ");
  scanf("%d", &y);
  printf("Ввести значення z: ");
  scanf("%d", &z);
  if (x == y && y != z) {
    printf("Виведення: 1");
  } else {
    printf("Виведеня: 0");
  }
  return 0;
}