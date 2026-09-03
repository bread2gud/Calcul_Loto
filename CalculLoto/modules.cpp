#include "modules.h"

#include <cassert>

int factorielle(int n) {
    assert(n >= 0);
    assert(n <= 12);
    if (n==0) {
        return 1;
    }
    return n * factorielle(n-1) ;
}

int calculeNbCombinaisons(int n, int k) {
    assert(n >= 0);
    assert(n <= 12);
    assert(k >= 0);
    assert(k <= n);
    int comb =
        factorielle(n)
        /
        (factorielle(k) * factorielle(n-k));
    return comb ;
}


