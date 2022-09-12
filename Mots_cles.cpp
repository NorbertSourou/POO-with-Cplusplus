//
// Created by ADMIN on 11/09/2022.
//

#include <string>
#include "Mots_cles.h"

using namespace std;

Mots_cles::Mots_cles() {
    design = "";
}

Mots_cles::Mots_cles(string d) {
    design = d;
}

string Mots_cles::get_design() {
    return design;
}

void Mots_cles::set_design(string d) {
    design = d;
}