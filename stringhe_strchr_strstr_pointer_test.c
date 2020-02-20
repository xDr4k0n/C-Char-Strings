#include <stdio.h>
#include <string.h>

#define D 80

int main()
{
    char text[D]="Veni, vidi, vici!";
    //char traduzione_text[D]="I come, I saw, I conquered!";
    char *indicatore = NULL;
    //char *indicatore_2 = NULL;
    char search[D] = "Veni";
    //char search_2[D] = "!";
    indicatore = strstr(text,search);
    if(indicatore == NULL)
    {
        printf("No traccia \n");
    }
    else
    {
        printf("%s \n", indicatore);
    }
    return 0;
}