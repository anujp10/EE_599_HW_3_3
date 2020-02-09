#include "solution.h"
#include <iostream>

bool SinglyLinkedList::empty()
{
  if (head_ == nullptr)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int SinglyLinkedList::size()
{
  int size = 0;
  if (!SinglyLinkedList::empty())
  {
    ListNode *temp = head_;
    while (temp != nullptr)
    {
      temp = temp->next;
      size++;
    }
  }

  return size;
}

void SinglyLinkedList::push_back(int i)
{
  if (head_ == nullptr)
  {
    head_ = new ListNode(i);
  }
  else
  {
    ListNode *temp = head_;
    while (temp->next != nullptr)
    {
      temp = temp->next;
    }
    ListNode *new_node = new ListNode(i);
    temp->next = new_node;
  }
}

void SinglyLinkedList::push_front(int i)
{
  if (head_ == nullptr)
  {
    head_ = new ListNode(i);
  }
  else
  {
    ListNode *temp = new ListNode(i);
    temp->next = head_;
    head_ = temp;
  }
}

void SinglyLinkedList::insert_after(ListNode *p, int i)
{
  ListNode *temp = head_;

  if (p == nullptr)
    return;

  while (temp != nullptr)
  {
    if (temp == p)
    {
      ListNode *newnode = new ListNode(i);
      newnode->next = temp->next;
      temp->next = newnode;
      return;
    }
    temp = temp->next;
  }
}

void SinglyLinkedList::erase(ListNode *p)
{
  ListNode *temp = head_;
  if (p == nullptr || (SinglyLinkedList::empty()))
    return;

  if (p == head_) {
    temp = head_->next;
    delete(head_);
    head_ = temp;
    return;
  }

  while (temp != nullptr)
  {
    if (temp->next == p)
    {
      ListNode *node = temp->next;
      temp->next = temp->next->next;

      delete (node);

      return;
    }
    temp = temp->next;
  }
}

void SinglyLinkedList::pop_front() {
  ListNode *temp = head_->next;

  if (empty())
    return;

  delete(head_);
  head_ = temp;
}

void SinglyLinkedList::pop_back() {
  if (empty())
    return;

  if (head_->next == nullptr) {
    head_ = nullptr;
    delete(head_);
    return;
  }

  ListNode *temp = head_;
  while(temp->next->next != nullptr) {
    temp = temp->next;
  }
  ListNode *deletenode = temp->next;
  delete(deletenode);
  temp->next = nullptr;

}

int SinglyLinkedList::back()
{
  ListNode *temp = head_;

  if (SinglyLinkedList::empty())
    return -1;

  while (temp->next != nullptr)
  {
    temp = temp->next;
  }

  return temp->val;
}

int SinglyLinkedList::front()
{
  if (SinglyLinkedList::empty())
    return -1;
  else
    return head_->val;
}

ListNode *SinglyLinkedList::GetBackPointer()
{
  ListNode *temp = head_;

  while (temp->next != nullptr)
  {
    temp = temp->next;
  }

  return temp;
}

ListNode *SinglyLinkedList::GetIthPointer(int i)
{
  ListNode *temp = head_;
  int count = 0;

  while (temp != NULL)
  {
    if (count == i)
      break;
    else
    {
      temp = temp->next;
      count++;
    }
  }

  return temp;
}

void SinglyLinkedList::print()
{
  ListNode *temp = nullptr;
  if (SinglyLinkedList::empty())
  {
    std::cout << "LinkedList is empty" << std::endl;
  }
  else
  {
    temp = head_;
    while (temp != nullptr)
    {
      std::cout << "Value = " << temp->val << std::endl;
      temp = temp->next;
    }
  }
}