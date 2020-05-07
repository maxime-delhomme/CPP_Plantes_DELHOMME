/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>

#include PLANTE.CPP
#include "plante.h"

using namespace std;

int main()
{
    std::cout << "Le jardin" << std::endl;
    
    Plante * lavande = new Plante("laurier");
    lavande->affiche();

    return 0;
};
