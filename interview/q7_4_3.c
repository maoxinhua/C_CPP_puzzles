#include <stdio.h>

int main(void)
{
  int i;          // 1
  int *p_i;       // 2
  int **pp_i;     // 3
  int array[10];  // 4
  int *array_p[10];  // 5
  int (*p_array)[10];  // 6
  int (*p_function)(int); // 7
  int (*p_funct_array[10])(int); // 8
  return 0;
}
  
