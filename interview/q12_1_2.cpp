#include <iostream>

using namespace std;

struct A
{
  int x:1;
  int y:2;
  int z:31;
};

int main(void)
{

  A a;
  cout << "a: sizeof " << sizeof(a) << "address of:" << &a << endl;
  cout << a.x << a.y << a.z << endl;
  return 0;
}
