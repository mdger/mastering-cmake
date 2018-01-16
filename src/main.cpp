#include <iostream>
#include <memory>
#include <string>
#include <array>
#include "lib/family.hpp"
#include "lib/linked_list.hpp"

int main() {
    // std::array<std::string, 2> input = {"Apfel", "Apple"};
    // std::shared_ptr<DoublyLinkedList<std::array<std::string, 2> > >pWoerterbuch = std::make_shared<DoublyLinkedList<std::array<std::string, 2> > >(input);
    std::shared_ptr<DoublyLinkedList<int> > pWoerterbuch = std::make_shared<DoublyLinkedList<int> >();
    pWoerterbuch->insert(6);
    pWoerterbuch->insert(5);
    pWoerterbuch->insert(3);
    pWoerterbuch->insert(1);
    pWoerterbuch->insert(2);
    pWoerterbuch->insert(6);
    pWoerterbuch->insert(200);
    pWoerterbuch->insert(17);
    pWoerterbuch->insert(2);
    pWoerterbuch->insert(12);
    pWoerterbuch->insert(121); // 11
    pWoerterbuch->printAllElements();
    
    return 0;
}
