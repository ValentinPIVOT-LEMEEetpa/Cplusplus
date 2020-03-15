#include <string>
 
class Perso{
    public:
 
    Perso(int m_vie, int m_degats); //Constructeur
    void recevoirDegats(int nbDegats);
    void attaquer(Perso &cible);
    void boirePotionDeVie(int quantitePotion);
    void changer(std::string nomNouvelle, int degatsNouvelle);
    bool estVivant();
    
    int getM_vie(){
        return m_vie;
    }
    int getM_mana(){
        return m_mana;
    }

    Perso();
 
    private:
 
    int m_vie;
    int m_mana;
    std::string m_nom;
    int m_degats;
};