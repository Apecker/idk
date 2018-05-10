/*
 * Player.cpp
 *
 *  Created on: 8 mai 2018
 *      Author: root
 */

#include "../headers/Player.h"

using namespace std;

	void Player::deplacerPersonnage(int newZone)
	{
		if (newZone = 1)
		{
			m_zone = "maisonDepart";
		}
	}

    void Player::recevoirDegats(int nbDegats)
    {
        m_vie -= nbDegats;

        if (m_vie < 0)
        {
            m_vie = 0;
        }
    }

    void Player::attaquer(Player &cible)
    {

    }

    void Player::boirePotionDeVie(int quantitePotion)
    {
        m_vie += quantitePotion;


        if (m_vie > 100)
        {
            m_vie = 100;
        }
    }

    void Player::changerArme(int nouvelleArme)
    {
    	m_arme = nouvelleArme;

    	if (m_arme = 1)
    	{
    		m_nomArme = "épée";
    		m_degatArme = 15;
    	}

    	if (m_arme = 2)
    	{
    		m_nomArme = "dague";
    		m_degatArme = 7;
    	}

    	if (m_arme = 3)
    	{
    		m_nomArme = "hache";
    		m_degatArme = 30;
    	}
    }

    bool Player::estVivant()
    {
    	if (m_vie > 0)
    	    {
    	        return true;
    	    }

    	    else
    	    {
    	        return false;
    	    }
    }

    // Attributs

    string m_zone;

    int m_vie;

    int m_mana;

    int m_arme;

    string m_nomArme;

    int m_degatArme;

