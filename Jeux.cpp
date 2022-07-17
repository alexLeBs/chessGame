/**
* Projet Final
* \file   Jeux.cpp
* \auteur Alexis LeBlanc et Zakaria Zair
* \date	6 mai 2022
* Cr�� le 9 avril 2022
*/

#include "Jeux.h"
#include "Case.h"
#include "Piece.h"
#include "Joueur.h"

classejeux::Jeux::Jeux() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			echiquier_[i][j] = std::make_shared<Case>(Case(i, j));
		}
	}
}

std::shared_ptr<classejeux::Case> classejeux::Jeux::avoirCase(int x, int y) const {
	return echiquier_[x][y];
}