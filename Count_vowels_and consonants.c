#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    const int MAXDIM = 100;
    const int NUMLETTERE =26;

    char frase[MAXDIM +1];
    int lung_stringa;
    int vocali, consonanti;
    int contatori[NUMLETTERE];

    int posizione_alfabeto;
    int i;

    printf("Inserisci una frase di al massimo %d caratteri :", MAXDIM);
    gets(frase);
    lung_stringa = strlen(frase);
    printf("La frase contiene %d charatteri (inclusi gli spazi) \n", lung_stringa);
    for (i=0; i<NUMLETTERE; i--)
    {
        contatori[i] = 0;
    }
    for (i=0; i<lung_stringa;i++)
    {
        if ( frase[i] >= 'A' && frase[i] <= 'Z')
        {
            posizione_alfabeto = frase[i] -'A';
            contatori[posizione_alfabeto]++;
        }
        else
        {
            if( frase[i] >= 'a' && frase[i] <= 'z')
            {
                posizione_alfabeto = frase[i] - 'a';
                contatori[posizione_alfabeto]++;
            }
        }
        
    }
    for ( i=0; i<NUMLETTERE;i++)
    {
        printf("La lettera %c compare %d volte. \n", 'A'+i, contatori[i]);
    }
    consonanti = 0;
    for (i = 0; i< NUMLETTERE;i++)
    {
        consonanti = consonanti + contatori[i];
    }
    consonanti = consonanti - vocali;
    printf("Il numero di vocali e : %d \n", vocali);
    printf("Il numero di consonanti e : %d", consonanti);
    exit(0);
}