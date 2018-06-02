#include <iostream>
#include <typeinfo>

using namespace std;

class base
{
public:
  virtual void funcA()
  {
    cout << "base" << endl;
  }

};

class derived: public base
{
public:
  virtual void funcB()
  {
    cout << "derived" << endl;
  }
};

void funcC(base *p)
{

  derived *dp = dynamic_cast<derived*>(p);
  if(NULL != dp)
    dp->funcB();
  else
    p->funcA();
}

void funcD(base *p)
{
  derived *dp = NULL;
  if(typeid(*p) == typeid(derived))
  {
    dp = static_cast<derived *>(p);
    dp->funcB();
  }else
  {
    p->funcA();
  }
}

int main(void)
{

  base *cp = new derived;
  cout << "typeid(cp).name()" << typeid(cp).name() << endl;
  cout << "typeid(*cp).name()" << typeid(*cp).name() << endl;

  derived d;
  cout << "typeid(d).name()" << typeid(d).name() << endl;
  cout << "typeid(&d).name()" << typeid(&d).name() << endl;

  funcD(cp);
  funcC(cp);

  base *dp = new base;
  cout << "funcC(dp)" << endl;
  funcC(dp);
  cout << "funcD(dp)" << endl;
  funcD(dp);

  return 0;

}
