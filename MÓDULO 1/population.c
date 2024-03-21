#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start;
    int final;

    do
    {
        start = get_int("lhamas inicialmente:");
    }
    while (start < 1);

    do
    {
        final = get_int("lhamas finalmente:");
    }
    while (final < start);
    int anos = 0;
    int mortes = 0;
    int nascimentos = 0;

    while (start < final)
    {
        mortes = start / 4;
        nascimentos = start / 3;
        start = start + nascimentos - mortes;
        anos++;
    }
    printf("%i \n", anos);
    // TODO: Imprima o número de anos
}