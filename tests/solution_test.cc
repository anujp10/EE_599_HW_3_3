#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(LinkedListShould, LinkedListReturn) {
  SinglyLinkedList *list1 = new SinglyLinkedList();
  list1->push_back(10);
  int expected = list1->empty();
  int actual = 0;
  
  EXPECT_EQ(expected, actual);
}

TEST(LinkedListShould_1, LinkedListReturn_1) {
  SinglyLinkedList *list1 = new SinglyLinkedList();
  list1->push_back(10);
  list1->push_back(9);
  list1->push_back(8);
  int expected = list1->size();
  int actual = 3;
  
  EXPECT_EQ(expected, actual);
}

TEST(LinkedListShould_2, LinkedListReturn_2) {
  SinglyLinkedList *list1 = new SinglyLinkedList();
  list1->push_back(10);
  list1->push_back(9);
  list1->push_back(8);
  list1->push_front(11);
  int expected = list1->front();
  int actual = 11;
  
  EXPECT_EQ(expected, actual);
}

TEST(LinkedListShould_3, LinkedListReturn_3) {
  SinglyLinkedList *list1 = new SinglyLinkedList();
  list1->push_back(10);
  list1->push_back(9);
  list1->push_back(8);
  list1->push_front(11);
  list1->push_back(7);
  int expected = list1->back();
  int actual = 7;
  
  EXPECT_EQ(expected, actual);
}

TEST(LinkedListShould_4, LinkedListReturn_4) {
  SinglyLinkedList *list1 = new SinglyLinkedList();
  list1->push_back(10);
  list1->push_back(9);
  list1->push_back(8);
  list1->push_front(11);
  list1->erase(list1->head_);
  int expected = list1->front();
  int actual = 10;
  
  EXPECT_EQ(expected, actual);
}

TEST(LinkedListShould_5, LinkedListReturn_5) {
  std::vector <int> input = {10, 9, 8};
  SinglyLinkedList *list1 = new SinglyLinkedList();
  list1->push_back(10);
  list1->push_back(9);
  list1->push_back(8);
  list1->push_back(6);
  list1->push_front(11);
  list1->insert_after(list1->head_->next->next->next, 7);
  ListNode* expectedNode = list1->GetIthPointer(4);
  int expected = expectedNode->val;
  int actual = 7;
  
  EXPECT_EQ(expected, actual);
}

TEST(LinkedListShould_6, LinkedListReturn_6) {
  std::vector <int> input = {10, 9, 7};
  SinglyLinkedList *list1 = new SinglyLinkedList(input, -1);
  list1->insert_after(list1->head_->next, 8);
  ListNode* expectedNode = list1->GetIthPointer(2);
  int expected = expectedNode->val;
  int actual = 8;
  
  EXPECT_EQ(expected, actual);
}

TEST(LinkedListShould_7, LinkedListReturn_7) {
  std::vector <int> input = {};
  SinglyLinkedList *list1 = new SinglyLinkedList(input, -1);
  int expected = list1->empty();
  int actual = 1;
  
  EXPECT_EQ(expected, actual);
}

TEST(LinkedListShould_8, LinkedListReturn_8) {
  std::vector <int> input = {10, 9, 7};
  SinglyLinkedList *list1 = new SinglyLinkedList(input, -1);
  list1->insert_after(nullptr, 8);
  ListNode* expectedNode = list1->GetIthPointer(2);
  int expected = expectedNode->val;
  int actual = 7;
  
  EXPECT_EQ(expected, actual);
}

TEST(LinkedListShould_9, LinkedListReturn_9) {
  std::vector <int> input = {10, 9, 7};
  SinglyLinkedList *list1 = new SinglyLinkedList(input, -1);
  list1->insert_after(list1->head_->next, 8);
  ListNode* expected = list1->GetIthPointer(12);
  ListNode* actual = NULL;
  
  EXPECT_EQ(expected, actual);
}

TEST(LinkedListShould_10, LinkedListReturn_10) {
  std::vector <int> input = {10, 9};
  SinglyLinkedList *list1 = new SinglyLinkedList(input, -1);
  ListNode* expected = list1->GetBackPointer();
  ListNode* actual = list1->head_->next;
  
  EXPECT_EQ(expected, actual);
}

TEST(LinkedListShould_11, LinkedListReturn_11) {
  std::vector <int> input = {10, 9, 8};
  SinglyLinkedList *list1 = new SinglyLinkedList(input, -1);
  list1->pop_front();
  int expected = list1->front();
  int actual = 9;
  
  EXPECT_EQ(expected, actual);
}

TEST(LinkedListShould_12, LinkedListReturn_12) {
  std::vector <int> input = {10};
  SinglyLinkedList *list1 = new SinglyLinkedList(input, -1);
  list1->pop_front();
  int expected = list1->front();
  int actual = -1;
  
  EXPECT_EQ(expected, actual);
}

TEST(LinkedListShould_13, LinkedListReturn_13) {
  std::vector <int> input = {11, 10, 9};
  SinglyLinkedList *list1 = new SinglyLinkedList(input, -1);
  list1->pop_back();
  int expected = list1->back();
  int actual = 10;
  
  EXPECT_EQ(expected, actual);
}

TEST(LinkedListShould_14, LinkedListReturn_14) {
  std::vector <int> input = {10};
  SinglyLinkedList *list1 = new SinglyLinkedList(input, -1);
  list1->pop_back();
  list1->print();
  int expected = list1->back();
  int actual = -1;
  
  EXPECT_EQ(expected, actual);
}