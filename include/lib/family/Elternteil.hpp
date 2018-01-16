#ifndef Elternteil_hpp
#define Elternteil_hpp

#include "lib/family/Mensch.hpp"
#include <vector>
#include <memory>

class Elternteil : public Mensch
{
    private:
        std::vector<std::shared_ptr<Mensch> > kinder;
    public:
        Elternteil(std::string, int);
        void zeigeAlter();
        
};

#endif