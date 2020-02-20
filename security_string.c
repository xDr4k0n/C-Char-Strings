#include <stdio.h>
#include <string.h>

#define Max 30
#define Maximum 40
int main()
{
    char my_segment[Max];
    char arg[Max];
    char memory_save[Maximum];
    printf("Insert 1st string : \n");
    scanf("%s",arg);
    printf("Insert 2st string : \n");
    scanf("%s",my_segment);
    printf("\n");
    puts(my_segment);
    printf("\n");
    puts(arg);
    printf("------------------------>\n");
    if(strlen(arg)+strlen(my_segment) <= Maximum)
    {
        strcat(memory_save,my_segment);
        strcat(memory_save,arg);
    }
    else
    {
        printf("ERROR");
    }
        puts(memory_save);
    


    return 0;
}