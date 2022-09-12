#include <iostream>

#include <iostream>
#include <string>
#include "Langage.h"
#include "Mots_cles.h"

using namespace std;

int main()
{
    Langage L1("L1", "C++", 1);
    Langage L2(L1);
//
    Mots_cles M1("private");
    Mots_cles M2("public");
    Mots_cles M3("protected");

    L1.set_mots_cles(M1);
    L1.set_mots_cles(M2);
    L1.set_mots_cles(M3);

    cout<<"Liste des mots cles du langage L1(C++)"<<endl;
    for(int i=0; i <= L1.get_mots_cles().size(); i++){
        cout<<L1.get_mots_cles()[i].get_design()<<endl;
    }

    return 0;
}