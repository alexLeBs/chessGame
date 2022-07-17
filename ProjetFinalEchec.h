/**
* Projet Final
* \file   ProjetFinalEchec.h
* \auteur Alexis LeBlanc et Zakaria Zair
* \date	6 mai 2022
* Cr�� le 9 avril 2022
*/

#pragma once

#include <QtWidgets/QMainWindow>
#include <QMouseEvent>
#include <QLabel>
#include <vector>
#include "Joueur.h"
#include "Piece.h"
#include "Cavalier.h"
#include "Roi.h"
#include "Tour.h"

class ProjetFinalEchec : public QMainWindow
{
    Q_OBJECT

public:

    ProjetFinalEchec(classejeux::Joueur& joueurUn, classejeux::Joueur& joueurDeux, classejeux::Jeux jeuEchec, QWidget *parent = Q_NULLPTR);
    virtual void mousePressEvent(QMouseEvent* event) override;
    virtual void mouseReleaseEvent(QMouseEvent* event) override;

    void couleurBoardNormal();
    void couleurBoardEchec();


    void option1();
    void option2();
    void option3();
    void option();

private slots:
    void miseEnJeu();

    void stopJeu();

    void miseEnMenu();

    void changeOption1();
    void changeOption2();
    void changeOption3();
    

private:
    classejeux::Joueur& j1;
    classejeux::Joueur& j2;
    classejeux::Jeux jeu;

    bool jeuParti = false;

    classejeux::Joueur* tourJoueur;
    classejeux::Joueur* autreJoueur;
    std::optional<std::pair<int, int>> caseCliquee;
    QLabel* arrayLabel[8][8];
    int optionCompteur = 0;
};
