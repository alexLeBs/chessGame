/**
* Projet Final
* \file   test.cpp
* \auteur Alexis LeBlanc et Zakaria Zair
* \date	6 mai 2022
* Créé le 9 avril 2022
*/

#include "Joueur.h"
#include "Jeux.h"
#include "Cavalier.h"
#include "Tour.h"
#include "Roi.h"

#if __has_include("gtest/gtest.h")
#include "gtest/gtest.h"
#endif
#ifdef TEST


TEST(Jeux, deplacement) {
	classejeux::Jeux jeu;
	classejeux::Joueur j1("Alexis");
	classejeux::Joueur j2("Zak");

	classejeux::Piece::positionInitialeX = 0;
	classejeux::Piece::positionInitialeY = 7;
	classejeux::Cavalier cav(jeu);
	j1.ajouterPiece(std::make_shared<classejeux::Cavalier>(cav));
	
	EXPECT_EQ(cav.mouvementsValide(jeu, j1, j2)[0]->avoirPositionX(), 1);
	EXPECT_EQ(cav.mouvementsValide(jeu, j1, j2)[1]->avoirPositionX(), 2);
	EXPECT_EQ(cav.mouvementsValide(jeu, j1, j2)[0]->avoirPositionY(), 5);
	EXPECT_EQ(cav.mouvementsValide(jeu, j1, j2)[1]->avoirPositionY(), 6);	
}

#endif
