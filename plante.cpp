#include "plante.h"
#include <iostream>
#include <string>
#ifndef PLANTE_CPP
#define PLANTE_CPP

Plante::Plante (std :: string nom): _name(nom), _taille(5), _sante(5), _vie(10) {}

void Plante :: manger (int engrais){
    engrais = 1;
    _taille += engrais;
}

void Plante :: couper (int coupe){
    coupe = 2;
    _taille -= coupe;
    
    if(_taille <0) _vie = 0;
}

void Plante :: boire (int boisson){
    boisson = 2;
    _eau += boisson;
    if(_eau<0) _vie = 0;
    if(_eau>10) _vie = 0;
}

void Plante :: alive(){
    if(_sante<0) _vie = 0;
}

void Plante::affiche(){
    
}