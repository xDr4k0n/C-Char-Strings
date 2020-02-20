#include <stdio.h>
#include 'func.c'

int cmp_stringa(char segment1[],char segment2[]);

int main()
{
    char text[]="Z";
    char text2[]="A";
    int rit;
    rit = cmp_stringa(text,text2);
    printf("%d \n",rit);

    return 0;
}

int cmp_stringa(char segment1[],char segment2[])
{
    int aiuto;
    int aiuto2;
    int x = 0;
    while(segment2[x] != '\0')
    {
        aiuto = (int)segment1[x]; 
        aiuto2 =(int)segment2[x];
        if(aiuto > aiuto2)
        {
            return 1;
        }
        else if (aiuto < aiuto2)
        {
           return -1;
        }
        x++;
    }
    return 0;
    
}




