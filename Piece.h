/**
* Projet Final
* \file   Piece.h
* \auteur Alexis LeBlanc et Zakaria Zair
* \date	6 mai 2022
* Créé le 9 avril 2022
*/

#pragma once

#include "Case.h"
#include "Jeux.h"
#include <memory>
#include <string>
#include <vector>

namespace classejeux {
	class Joueur;
	class Piece;
	class Jeux;
	class Case;
	class Cavalier;
	class Roi;
	class Tour;
}

class classejeux::Piece {
public:
	Piece();
	Piece(const Jeux& jeux);
	virtual ~Piece() = default;

	static int positionInitialeX;
	static int positionInitialeY;
	std::shared_ptr<Case> avoirPosition();
	bool estMangeable() { return mangeable; }
	virtual std::string avoirCharNoir() = 0;
	virtual std::string avoirCharBlanc() = 0;
	virtual std::vector<std::shared_ptr<Case>> mouvementsValide(Jeux jeu, Joueur& joueur, Joueur& autreJoueur) = 0;
	bool autrePieceAmis(std::shared_ptr<Case> cas, Joueur joueur);
	bool autrePieceEnnemi(std::shared_ptr<Case> cas, Joueur joueur);
	std::shared_ptr<Case> position_;
	void afficherPos();
	

protected:
	std::string characterBlanc_;
	std::string characterNoir_;
	bool mangeable;
};