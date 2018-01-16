#include <iostream>
#include "lib/family/Elternteil.hpp"

Elternteil::Elternteil(std::string name, int alter)
    : Mensch(name, alter) 
{

}

void Elternteil::zeigeAlter() 
{
    Mensch::zeigeAlter();
    
    for (std::shared_ptr<Mensch> kind : kinder) 
    {
        kind->zeigeAlter();
    }
}