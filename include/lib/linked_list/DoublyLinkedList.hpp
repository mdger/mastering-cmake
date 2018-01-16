#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <memory>
#include "DoublyLinkedListNode.hpp"

template <class T>
class DoublyLinkedList
{
private:
    std::shared_ptr<DoublyLinkedListNode<T> > first;
    std::shared_ptr<DoublyLinkedListNode<T> > last;

    void initializeList(T firstElement);
public:
    DoublyLinkedList();
    DoublyLinkedList(T firstElement);
    void prepend(T firstElement);
    void append(T lastElement);
    
    /**
     * Adds an element into the list in a sorted manner
     */

    void insert(T element);
    void printAllElements();
};

#endif