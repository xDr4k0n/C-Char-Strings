#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define Grandezza_fissa_stringa 41

//Experimental
void ordinamento_stringa(char stringa_charatteri[]);
//---------------------
void transformers_binario(int paziente);
void stampa_informazioni(char memoria[]);
void stampa_solo_msg();
void lavoro_optione_2(char msg_1[],char msg_2[]);
void visualizza_vettore(int vet[],int dim);
// Menu e "Semi-Menu" del programma
int menu();
void info_entry_1();
int menu_inserimento_stringa(char stringa_text[]);
void menu_copia_stringa();

//-----------------------------------------Main-------------------------------------------
int main()
{
    bool conditione = false;
    int scelta = 1;
    char stringa_di_lavoro[Grandezza_fissa_stringa];
    char stringa_di_lavoro2[Grandezza_fissa_stringa];
    int decisioni_secondarie;
    int ritorno_comparazione;
    do
    {
        scelta = menu();
        switch(scelta)
        {
            case 1:
            {
                // Inserimento stringa 
                do
                {
                    info_entry_1();
                    scanf("%s", &stringa_di_lavoro);
                    decisioni_secondarie = menu_inserimento_stringa(stringa_di_lavoro);
                } while (decisioni_secondarie != 2);
                break;
            }
            case 2:
            {
                stampa_informazioni(stringa_di_lavoro);
                break;
            }
            case 3:
            {
                menu_copia_stringa();
                // lavoro_optione_2(stringa_di_lavoro,stringa_di_lavoro2);
                printf("Usando il commando   'strcpy(s1, s2)' \n");
				printf(">>>>>>>>>>>Sovrascrivere<<<<<<<<<<<<<< \n");
                printf("Inserisci stringa 1 : \n");
                scanf("%s", &stringa_di_lavoro);
                printf("Inserisci stringa 2 : \n");
                scanf("%s", &stringa_di_lavoro2);
                strcpy(stringa_di_lavoro,stringa_di_lavoro2);
                printf("Usando il commando   'strcpy(stringa1, stringa2)' : \n");
                printf("Stringa 1 : %s, \n",stringa_di_lavoro);
                printf("Stringa 2 : %s \n",stringa_di_lavoro2);
                break; 
            }
             case 4:
            {
            	printf("Usando il commando   'strcat(s1, s2)' \n");
            	printf(">>>>>>>>>>>Aggiungere<<<<<<<<<<<<<< \n");
                printf("Inserisci stringa 1 : \n");
                scanf("%s", &stringa_di_lavoro);
                printf("Inserisci stringa 2 : \n");
                scanf("%s", &stringa_di_lavoro2);
                strcat(stringa_di_lavoro,stringa_di_lavoro2);
                printf("Usando il commando   'strcat(stringa1, stringa2)' : \n");
                printf("Stringa 1 : %s, \n",stringa_di_lavoro);
                printf("Stringa 2 : %s \n",stringa_di_lavoro2);
                break; 
            }
             case 5:
            {
            	printf(">>>>>>>>>>>Dimensione<<<<<<<<<<<<<< \n");
            	printf("Inserisci stringa  : \n");
                scanf("%s", &stringa_di_lavoro);
                printf("La dimensione della tua stringa e : %d \n", strlen(stringa_di_lavoro));
                break; 
            }
             case 6:
            {

                printf("Usando il commando   'strcmp(s1, s2)' \n");
            	printf(">>>>>>>>>>>Comparazione<<<<<<<<<<<<<< \n");
                printf("Inserisci stringa 1 : \n");
                scanf("%s", &stringa_di_lavoro);
                printf("Inserisci stringa 2 : \n");
                scanf("%s", &stringa_di_lavoro2);
                ritorno_comparazione = strcmp(stringa_di_lavoro,stringa_di_lavoro2);
                if(ritorno_comparazione == 0)
                {
                    printf("Le due stringhe sono uguali ! \n");
                }
                else
                {
                    printf("Le due stringhe NON sono uguali ! \n");
                }
                
                break; 
            }
             case 7:
             {
                 printf(">>>>>>>>Experimental<<<<<<<<< \n");
                 printf("Inserisci stringa 'max 40' : \n");
                 printf(">>>>>>>>>>>>>><<<<<<<<<<<<<<< \n");
                 scanf("%s", &stringa_di_lavoro);
                 ordinamento_stringa(stringa_di_lavoro);
                 break;
             }

        }
    } while (scelta != 8 );
    return 0;


}
//-----------------------------------------Fine Main-------------------------------------------
void stampa_informazioni(char memoria[])
{
    int i = 0;
    int per_binario_numero;
    printf("Char - Memory Location - Hex - Decimale - Binario\n");
    printf("...........................................\n");
    while (memoria[i] != '\0')
	{
		printf("  %c  - ", memoria[i]);
		printf("     %x -  ", &memoria[i]);
		printf("    %x -  ", memoria[i]);
		printf(" %d  -  ", (int)memoria[i]);
		per_binario_numero = (int)memoria[i];
		transformers_binario(per_binario_numero);
		printf("\n");
		i++;
	}
}


void menu_copia_stringa()
{
    //3)    Copia stringa a unaltra stringa
    printf("---------------------------------------------------\n");
    printf("|       Copia stringa a unaltra stringa           |\n");
    printf("---------------------------------------------------\n");
    printf("    Devi inserire 2 stringhe(max 40 digit each)    \n");
    printf("---------------------------------------------------\n");
}
int menu()
{
    int decisione;
    printf("---------------------------------------------------\n");
    printf("-    Programma che opera sulle tringhe!           -\n");
    printf("---------------------------------------------------\n");
    printf("-1)            Inserimento stringa                -\n");
    printf("-                (Max 40 digits)                  -\n"); 
    printf("---------------------------------------------------\n"); 
    printf("-2)     Informazioni sulla stringa inserita       -\n");
    printf("-  Char | Memory Address| Hex | Decimal | Binario -\n");
    printf("---------------------------------------------------\n");  
    printf("-3)    Copia stringa a unaltra stringa            -\n");
    printf("---------------------------------------------------\n");      
    printf("-4) Copia tringa alla fine del laltra stringa     -\n");
    printf("---------------------------------------------------\n");       
    printf("-5)           Grandezza stringa                   -\n");
    printf("---------------------------------------------------\n");      
    printf("-6)         Comparazione stringa                  -\n");
    printf("---------------------------------------------------\n");
    printf("-7)   Ordinazione della stringa >>Experimental<<  -\n"); 
    printf("---------------------------------------------------\n");
    printf("-8)                   Exit                         \n"); 
    printf("---------------------------------------------------\n");         
    printf("Inserisci decisione :\n");   
	scanf("%d", &decisione);                                                             
    return decisione;
}

int menu_inserimento_stringa(char stringa_text[])
{
    int decisione;
    printf("---------------------------------------------------------------\n"); 
    printf("-    Il testo della tua stringa e :\n %s \n", stringa_text);
    printf("---------------------------------------------------------------\n"); 
    printf("     Per RE-inserire la tua striga inerisci     (1)          - \n");
    printf("     Per tornare al menu principale inserisci   (2)          - \n");
    printf("---------------------------------------------------------------\n"); 
    scanf("%d", &decisione);
    return decisione;
}

void info_entry_1()
{
    printf("---------------------------------------------------\n");
    printf("-            Inserisci il tuo testo!              -\n");
    printf("-    Atenzione! non piu grande di 40 charatteri   -\n");
    printf("---------------------------------------------------\n");
}
/*
void lavoro_optione_2(char msg_1[],char msg_2[])
{
    printf("Usando il commando   'strcpy(s1, s2)' \n");
    printf("Inserisci stringa 1 : \n");
    scanf("%s", &msg_1);
    printf("Inserisci stringa 2 : \n");
    scanf("%s", &msg_2);
    strcpy(msg_1,msg_2);
    printf("Usando il commando   'strcpy(stringa1, stringa2)' : \n");
    printf("Stringa 1 : %s, \n",msg_1);
    printf("Stringa 2 : %s \n",msg_1);
}
*/
void visualizza_vettore(int vet[],int dim)
{
    int i;
    for (i=0;i<=dim;i++)
    {
        printf("%d) NR : %d \n", i+1, vet[i]);
    }
}
void ordinamento_stringa(char stringa_charatteri[])
{
	int i;
	int array[Grandezza_fissa_stringa];
	int dim = strlen(stringa_charatteri);
	for(i=0;i<dim;i++)
	{
		array[i] = stringa_charatteri[i];
	}
    int aiuto;
    int m;
    int k;
    int g;
    printf("Stringa dis-ordinata , visualizzata in decimale :\n");
    visualizza_vettore(array,dim-1);
    for(k=0;k<dim;k++)
    {
        i = k;
        for(m = dim-1 ;i <= m; m--)
        {
            if(array[m] > array[m+1])
            {
                aiuto = array[m];
                array[m] = array[m+1];
                array[m+1] = aiuto;
            }
        }
    }
    printf("\n\n----------------------------------------------------\n\n");
    printf("Stringa ordinata , visualizzatain decimale :\n");
    visualizza_vettore(array,dim-1);
	printf("\n\n----------------------------------------------------\n\n");
	for(i=0;i<dim;i++)
	{
		printf("%c",array[i]);
	}
    printf("\n\n----------------------------------------------------\n\n");


}
