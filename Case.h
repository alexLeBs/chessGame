/**
* Projet Final
* \file   Case.h
* \auteur Alexis LeBlanc et Zakaria Zair
* \date	6 mai 2022
* Créé le 9 avril 2022
*/

#pragma once

namespace classejeux {
	class Joueur;
	class Piece;
	class Jeux;
	class Case;
	class Cavalier;
	class Roi;
	class Tour;
}

class classejeux::Case {
public:
	Case();
	Case(int posX, int posY);
	int avoirPositionX();
	int avoirPositionY();
	void changerX(int x);
	void changerY(int y);


private:
	int positionX_;
	int positionY_;
};

