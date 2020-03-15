#include "Perso.h"

using namespace std;

Perso::Perso(int, int)
{
    string m_nom = "Épée rouillée";
    m_vie = 100;
    m_mana = 100;
    m_degats = 20;
}

void Perso::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    //On enlève le nombre de dégâts reçus à la vie du personnage
    
    if (m_vie < 0) //Pour éviter d'avoir une vie négative
    {
        m_vie = 0; //On met la vie à 0 (cela veut dire mort)
    }
}

void Perso::attaquer(Perso &cible)
{
    cible.recevoirDegats(m_degats);
    //On inflige à la cible les dégâts que cause notre arme
}

void Perso::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;

    if (m_vie > 100) //Interdiction de dépasser 100 de vie
    {
        m_vie = 100;
    }
}

void Perso::changer(string nomNouvelle, int degatsNouvelle)
{
    m_nom = nomNouvelle;
    m_degats = degatsNouvelle;
}

bool Perso::estVivant()
{
    if (m_vie > 0) //Plus de 0 de vie ?
    {
        return true; //VRAI, il est vivant !
    }
    else
    {
        return false; //FAUX, il n'est plus vivant !
    }
}