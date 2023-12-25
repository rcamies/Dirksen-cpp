/****************************************************************************************************
 *    P02-F03       Toekennen van waarden aan de afzonderlijke gegevenselementen van een structuur  *
 *                  en aan een gehele structuur                                                     *
 ****************************************************************************************************/

#include <iostream>     // Bibliotheek met cin, cout en cerr
#include <conio.h>      // Bibliotheek met putch en getch
#include <iomanip>      // Bibliotheek met IO-manipulatoren
#include <string.h>     // bibliotheek met string-functies
#include <stdio.h>      // bibliotheek met printf-functie

struct verjaardag           // structuurdefinitie
{
    char dag[9];
    char maand[10];
    char jaar[5];
};

typedef struct verjaardag Verj_dag;  // Definitie van de naam van dit nieuwe type

using namespace std;

void main(void)
{
    Verj_dag var1, var2, var3;  // definitie 3 variabelen van structuurtype Verj_dag
    Verj_dag *z_var3;           // definitie 1 pointervariabele naar structuurtype Verj_dag

    z_var3 = &var3;         // adres van var3 toewijzen aan z_var3

    strcpy(var1.dag, "maandag");    // toekenning waarde aan afzonderlijk gegevenselement
    strcpy(var1.maand, "januari");
    strcpy(var1.jaar, "1991");

    var2 = var1;                           // toekenning waarde aan een gehele structuur
    var3 = var1;

    printf("\n\t Afdrukken van structuurvariabele 'var2', ");
    printf("\n\t die is geadresseerd via de punt-operator.");
    printf("\n\t Dag:\t %8s", var2.dag);
    printf("\n\t Maand:\t%9s", var2.maand);
    printf("\n\t Jaar:\t  %4s", var2.jaar);

    printf("\n\t Afdrukken van structuurvariabele 'var3',");
    printf("\n\t geadresseerd via de verwijzing-operator.");
    printf("\n\t Dag:\t %8s", z_var3->dag);
    printf("\n\t Maand:\t%9s", z_var3->maand);
    printf("\n\t Jaar:\t  %4s", z_var3->jaar);

    cout << "\n\n\nDruk op een toets: " << flush;
    getch();

}

