#include <stdio.h>
#include "pilha.h"
#include "fila.h"
int ttm(Fila F, Pilha P) { // tempo total mínimo
 //
}
int main(void) {
 Fila F = fila(3);
 enfileira(2,F);
 enfileira(3,F);
 enfileira(1,F);
 Pilha P = pilha(3);
 empilha(2,P);
 empilha(3,P);
 empilha(1,P);
 printf("\nTempo total mínimo: %d\n\n", ttm(F,P) );
 destroif(&F);
 destroip(&P);
 return 0;
}
