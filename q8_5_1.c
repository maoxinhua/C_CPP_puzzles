#include <stdlib.h>

#define LOOP 1000000uL
void main()
{

  long rgnC  = 0;
  long i;
  for(i=0; i<LOOP; i++)
  {
    int x=rand();
    int y=rand();
    if(x*x + y*y < RAND_MAX*RAND_MAX)
      rgnC ++;
  }

  printf("%ld, %lx\n", rgnC, RAND_MAX);

}
