#include <stdio.h>
#include <stdbool.h>
//caratteri
void verticale(); //   |    
void orizontale();//   -
void centrale();  //   +
void spartitore_destra(); // -|
void spartitore_sinistra(); // |-
void spartitore_basso(); // _|_
void spartitore_alto(); // -.-
void angolo_sinistra_basso(); // L
void angolo_sinistra_alto();  // :'
void angolo_destra_basso();  // _|
void angolo_destra_alto(); // -.
void spazio();    // " "
void nuova_riga(); //"\n"
//pezzi
void c();
int b_c(int quantita_barre);
int a(int quantita_barre);
int a_n(int quantita_spazzi);
void c_n();
int a_m(int quantita_barre);
int c_c(int quantita_barre);
void c_m();
int a_f(int quantita_barre);
int b_f(int quantita_barre);
void c_f();
//Usura
int b_c_perrighe;
int copia_b_c_perrighe_1;
int copia_b_c_perrighe_2;
int copia_b_c_perrighe_3;
int copia_b_c_perrighe_4;
int copia_b_c_perrighe_5;
int tenuta_copia;
int larghezza_quadrato = 5;
int locatione_hexadecimal = 0;

// Info e Input
void info();
int input_grandezza_casele();
int input_richiesta_orizontale();
int input_richiesta_verticale();
// hex
int numeri_hexadecimal(int cercato);

int main()
{
    info();
    int input_A;
    input_A = 6; //----------------->
    int input_B;  
    input_B = 20;
    larghezza_quadrato = 10;


    // |
    // |
    // |
    // V
    b_c_perrighe = input_A - 1;
    copia_b_c_perrighe_1 = b_c_perrighe;
    copia_b_c_perrighe_2 = input_A;
    copia_b_c_perrighe_3 = input_A - 1;
    copia_b_c_perrighe_4 = b_c_perrighe;

    if(input_A = 0)
    {
        printf("Ciao ragazzo! \n");
    }
    else
    {
        // .-----------(larghezza_quadrato)--------------
        a(larghezza_quadrato);
        int i = 0;
        while(i < copia_b_c_perrighe_1)
        {
                // -.------------------------------
                b_c(larghezza_quadrato);
                copia_b_c_perrighe_1 = copia_b_c_perrighe_1 - 1;
        }
        c();
        // Fine prima riga
        // In base al input uso questo
        // input 6 ------ ripeti qui 5volte
        tenuta_copia = input_B -1;
        i = 0;                //input 6    6x an+AM righe
        while (i<tenuta_copia) // ripete A_N + A_M                                   x5
        {
                //Aeprtura riga                                         |      spazio
                int j;
                j = 0;
                while(j < copia_b_c_perrighe_2)
                {
                    //6
                    a_n(locatione_hexadecimal);
                    j=j+1;
                    locatione_hexadecimal= locatione_hexadecimal +1;
                }
                c_n();
                //                                           chiusura riga   |
                //                                 CONTINUA RIGA "+-------------------"
                int cc;
                cc = 0;
                a_m(larghezza_quadrato);
                while (cc < copia_b_c_perrighe_3)
                {
                    c_c(larghezza_quadrato);
                    cc = cc + 1;
                }
                c_m();
                //fine riga
                i= i + 1;
        }
        //Aeprtura riga                                         |      spazio
        int r;
        r = 0;
        while(r < copia_b_c_perrighe_2)
        {
        //6
            a_n(larghezza_quadrato);
            r=r+1;
        }
        c_n();
        // .-----------(larghezza_quadrato)--------------
        a_f(larghezza_quadrato);
        i = 0;
        while( i < copia_b_c_perrighe_4)
        {
                // -.------------------------------
                b_f(larghezza_quadrato);
                copia_b_c_perrighe_4 = copia_b_c_perrighe_4 - 1;
        }
        c_f();
        //start unica volta eseguire

        //fine unica volta eseguire
    }
    






    return 0;
}
//-------------------------------------------------------------------------------------------------------------
//                                                   INFO & Input
void info()
{
    printf("\n");
    printf("                              ASCI (UCS)           \n");

}
int input_grandezza_casele()
{
    printf("");
    printf(".----   .-------     .----------- \n");
    printf("Inserisci la grandezza delle tue caselle : \n");
    int input_y;
    scanf("%d",&input_y);
    return input_y;
}
int input_richiesta_orizontale()
{
    //----------------->
    int input_x;
    printf("\n");
    printf(".----------.----------.--->  \n");
    printf("Inserisci numero quadrati orizontale : \n");
    scanf("%d",&input_x);
    printf("\n");
    return input_x;

}
int input_richiesta_verticale()
{
    
    // |
    // |
    // V
    int input_c;
    printf("\n");
    printf("| \n");
    printf("| \n");
    printf("| \n");
    printf("V \n");
    printf("Inserisci numero quadrati verticali: \n");
    scanf("%d",&input_c);
    printf("\n");
    return input_c;
}


//--------------------------------------------------------------------------------------------------------------
//                                                        PEZZI                                                     

void c_f()
{
    //orizontale();
    angolo_destra_basso();
    nuova_riga(); //FINE RIGA IN OGNI CASO
}
int b_f(int quantita_barre)
{
    int i;
    i = 0;
    spartitore_basso();
    while (i<quantita_barre)
    {
        orizontale();
        i=i+1;
    }
}

int a_f(int quantita_barre)
{
    int i;
    i = 0;
    quantita_barre = quantita_barre - 1 ;
    angolo_sinistra_basso();
    while (i<quantita_barre)
    {
        orizontale();
        i=i+1;
    }


}
void c_m()
{
    //orizontale();
    spartitore_destra();
    nuova_riga(); //FINE RIGA IN OGNI CASO
}

int c_c(int quantita_barre)
{
    int i;
    i = 0;
    centrale();
    while (i<quantita_barre)
    {
        orizontale();
        i=i+1;
    }
}


int a_m(int quantita_barre)
{
    int i;
    i = 1;
    spartitore_sinistra();
    while (i<quantita_barre)
    {
        orizontale();
        i=i+1;
    }
}


void c_n()
{
    //spazio();
    verticale();
    nuova_riga(); //FINE RIGA IN OGNI CASO
}
int a_n(int quantita_spazzi)
{
    
    verticale();
    int i;
    i = 0;

    numeri_hexadecimal(locatione_hexadecimal);
    /*
    while (i<quantita_spazzi)
    {
        spazio();
        i=i+1;
    }
    */
    

}
int b_c(int quantita_barre)
{
    spartitore_alto();
    int i;
    i = 0;
    while (i<quantita_barre)
    {
        orizontale();
        i=i+1;
    }
}
int a(int quantita_barre)
{
    angolo_sinistra_alto();
    int i;
    i = 0;
    while (i<quantita_barre)
    {
        orizontale();
        i=i+1;
    }
}

// chiusure 
void c()
{
    //orizontale();
    printf("%c", 191); //170 -191
    nuova_riga(); //FINE RIGA IN OGNI CASO
}
//--------------------------------------------------------------------------------------------------------------
//                                                     charatteri
void spazio()
{
    printf(" ");
    //spazio = "";
}
void nuova_riga()
{
   printf("\n"); 
}

void angolo_destra_basso()  // _|
{
    printf("%c", 217);
}
void angolo_sinistra_alto() //218-169 -.
{
    printf("%c", 218);
}
void angolo_sinistra_basso() //  L
{
    printf("%c%c", 192,196);                     //    PROBLEMA TROVATA
}
void spartitore_alto() // -.-
{
    printf("%c", 194);
}
void spartitore_basso()  //  _|_
{
    printf("%c", 193);
}
void spartitore_sinistra() // |-
{
    printf("%c%c", 195,196);                      // problema   printf("%c%c", 195,196);
}
void spartitore_destra() // -|
{
    printf("%c", 180);                       // problema printf("%c%c", 196,180);  
}
void centrale() // +
{
    printf("%c", 197);
}
void verticale() // |
{
    printf("%c", 179); //33-124-179
}
void orizontale() //-----
{
    printf("%c", 196); //45-196
}
int numeri_hexadecimal(int cercato)
{
	int i;
	i = cercato;
	if(i == 10)
    {
        printf("    ");
    }
	if(i < 10)
    {
        printf("    ");
    }
    if(i >= 11 && i <= 99)
    {
        printf("  ");
	}
	if(i >= 11 && i <= 15)
    {
        printf(" ");
	}
		if(i >= 100 && i <= 128)
    {
        printf(" ");
	}
	if(i == 13)
    {
        printf(" ");
    }  
    if(i >= 7 && i <=10)
    {
        printf(" -    ");
        return 0;
    }
    else if(i == 13)
    {
        printf(" -    ");
        return 0;
    }
    else
    {
        printf("%d %c %x ",i,i,i);
        return 0;
    }
}
