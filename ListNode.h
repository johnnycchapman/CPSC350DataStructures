#include <iostream>

using namespace std;

template <class T>

class ListNode()
{
public:
  int data;
  ListNode();
  ListNode(int data);
  ~ListNode();
};

template <class T>
ListNode<T>::ListNode(){}

template <class T>
ListNode<T>::ListNode(int d)
{
  data = d;
  next = NULL;
}

template <class T>
ListNode<T>::~ListNode()
{
  if (next != NULL)
    delete next;
}
/*
template <class T>
class NaiveList()
{
private:
  unsigned int size;  // cannot be negative
  ListNode *front;
  ListNode *back;

public:
  NaiveList();
  ~NaiveList();

  void insertFront(int data);
  void printList();
  int removeFront();
  int deletePos(int pos);
  int find(int value);
  unsigned int getSize();
  bool isEmpty();
};

template <class T>
void NaiveList<T>::insertBack(int d)
{
  ++size;
  ListNode *node = new ListNode(d);

  if (front == NULL)
  {
    front = back;
  }
  else
  {
    back -> next = node;
    back = node;
  }
}

template <class T>
void NaiveList<T>::insertFront(int data)
{
  ++size;
  ListNode *node = new ListNode(data);
  node -> next = front;
  front = node;
}


template <class T>
int NaiveList<T>::removeFront()
{
  --size;
  int temp = front -> data;
  ListNode *ft = front;
  front = front -> next;
  ft -> next = NULL;
  delete ft;
  return temp;
}

template <class T>
void NaiveList<T>::printList()
{
  ListNode *curr = front;
  while (curr)
  {
    cout << curr -> data << endl;
    curr = curr -> next;
  }
}

template <class T>
int NaiveList<T>::find(int value)
{
  int idx = -1;

  ListNode *curr = front;

  while (curr != NULL) // start searching for value
  {
    ++idx;
    if (curr -> data == value) // found it
    {
      break;
    }
    else
      curr = curr -> next;
  }

  if (curr == NULL)
    idx = -1;

  return idx;
}

template <class T>
int NaiveList<T>::deletePos(int pos)
{
  int idx = 0;
  ListNode *curr = front;
  ListNode *prev = front;

  while (idx != pos)
  {
    prev = curr; // set prev to curr
    curr = curr -> next; // set curr curr.next
    ++idx;
  }

  // Found the position, now it's time to update pointers
  prev -> next = curr -> next;
  curr -> next = NULL;
  int d = curr -> data;
  delete curr;

  size--;
  return d;
}
*/
