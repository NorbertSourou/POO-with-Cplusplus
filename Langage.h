//
// Created by ADMIN on 11/09/2022.
//

#ifndef ENECK_LANGAGE_H
#define ENECK_LANGAGE_H


#include <string>
#include <vector>
#include "Mots_cles.h"

class Langage {
private:
    string codeLangage;
    string nomLangage;
    int rangMondial;

    vector<Mots_cles> mots_cles;

public:
    Langage();

    Langage(string, string, int);

    Langage(const Langage &);

    const string &getCodeLangage() const;

    void setCodeLangage(const string &codeLangage);

    void setNomLangage(const string &nomLangage);

    int getRangMondial() const;

    void setRangMondial(int rangMondial);

    const vector<Mots_cles> &getMotsCles() const;

    void setMotsCles(const vector<Mots_cles> &motsCles);

    void set_mots_cles(Mots_cles);

    vector<Mots_cles> get_mots_cles();

    string getNomLangage();
};


#endif //ENECK_LANGAGE_H
