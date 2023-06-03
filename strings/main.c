#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int qntVog = 0, qntEsp = 0, qntCon = 0, qntPal = 1, i, j = 0, c = 0, aux = 0;
    char frase[101] = "a";

    printf("Digite uma frase: ");
    ///Obs.: Não admite-se números ou acentuações.
    fgets(frase, 100, stdin);

    strlwr(frase);

    for(i = 0; i < sizeof(frase); i++)
    {
        if ((frase[i] == 'a') || (frase[i] == 'e') || (frase[i] == 'i')
         || (frase[i] == 'o') || (frase[i] == 'u'))
        {
            qntVog++;
        }
        if ((frase[i] != ' ') && (frase[i+1] == ' ' ))
        {
            qntPal++;
        }
        if ((frase[i] == ' ') || (frase[i] == '\n'))
        {
            qntEsp++;
        }
    }

    qntCon = strlen(frase) - qntVog - qntEsp;

    printf("\n\nQuantidade de vogais: %d", qntVog);
    printf("\n\nQuantidade de consoantes: %d", qntCon);
    printf("\n\nQuantidade de palavras: %d\n", qntPal);

    printf("\n\nFrequencia dos caracteres inseridos:\n\n");

    for (j = 0; j < 26; j++)
    {
        c = 0; aux = 0;
        while (c < sizeof(frase))
        {
            if (frase [c] == (j + 'a'))
            {
                aux++;
            }
            if ((frase[c] == '\n') && (aux != 0))
            {
                printf("\t%c - %d\n", toupper(j + 'a'), aux);
            }
        c++;
        }
    }
    return 0;
}
