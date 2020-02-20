#include <stdio.h>
#include <string.h>
int main()
{
    char stringa[]="|string.h è l'header file della libreria standard del C che contiene definizioni di macro|\n";
    char da_concatenare[]="|Concatenates two strings| \n";
    printf("-------------------------------------------------------\n");
    printf("%s \n",stringa);
    printf("-------------------------------------------------------\n");
    printf("%s \n",da_concatenare);
    printf("-------------------------------------------------------\n");
    printf("strcat(stringa,da_concatenare); -->\n");
    strcat(stringa,da_concatenare);
    printf("%s",stringa);
    printf("-------------------------------------------------------\n");
    printf("strcat(da_concatenare,stringa); -->\n");
    strcat(da_concatenare,stringa);
    printf("%s",da_concatenare);
    printf("-------------------------------------------------------\n");
    return 0;
}