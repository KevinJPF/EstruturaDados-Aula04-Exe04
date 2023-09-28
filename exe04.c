#include "fila.h"
#include "pilha.h"
#include <stdio.h>

int ttm(Fila F, Pilha P) { // tempo total mínimo
  int tempo = 0;
  do {
    printf("\nInicio Fila: %d", inicio(F));
    printf("\nTopo Pilha: %d\n", topo(P));
    if (inicio(F) != topo(P)) {
      enfileira(desenfileira(F), F);
    } else {
      desenfileira(F);
      desempilha(P);
    }
    tempo++;
  } while (!vaziaf(F));
  return tempo;
}

int main(void) {
  Fila F = fila(3);
  enfileira(2, F);
  enfileira(3, F);
  enfileira(1, F);

  Pilha P = pilha(3);
  empilha(2, P);
  empilha(3, P);
  empilha(1, P);

  printf("\nTempo total mínimo: %d\n\n", ttm(F, P));

  destroif(&F);
  destroip(&P);
  return 0;
}
