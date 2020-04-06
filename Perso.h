#ifndef PERSO_H
#define PERSO_H

#include <string>

class Perso{

    private:
 
    std::string _nom;
    int _dossard;
    int _motivation;
    int _distance;

    public:
 
    std::string getName();
    std::string getLook();
    int getDistance();
    void avancer();

    Perso(std::string name, int motiv, int numero);
 
};

#endif