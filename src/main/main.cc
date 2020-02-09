#include <iostream>
#include "src/lib/solution.h"

int main()
{
    std::vector <int> input = {1, 2, 3, 4, 5, 6};
    SinglyLinkedList *newlist1 = new SinglyLinkedList(input, 10);
    std::cout <<"----------------------------------" << std::endl;
    newlist1->print();
    std::cout << "size of the list is " << newlist1->size() << std::endl;
    std::cout <<"----------------------------------" << std::endl;

    SinglyLinkedList *newlist2 = new SinglyLinkedList();
    ListNode *temp = NULL;
    newlist2->push_back(10);
    newlist2->push_back(9);
    newlist2->push_back(8);
    newlist2->push_back(7);
    newlist2->push_front(11);
    newlist2->insert_after(newlist2->head_->next->next, 1); //Enter node after the 3rd node
    newlist2->erase(newlist2->head_->next->next->next); //Removing 1 from the list
    newlist2->erase(newlist2->head_); //Removing 1 from the list
    newlist2->pop_front();
    newlist2->push_back(6);
    newlist2->pop_back();
    temp = newlist2->GetBackPointer();
    temp =newlist2->GetIthPointer(0);
    temp =newlist2->GetIthPointer(4);
    std::cout <<"----------------------------------" << std::endl;
    newlist2->print();
    std::cout << "size of the list is " << newlist2->size() << std::endl;
    std::cout <<"----------------------------------" << std::endl;

    return EXIT_SUCCESS;
}