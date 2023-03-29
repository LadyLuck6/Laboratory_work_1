#include<stdio.h>
int main()
{
   int a, b, c;
   printf("Введіть сторони трикутника:");
   scanf("%d%d%d",&a,&b,&c);
   if(a == b && b== c)
      printf("Даний трикутник рівносторонній");
   else if(a == b || b == c || c == a)
      printf("Даний трикутник рівнобедрений");
   else
      printf("Даний трикутник є різносторонный");
   return 0;
}