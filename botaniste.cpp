#include "bontaniste.h"
#include "plante.h"
#include <string>
#include <iostream>

#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

using namespace std;

void Botaniste :: sleep (int hour){
    _tired += hour;
    if(_tired = 3) std:: cout << "le lendemain" << std::endl;
    
}

void Botaniste :: buy (){
    _money -= 10;
    _plantes += 1;
    if(_money<0) _money = 0;
    if(_money<0) std::cout << "no more money" << std::endl;
    
}

void Botaniste :: vendre(){
    _money += 13;
    _plantes -= 1;
    if(_plantes < 1) _plantes = 0;
    if(_plantes < 1) std::cout << "no more plantes" << std::endl;
}

#endif