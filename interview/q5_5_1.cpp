#include <iostream>
using namespace std;

int main(void)
{
  unsigned char a=0xA5;
  unsigned char b=~a>>(4+1);

  cout << b << endl;

}
