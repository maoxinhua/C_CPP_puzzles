#include <stdio.h>

int max(int x, int y)
{
  return ((x > y) ? x : y);
}


int main(void)
{

  //  int max(int, int);
  int (*p)(int, int);
  p = &max;

  int a, b, c, d;
  printf("please input three integers \n");

  scanf("%d%d%d", &a, &b, &c);
  d = (*p)((*p)(a, b), c);
  printf(" Among %d, %d, %d, the max integer is %d\n", a, b, c, d);
  return 0;

}

