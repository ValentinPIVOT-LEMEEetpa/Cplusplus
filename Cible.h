#include <string>

class Cible{
   public:
 
    Cible(int m_vie, int m_degats); //Constructeur
    void recevoirDegats(int nbDegats);
    void attaquer(Cible &Perso);
    void boirePotionDeVie(int quantitePotion);
    void changer(std::string nomNouvelle, int degatsNouvelle);
    bool estVivant();
    
    int getM_vie(){
        return m_vie;
    }
    int getM_mana(){
        return m_mana;
    }

    Cible();
 
    private:
 
    int m_vie;
    int m_mana;
    std::string m_nom;
    int m_degats;
};