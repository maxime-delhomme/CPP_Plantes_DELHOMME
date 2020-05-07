#include <iostream>
#include <string>
#ifndef PLANTE_H
#define PLANTE_H

class Plante{
    private:
        std :: string _name;
        int _taille;
        int _sante;
        int _eau;
    public:
        Plante(std::string name);
        
        void manger(int engrais);
        void couper(int coupe);
        void boire(int boisson);
        void alive(int vie);
        
        void affiche();
        
}

#endif