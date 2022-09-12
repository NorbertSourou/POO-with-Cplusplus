//
// Created by ADMIN on 11/09/2022.
//

#include "Langage.h"

using namespace std;


Langage::Langage() {
    codeLangage = "";
    nomLangage = "";
    rangMondial = 0;
}

Langage::Langage(string c, string n, int r) {
    codeLangage = c;
    nomLangage = n;
    rangMondial = r;
}

Langage::Langage(const Langage &l) {
    codeLangage = l.codeLangage;
    nomLangage = l.nomLangage;
    rangMondial = l.rangMondial;
    mots_cles = l.mots_cles;
}

string Langage::getNomLangage() {
    return nomLangage;
}

void Langage::set_mots_cles(Mots_cles m) {
    mots_cles.push_back(m);
}

vector<Mots_cles> Langage::get_mots_cles() {
    return mots_cles;
}

const string &Langage::getCodeLangage() const {
    return codeLangage;
}

void Langage::setCodeLangage(const string &codeLangage) {
    Langage::codeLangage = codeLangage;
}

void Langage::setNomLangage(const string &nomLangage) {
    Langage::nomLangage = nomLangage;
}

int Langage::getRangMondial() const {
    return rangMondial;
}

void Langage::setRangMondial(int rangMondial) {
    Langage::rangMondial = rangMondial;
}

const vector<Mots_cles> &Langage::getMotsCles() const {
    return mots_cles;
}

void Langage::setMotsCles(const vector<Mots_cles> &motsCles) {
    mots_cles = motsCles;
}
