#include <gtk/gtk.h>

typedef struct{
int jour;
int mois;
int annee;
}Date;

typedef struct{
char Login[50];
char Role[50];
char Sexe[50];
Date dt_nais;
}staff;

typedef struct{
char Login[50];
char Sexe[50];
}adh;


typedef struct{

char nom[50];
char date[50];
char prix[50];;
}evt;


void ajouter(char login[],char password[]);
void afficher();
int verifier(char login[],char password[]);

void enregistrer_staff( staff P );
void enregistrer_adh( adh a);
void modifier_evt(evt a);
void afficher_evt(GtkWidget *plistview);
void supprimer_evt(char k_nom[],char k_date[],char k_prix[]);
void supprimer_adh(char k_login[],char k_sexe[]);


