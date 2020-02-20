#include <stdio.h>
#include <string.h>

int main()
{
    const int lines = 10;
    const int long_lines =250;
    char text[lines][long_lines];
    int i;
    for (  i=0  ;  i<lines  ;  i++  )
    {
        printf("Inserisci text nella riga: [%i] ",i+1);
        gets(text[i]);
    }
    for (  i=0  ;  i<lines  ;  i++  )
    {
        printf("[%d]-> %s \n",i+1,text[i]);
    }
    return 0;
}