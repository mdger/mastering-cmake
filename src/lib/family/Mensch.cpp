#include "lib/family/Mensch.hpp"
#include <string>
#include <iostream>

Mensch::Mensch(std::string name, int alter) 
    : name(name), alter(alter) 
{

}

void Mensch::zeigeAlter() {
    std::cout << getName << "ist " << 
    alter << " Jahre alt" << std::endl;
}

void Mensch::geburtstag() {
    alter++;
}

std::string Mensch::getName() {
    return name;
}