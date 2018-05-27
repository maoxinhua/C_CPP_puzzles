#include <iostream>

using namespace std;

class matrix
{
public:
  matrix(unsigned int scale)
  {
    if(scale == 0)
    {
      p = NULL;
      m_scale = 0;
      return;
    }
    p = (int *) new int[scale*scale];
    if(NULL != p)
    {
      memset(p, 1, sizeof(int)*scale*scale);
    }
    *p = 1;
    m_scale = scale;
  }

  ~matrix()
  {
    if(NULL != p)
    {
      delete []p;
      p = NULL;
      m_scale = 0;
    }
  }

  int travel(void)
  {
    
    if(NULL == p || 0 == m_scale)
    {
      return -1;
    }

    int m=0, n=0;
    int count = 0;
        cout << "start " << m << "," << n << "," << count << endl;
	
    while(m <= m_scale && n <= m_scale)
    {
      if(0 == m || (m_scale - 1) == m)
      {
// one step right
        n = n + 1;
	count++;
        cout << "one step right " << m << "," << n << "," << count << endl;		
        *(p+m*m_scale+n) = count;	
	/* then we need to step bottom left until we reach the leftest */
        while(n > 0 && n < m_scale - 1)
	{
          n--;
	  if(0 == m)
	  {
	    m++;
	  }else if (m_scale - 1 == m)
	  {
	    m--;
	  }
	  count++;
	  cout << "one step bottom left " << m << "," << n << "," << count << endl;
	  *(p+m*m_scale+n) = count;
	}
	continue;
      }


      if(0 == n || (m_scale - 1) == n)
      {
        /* one step bottom */

	m = m + 1;
	count++;
	cout << "one step bottom " << m << "," << n << "," << count << endl;	
        *(p+m*m_scale+n) = count;
	/* then we need to step top right until we reach the topest */
	while(m > 0 && n < m_scale - 1)
	{
          m--;
	  if(0 == n)
	  {
	    n++;
	  }else if(m_scale - 1 == n)
	  {
            n--;
	  }
	    
	  count ++;
	  cout << "one step top right " << m << "," << n << "," << count << endl;
	  *(p+m*m_scale+n) = count;
	  //continue;
	}
	continue;
      }
	  

    }
    return 0;
  }


  void print_matrix()
  {
    if(NULL == p)
      return;

    for(int i = 0; i < m_scale*m_scale; i++)
    {
      cout << "p[" << i << "]=" << *(p+i) << ",";
      if(i % (m_scale-1) == 0)
	cout << endl;
    }
  }
private:
  int *p;
  int m_scale;
};

int main(void)
{
  matrix *m = (matrix *)new matrix(8);
  m->travel();
  m->print_matrix();
  free(m);
  m = NULL;
  return 0;

}
      
