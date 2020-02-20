#include <stdio.h>
#include <string.h>

int Fact(int paziente);

int Identify_string(char segment[],char found_copys[],int num_copys[]);
void Load_Char_0_9(char buff[]);
void Load_Char_a_z(char buff[]);
void Load_Char_A_Z(char buff[]);
void Load_0_Array(int buff[],int dim);

int main()
{
    char string_testing[80];
    int dim= 0;
    int dim2=0;
    int numeri_trovati[80];
    char coppie_trovate[80];
    string_testing[0]='\0';
    long long int factorial;
    printf("Inseri segment : \n");
    printf("----> ");
    scanf("%s", string_testing);
    dim2 =strlen(string_testing);
    printf("Dimensione -> %d \n",dim2);
    dim = Identify_string(string_testing,coppie_trovate,numeri_trovati);
    int k;
    printf("***********Copie************\n");
    for(k=0; k <= dim;k++)
    {
        printf("| ---%c---- | ---%02d--- | \n", coppie_trovate[k], numeri_trovati[k]);
    }
    if(dim < 2)
    {
        factorial = Fact(dim2);
        printf("Fattoriale (combinazioni): %lld \n", factorial);


    }
    




    return 0;
}
int Fact(int paziente)
{
   int fat =1;
   do
   {
      fat = fat * paziente;
      paziente--;
   }while (paziente != 1);
   return fat;
}


int Identify_string(char segment[],char found_copys[],int num_copys[])
{
    int x = 0;
    int paziente;


    //---------------------------Stringhe Trova--------------
    //string A-Z
    char segment_A_Z[26];
    Load_Char_A_Z(segment_A_Z);
    //string a-z
    char segment_a_z[27];
    Load_Char_a_z(segment_a_z);
    //string 0-9
    char segment_0_9[10];
    Load_Char_0_9(segment_0_9);
    //--------------------------------------------------------
    //----------carica trovato stringhe econta----------------
    int found_A_Z[26];
    int dim_lettere = 26;
    int found_a_z[26];
    int dim_numeri=10;
    int found_0_9[10];
    Load_0_Array(found_A_Z,dim_lettere);
    Load_0_Array(found_a_z,dim_lettere);
    Load_0_Array(found_0_9,dim_numeri);

    int c;
    int loc;
    loc = strlen(segment);
    while (x < loc)
    {
        paziente = (int)segment[x];


        if(paziente < 58 && paziente > 47) // appartiene a 0-9
        {
            c=0;
            while (c < 10)
            {
                if(segment[x] == segment_0_9[c])
                {
                    found_0_9[c] = found_0_9[c]+1;
                    c = 10;
                }
                //trovato e conta
                c++;
            }
        }
        else if (paziente < 91 && paziente > 64) // appartiene a A-Z
        {
            c=0;
            while (c < 27)
            {
                if(segment[x] == segment_A_Z[c])
                {
                    found_A_Z[c] = found_A_Z[c]+1;
                    c = 27;
                }
                //trovato e conta
                c++;

            }
            //trovato e conta
        }
        else if (paziente < 123 && paziente > 96) // appartiene a a-z
        {
            c=0;
            while (c < 27)
            {
                if(segment[x] == segment_a_z[c])
                {
                    found_a_z[c] = found_a_z[c]+1;
                    c = 27;
                }
                //trovato e conta
                c++;
            }
            //trovato e conta
        }
        x++;
    }

    //char found_copys[],int num_copys
    //int totale_num= 25+25+10;
    int k = 0;
    int trov = 0;

    for( k= 0 ;k <= 25; k++)
    {
        if(found_A_Z[k] > 1)
        {
            //char
            found_copys[trov] = segment_A_Z[k];
            num_copys[trov] = found_A_Z[k];
            trov++;
            //coppie 
        }
    }

    k = 0;

    for( k= 0 ;k <= 25; k++)
    {
        if(found_a_z[k] > 1)
        {
            //char
            found_copys[trov] = segment_a_z[k];
            num_copys[trov] = found_a_z[k];
            trov++;
            //coppie 
        }
    }
    k = 0;
    for( k= 0 ;k <= 10; k++)
    {
        if(found_0_9[k] > 1)
        {
            //char
            found_copys[trov] = segment_0_9[k];
            num_copys[trov] = found_0_9[k];
            trov++;
            //coppie 
        }
    }
   return (trov-1);
}

void Load_Char_0_9(char buff[])
{
    int x;
    int y=0;
    for (x=48; x < 58;x++,y++)
    {
        buff[y]= (char)x;
    }
}
//---------------------------------------------------------------------------------
void Load_Char_a_z(char buff[])
{
    int x;
    int y;
    for (x=97,y=0; x < 123;x++,y++)
    {
        buff[y]= (char)x;
    }
}
//---------------------------------------------------------------------------------
void Load_Char_A_Z(char buff[])
{
    int x;
    int y;
    for (x=65,y=0; x < 91;x++, y++)
    {
        buff[y]= (char)x;
    }
}
void Load_0_Array(int buff[],int dim)
{
    int i;
    for(i=0; i<= dim;i++)
    {
        buff[i]=0;
    }
}