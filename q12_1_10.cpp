#include <iostream>

using namespace std;

#define  BIT_MASK(a) (~(1<<a))
#define  BIT(a)      (1<<a)
int main(void)
{

  int i = 0x80;
  cout.setf(ios::hex,ios::basefield);
  cout << (i | BIT(3)) << endl;
  cout << (i & BIT_MASK(3)) << endl;
  return 0;
}
  
