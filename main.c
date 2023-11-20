// #include<stdio.h>

// int main()
// {
//     int a,b,c;
//     a = 5;
//     b = 5;
//     c = a+b;
//     printf("sum = %d",&c);
//     printf("hello world");
//     return 0;v
// }

#include <stdio.h>
int main()
{
  int x, y, z,a,b,c;

  printf("Enter two numbers to add\n");
  scanf("%d%d", &x, &y);
  z = x + y;
  printf("Sum of the numbers = %d\n", z);
  printf("Enter two numbers to multiply\n");
  scanf("%d%d", &a, &b);
  c = a + b;
  printf("Sum of the numbers = %d\n", c);

  return 0;
}
