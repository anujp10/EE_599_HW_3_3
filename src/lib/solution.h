#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>

typedef struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int input) : val(input), next(nullptr) {}
} ListNode;

class SinglyLinkedList
{
public:
  SinglyLinkedList()
  {
    head_ = nullptr;
  }

  SinglyLinkedList(const std::vector<int> &inputs, int i)
  {
    int j = 0;
    ListNode *newnode = nullptr;

    if (inputs.size() == 0)
    {
      head_ = nullptr;
    }
    else
    {
      head_ = new ListNode(inputs[j]);
      ListNode *temp = head_;

      for (j = 1; (unsigned int)j < inputs.size(); j++)
      {
        newnode = new ListNode(inputs[j]);
        temp->next = newnode;
        temp = newnode;
      }

      if (i < 0 || (unsigned int)i >= inputs.size())
        temp->next = nullptr;
      else
        temp->next = GetIthPointer(i);
    }
  }

  ~SinglyLinkedList()
  {
    head_ = nullptr;
  }

  bool empty();
  int size();
  void push_back(int i);
  void push_front(int i);
  void insert_after(ListNode *p, int i);
  void erase(ListNode *p);
  void pop_front();
  void pop_back();
  int back();
  int front();
  ListNode *GetBackPointer();
  ListNode *GetIthPointer(int i);
  void print();

  ListNode *head_;
};

#endif