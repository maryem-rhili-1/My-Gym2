#include <gtk/gtk.h>

void ajouter(char nom[],char prenom[],char age[],char poids[],char taille[],char maladie[]);
void afficher1(GtkWidget *plistview);
void afficher2(GtkWidget *plistview);
void supprimer_fiche_medicale(char nom[],char prenom[],char age[],char poids[],char taille[],char maladie[]);
void modifier_fiche_medicale(char nom[],char prenom[],char age[],char poids[],char taille[],char maladie[]);
void afficher3(GtkWidget *plistview);
void DeleteLine(const int line,const int index);
void ajouter_dispo(char jour[50],char mois[50],char annee[50] ,char Heurs[50]);
