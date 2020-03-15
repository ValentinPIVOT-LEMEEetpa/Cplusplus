#include <iostream>
#include "Perso.h" 
#include "Cible.h"

using namespace std;

int main(){
          /*vie | atk*/
    Perso p1(10, 20);
    Perso p2(20, 10);
    Perso p3(100, 10);
    Perso p4(201, 0);

          /*vie | atk*/
    Cible c1(20, 15);
    Cible c2(45,54);
    Cible c3(324,15);
    Cible c4(456,54);
    
    cout << " p1 vie", p1.getM_vie << endl;

    return 0;
}