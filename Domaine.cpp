//
// Created by ADMIN on 12/09/2022.
//

#include "Domaine.h"

Domaine::Domaine(string design) {
    designDomaine = design;
}

Domaine::Domaine(Domaine &design) {
    designDomaine = design.designDomaine;

}

Domaine::Domaine() {
    designDomaine = "";
}

string Domaine::getDesignDomaine() {
    return designDomaine;
}

void Domaine::setDesignDomaine(string designDomaine) {
    Domaine::designDomaine = designDomaine;
}
