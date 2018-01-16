#ifndef DoublyLinkedListNode_hpp
#define DoublyLinkedListNode_hpp

template <class T>
class DoublyLinkedListNode
{
public:
    DoublyLinkedListNode(T element) :  element(element) {}
    T element;
    std::shared_ptr<DoublyLinkedListNode> before;
    std::shared_ptr<DoublyLinkedListNode> next;
};

#endif //DoublyLinkedListNode_hpp