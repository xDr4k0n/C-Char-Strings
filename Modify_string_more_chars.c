#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
const int MAXDIM = 100 ; 
char frase[MAXDIM + 1] ; 
char frasemodificata[2*MAXDIM + 1] ; 
int lung_stringa ;
int i, j ; 
printf ("Inserisci una frase di al massimo %d caratteri: ", MAXDIM) ;
gets(frase) ;
lung_stringa = strlen(frase) ;
printf("La frase inserita e’: ") ;
puts(frase) ;
printf("La frase contiene %d caratteri (inclusi gli spazi)\n", lung_stringa) ;
for ( i=0, j=0; i<lung_stringa; i++ )
{
    frasemodificata[j] = frase[i] ;
    j = j + 1 ;
    if ( frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
    {
        frasemodificata[j] = 'f' ;
        j = j + 1 ;
    }
    else
    {
        if ( frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U' )
            {
                frasemodificata[j] = 'F' ;
                j = j + 1 ;
            }
    }
}
frasemodificata[j] = '\0' ;
printf("La frase modificata e’: ") ;
puts(frasemodificata) ;
exit(0) ;
}