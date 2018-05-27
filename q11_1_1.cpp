#include <iostream>
using namespace std;

class A
{
protected :
  int m_data;

public:
  A(int data = 0)
  {
    m_data = data;
    cout << "constructor A():" << m_data << endl;
  }

  int GetData()
  {
    cout << "A::doGetData()" << endl;
    return doGetData();
  }

  virtual int doGetData()
  {
    cout << "virtual A::doGetData():" << m_data << endl;
    return m_data;
  }
};

class B: public A
{
protected:
  int m_data;

public:
  B(int data = 1)
  {

    m_data = data;
    cout << "constructor B:" << m_data << endl;    
  }

  int doGetData()
  {
    cout << "B::doGetData()" << endl;
    return m_data;
  }
};

class C: public B
{
protected:
  int m_data;
public:
  C(int data = 2)
  {

    int m_data = data;
    cout << "C::C():" << m_data << endl;    
  }

};

int main(void)
{

  C c(10);

  cout << "c.GetData() " << c.GetData() << endl;
  cout << "c.A::GetData() " << c.A::GetData() << endl;
  cout << " c.B::GetData() " << c.B::GetData() << endl;
  cout << "c.C::GetData() " << c.C::GetData() << endl;
  cout << "c.doGetData() " << c.doGetData() << endl;

  cout << " c.A::doGetData() " << c.A::doGetData() << endl;
  cout << "c.B::doGetData() " << c.B::doGetData() << endl;
  cout << "c.C::doGetData() " << c.C::doGetData() << endl;

  return 0;
}
