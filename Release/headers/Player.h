/*
 * Player.h
 *
 *  Created on: 8 mai 2018
 *      Author: root
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>

class Player
{
public:
	void deplacerPersonnage(int zone);

    void recevoirDegats(int nbDegats);

    void attaquer(Player &cible);

    void boirePotionDeVie(int quantitePotion);

    void changerArme(int NouvelleArme);

    bool estVivant();
private:


    int m_vie;

    int m_mana;

    int m_arme;

    std::string m_nomArme;

    int m_degatArme;
};

#endif /* PLAYER_H_ */
