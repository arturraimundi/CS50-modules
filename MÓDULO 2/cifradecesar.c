#include <cs50.h>
#include <stdio.h>
#include <string.h>

string cifra(void)
{
    string palavra = get_string("palavra a ser codificada:");
    int tamanho = strlen(palavra);
    int key = get_int("key:");
    int resultado;

    for (int i = 0; i < tamanho; i++)
    {
        resultado = (int) palavra[i] + key;
        printf("%c", resultado);
    }
    return ("");
}

int main(void)
{
    cifra();
    printf("\n");
}
