#include <iostream>

using namespace std;

class Program
{
public:
  Program()
  {
    m_call_count = 0;
  }

  ~Program()
  {
  }

  int calculate(int n)
  {
    m_call_count ++;
    if (n <= 3)
    {
      cout << "calculate(" << n << ")=1 ";
      return 1;
    }
    else
    {
      cout << "calculate(" << n << "=)";
      return calculate(n-2) + calculate(n-4) + 1;
    }
  }

  void print_result(void)
  {
    cout << "total call " << m_call_count << "times" << endl;
  }

private:
  int m_call_count;
};

int main(void)
{
  Program *p = new Program();
  p->calculate(p->calculate(8));
  p->print_result();

  return 0;
}
    
