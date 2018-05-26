#include <stdio.h>

main()
{
  int b=3;
  int arr[]={6,7,8,9,10};
  
  int  *ptr = arr;

  for(int c=0; c<5; c++)
  {
    printf("arr[c]=%x; address = %X\n", *ptr, ptr);
    ptr++;
  }

  ptr = arr;
  *(ptr++) += 123;
  printf("address of ptr = %X\n", ptr);
  printf("%x,%x\n ", *ptr, *(++ptr));

  printf("address of ptr = %X\n", ptr);
  printf("%x,%x\n", *ptr, *(ptr++));
    
}
