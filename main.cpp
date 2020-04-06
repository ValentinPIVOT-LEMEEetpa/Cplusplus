#include <iostream>
#include <string>
#include "Perso.h"


using namespace std;

int main(){
          
    Perso * georges =  new Perso("Georges", 5, 1);
    Perso * david =  new Perso("David", 7, 2);

  

    (*georges).avancer();
    //georges -> avancer()

    return 0;
}