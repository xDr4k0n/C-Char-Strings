#include <stdio.h>
#include <string.h>

#define G_msg 30

int main()
{
    char stringa[G_msg];
    int pozitione;
    pozitione = 0;
    printf("Inserisci parola da manovrare : \n");
    scanf("%s", stringa);
    printf("\n");
    while ( stringa[pozitione] != '\0' )
    {
        printf("%c", stringa[pozitione]);
        pozitione++;
    }
    return 0;
}
