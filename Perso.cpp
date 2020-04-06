#ifndef PERSO_CPP
#define PERSO_CPP

#include <string>
#include "Perso.h"

    /*std::string _nom;
    int _dossard;
    int _motivation;
    int _distance;*/
 
    std::string Perso::getName(){
        return _nom;
    }

    std::string Perso::getLook(){
        return "@" + std::to_string(_dossard);
    }

    int Perso::getDistance(){
        return _distance;
    }

    void Perso::avancer(){
        _distance += _motivation;
        _motivation --;
    }

    Perso::Perso(std::string name, int motiv, int numero):
        _nom(name), _motivation(motiv), _dossard(numero), _distance(0)
    {}

#endif