#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>


int jogo(string word)
{
    int tamanho = strlen(word);
    int score = 0;
    for(int i = 0; i < tamanho; i++)
    {

        if(word[i] == 'D')
        {
            score += 2;
        }
        else if(word[i] == 'B' || word[i] == 'C' || word[i] == 'P')
        {
            score += 3;
        }
        else if(word[i] == 'F' || word[i] == 'H' || word[i] == 'V' || word[i] == 'W' || word[i] == 'Y' )
        {
            score += 4;
        }
        else if(word[i] == 'K')
        {
            score += 5;
        }
        else if(word[i] == 'J' || word[i] == 'X')
        {
            score += 8;
        }
        else if(word[i] == 'Q' || word[i] == 'Z')
        {
            score += 10;
        }
        else
        {
            score ++;
        }
    }
    return(score);

}
int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    int score1 = jogo(word1);
    int score2 = jogo(word2);

    if(score1 > score2)
    {
        printf("Jogador 1 ganhou \n");
    }
    else if(score1 < score2)
    {
        printf("jogador 2 ganhou \n");
    }
    else
    {
        printf("Empate\n");
    }


}
