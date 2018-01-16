#ifndef Mensch_hpp
#define Mensch_hpp

#include <string>

class Mensch
{
private:
    std::string name;
    int alter;
public:
    Mensch(std::string, int);
    virtual void zeigeAlter();
    void geburtstag();
    std::string getName();
};

#endif 