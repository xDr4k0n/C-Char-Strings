
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    const int MAXDIM = 100;
    char frase[MAXDIM+1]; 
    char frasemodificata[MAXDIM + 1]; 
    int lung_stringa;
    int i; 
    printf ("Inserisci una frase di al massimo %d caratteri: ", MAXDIM);
    gets(frase);
    lung_stringa = strlen(frase);
    printf("La frase inserita e’: ");
    puts(frase) ;
    printf("La frase contiene %d caratteri (inclusi gli spazi)\n", lung_stringa);
    for ( i=0; i<lung_stringa; i=i+1 )
    {
        if ( frase[i] == '.' )
        frasemodificata[i] = '\n' ;
        else
        frasemodificata[i] = frase[i];
    }
    frasemodificata[lung_stringa] = '\0';
    printf("La frase modificata e’: \n");
    puts(frasemodificata);
    exit(0) ;
}