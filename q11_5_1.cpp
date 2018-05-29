#include <iostream>

using namespace std;
class base
{
public:
  int i;
public:
  base(int x)
  {
    i = x;
  }

};

class derived: public base
{
private:
  int i;

public:
  derived(int x, int y):base(x)
  {
    i = x;
  }

  void printTotal()
  {
    int total = i + base::i;
    cout << "total = " << total << endl;
  }
};

int main(void)
{

  derived d(5, 6);
  d.printTotal();
  return 0;
}


