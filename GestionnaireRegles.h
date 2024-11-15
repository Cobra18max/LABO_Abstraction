#include "Regle.h"
#include "Regle1.h"
#include "Regle2.h"
#include "Regle3.h"
#include "RegleComplexe.h"

class GestionnaireRegles {
public:
    static Regle* getRegle1() { return new Regle1(); }
    static Regle* getRegle2() { return new Regle2(); }
    static Regle* getRegle3() { return new Regle3(); }
    static Regle* getRegleComplexe() { return new RegleComplexe(); }
};
