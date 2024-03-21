#include <stdio.h>
#include <string.h>
typedef struct {
  char nome;
  int votos;
} candidato;

int main(void) {

  int qtd = scanf("Quantidade de votos:");
  candidato candidatos[qtd];

  for (int i = 0; i < qtd; i++) {
    char v = scanf("Inicial do candidato:");
    for (int i = 0; i < qtd; i++) {
      if (v == candidatos[i].nome) {
        candidatos[i].votos++;
      }
    }
  }
  for (int i = 0; i < qtd; i++) {
    printf("Candidato %i: %i votos", candidatos[i].nome, candidatos[i].votos);
  }
}
