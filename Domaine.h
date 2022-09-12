//
// Created by ADMIN on 12/09/2022.
//

#ifndef ENECK_DOMAINE_H
#define ENECK_DOMAINE_H

#include <string>

using namespace std;

class Domaine {
private:
    string designDomaine;

public:
    Domaine();

    Domaine(string designDomaine);

    Domaine(Domaine &);

    string getDesignDomaine();

    void setDesignDomaine(string designDomaine);

};


#endif //ENECK_DOMAINE_H
