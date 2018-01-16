#include <memory>
#include <iostream>
#include "DoublyLinkedList.hpp"
#include "DoublyLinkedListNode.hpp"

template <class T>
DoublyLinkedList<T>::DoublyLinkedList() 
{
    this->first = nullptr;
    this->last = nullptr;
}

template <class T>
DoublyLinkedList<T>::DoublyLinkedList(T firstElement) 
{
    this->initializeList(firstElement);
}

template <class T>
void DoublyLinkedList<T>::prepend(T firstElement) 
{
    // Linked List is empty, so just call the constructor
    if (this->first == nullptr) 
    {
        initializeList(firstElement);
    }
    // Else prepend the element
    else 
    {
        std::shared_ptr<DoublyLinkedListNode<T> > tmp = std::make_shared<DoublyLinkedListNode<T> >(firstElement);
        tmp->before = nullptr;
        tmp->next = this->first;
        this->first->before = tmp;

        this->first = tmp;
    }
}


template <class T>    
void DoublyLinkedList<T>::append(T lastElement) 
{
    // Linked List is empty, so just call the constructor
    if (this->last == nullptr) 
    {
        initializeList(lastElement);
    }
    // Else append the element
    else 
    {
        std::shared_ptr<DoublyLinkedListNode<T> > tmp = std::make_shared<DoublyLinkedListNode<T> >(lastElement);
        tmp->next = nullptr;
        tmp->before = this->last;
        this->last->next = tmp;

        this->last = tmp;
    }
}


template <class T>
void DoublyLinkedList<T>::initializeList(T firstElement) 
{
    std::shared_ptr<DoublyLinkedListNode<T> > tmp = std::make_shared<DoublyLinkedListNode<T> >(firstElement);
    tmp->before = nullptr;
    tmp->next = nullptr;
    this->first = tmp;
    this->last = tmp;
}


template <class T>
void DoublyLinkedList<T>::printAllElements()
{
    int count = 0;
    std::shared_ptr<DoublyLinkedListNode<T> > tmp = this->first;
    std::cout << "Printing... \n";

    do {
        std::cout << tmp->element << "\n";
        tmp = tmp->next;
        count++;
    }
    while(tmp != nullptr);

    std::cout << count << " elements \n";
}

template <class T>
void DoublyLinkedList<T>::insert(T element)
{
    // If list is empty or the element is smaller than the first element, just prepend
    if (this->first == nullptr || this->first->element > element) 
    {
        this->prepend(element);
        return;
    }

    std::shared_ptr<DoublyLinkedListNode<T> > tmp = this->first;

    // traverse through the list until the to be inserted element is bigger than the current element
    // or the end of the list is reached 
    while (tmp->next != nullptr && tmp->next->element < element) 
    {
        tmp = tmp->next;
    }

    // if the end of the list is reached, just append the element
    if (tmp->next == nullptr) 
    {
        this->append(element);
    }
    // element is inbetween two elements. add element
    else 
    {
        std::shared_ptr<DoublyLinkedListNode<T> > newElement = std::make_shared<DoublyLinkedListNode<T> >(element);
        newElement->before = tmp;
        newElement->next = tmp->next;
        tmp->next->before = newElement;
        tmp->next = newElement;
    }
}
