/**
* Projet Final
* \file   main.cpp
* \auteur Alexis LeBlanc et Zakaria Zair
* \date	6 mai 2022
* Créé le 9 avril 2022
*/

#include <iostream>
#include <Qapplication>
#include "Jeux.h"
#include "Cavalier.h"
#include "Roi.h"
#include "Tour.h"
#include "Joueur.h"
#include "Piece.h"
#include "ProjetFinalEchec.h"

#if __has_include("bibliotheque_cours.hpp")
#include "bibliotheque_cours.hpp"
#define BIBLIOTHEQUE_COURS_INCLUS
using bibliotheque_cours::cdbg;
#else
auto& cdbg = clog;
#endif

#if __has_include("verification_allocation.hpp")
#include "verification_allocation.hpp"
#include "debogage_memoire.hpp"  
#endif

void initialiserBibliothequeCours([[maybe_unused]] int argc, [[maybe_unused]] char* argv[])
{
#ifdef BIBLIOTHEQUE_COURS_INCLUS
    bibliotheque_cours::activerCouleursAnsi();  


    bibliotheque_cours::executerGoogleTest(argc, argv);
#endif
}

int main(int argc, char *argv[])
{
    bibliotheque_cours::VerifierFuitesAllocations verifierFuitesAllocations;
    QApplication app(argc, argv);
    initialiserBibliothequeCours(argc, argv);
    
    // Création des joueurs    
    classejeux::Joueur blanc("Alexis");
    classejeux::Joueur noir("Zak");
    
    // Création du jeux
    classejeux::Jeux jeux;
   
 
    ProjetFinalEchec echec(blanc, noir, jeux);
    echec.show();

    return app.exec();
}
