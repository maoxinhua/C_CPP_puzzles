#include <stdio.h>
#include <unistd.h>

int main(void)
{

  int i = 1;
  if(!fork()) i++;
  printf("first::%d\n", i );
  if(!fork()) i++;
  printf("second::%d\n", i);
  return 0;
}
