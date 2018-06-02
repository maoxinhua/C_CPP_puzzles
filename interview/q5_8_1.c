#include <stdio.h>

int main(void)
{
  int n='c';
  switch(n++)
  {
  default: printf("error"); break;
  case 'a':
  case 'A':
  case 'b':
  case 'B':
    printf("ab");
    break;
  case 'c':
  case 'C':
    printf("c");
  case 'd':
  case 'D':
    printf("d");
  }
}
