#include <iostream>
using namespace std;

class A
{
public:
  int _a;
  A()
  {
    _a = 1;
  }

  void print()
  {
    printf("A::_a=%d\n", _a);
    cout << &_a << endl;
  }

};


  class B : public A
{
public:
  int _a;
  B()
  {
    _a = 2;
  }

};


int main(void)
{
  A a;
  B b;
  b.print();
  cout << &(b._a) << endl;
  printf("b._a=%d  \n", b._a);
  printf("sizeof a=%d, sizeof b=%d\n", sizeof(a),sizeof(b));

}
    
