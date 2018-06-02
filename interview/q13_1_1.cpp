#include <iostream>

using namespace std;

typedef struct Node
{
  struct Node* next;
  int data;
}T_NODE;

class LinkedList
{
private:
  T_NODE *head;
  unsigned short m_length;

public:
  LinkedList(int a = 0)
  {
    head = NULL;

    /* create head node */
    head = new(T_NODE);
    if(NULL != head)
    {
      head->next = NULL;
      head->data = a;
      m_length += 1;
    }

  }

  ~LinkedList()
  {
    T_NODE *p_node = NULL;
    while(head != NULL)
    {
      p_node = head;
      head = head->next;
      delete(p_node);
    }
    m_length = 0;

  }

  T_NODE * del(int num)
  {
    T_NODE *p1, *p2;
    p1 = head;
    if(NULL == p1)
      return NULL;
    
    while(p1->data != num && p1->next != NULL)
    {
      p2 = p1;
      p1 = p1->next;
    }

    if(p1->data == num) // we found it
    {

      /* if head is the node to be deleted */
      if(p1 == head)
      {
        p2 = head->next;
	head = p2;
	return p1;
      }
      p2->next = p1->next;
      m_length -= 1;
      return p1;
    }else
    {
      cout << "cannot find num " << num << "in the list" << endl;
    }
  }

  T_NODE * insert(int num)
  {
    /* by default we insert in the end of list */
    T_NODE *p1;
    T_NODE *p = new(T_NODE);

    if(NULL == p)
    {
      cout << "malloc failed" << endl;
      return NULL;
    }

    p->data = num;
    p->next = NULL;
      
    if(NULL == head)
    {
      head = p;
    }
    else
    {
      p1 = head;
      while(p1->next != NULL)
	p1 = p1->next;
      p1->next = p;
    }
    m_length += 1;
    return p;
  }

  void print(void)
  {
    T_NODE *p = head;
    while(p != NULL)
    {
      cout << " " << p->data << " ";
      p = p->next;
    }

  }

  unsigned int get_length(void)
  {
    unsigned int length = 0;
    T_NODE *p = head;

    while(p != NULL)
    { 
      length += 1;
      p = p->next;
    }
    return length;
  }

};


int main(void)
{
  LinkedList l(10);
  LinkedList *pl = &l;
  pl->insert(893);
  pl->insert(63);
  pl->insert(200);
  l.print();


  pl->del(200);
  pl->print();

  pl->del(10);
  pl->print();
  
  return 0;

}
