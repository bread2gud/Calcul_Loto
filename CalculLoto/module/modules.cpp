#include "modules.h"

int factorielle(int n) {
    if (n==0) {
        return 1;
    }
    return n * factorielle(n-1) ;
}

int calculeNbCombinaisons(int n, int k) {
    int comb =
        factorielle(n)
        /
        (factorielle(k) * factorielle(k-1));
    return comb * 2;
}


