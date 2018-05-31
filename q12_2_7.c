#include <stdio.h>

#define  PREG(a) (*(volatile unsigned int *)a)

int main(void)
{
  unsigned int i = 0x5AAA;
  
  printf("%x\n", PREG(&i));
  printf("compzero=%llx\n", ~(0ULL));

  printf("A=%x,Z=%x,a=%x,z=%x\n", 'A', 'Z', 'a', 'z');
  return 0;
}


