#include <iostream>
#include <stream>
#include "plante.h"

#ifndef BOTANISTE_H
#define BOTANISTE_H

class Botaniste{
    private:
        std::string: _nom;
        int _money = 40;
        int _tired;
        
    public:
    Botaniste(std::string name);
    
     void sleep(int hour = 1);
        void buy();
        void sell();
        
        void affiche();
}

#endif