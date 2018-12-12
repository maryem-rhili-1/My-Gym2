#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "admin.h"
#include <gtk/gtk.h>




void ajouter(char login[],char password[])
{
	FILE *f;
	f = fopen("/home/dorra/Projects/project2/src/users.txt","a+");
	if(f!=NULL){
		fprintf(f,"%s %s \n", login, password);}
	fclose(f);

}

void afficher()
{
	FILE *f;
	char login[20],password[20];

	f=fopen("/home/dorra/Projects/project2/src/users.txt","r");
	
	
	while(fscanf(f,"%s %s ", login, password)!=EOF){
		printf("%s %s \n", login, password);
	}
	fclose(f);
}

int verifier(char login[],char password[])
{
	FILE *f;
	f=fopen("/home/dorra/Projects/project2/src/users.txt","r");
	
	char login1[20],password1[20];
	while(fscanf(f,"%s %s", login1, password1)!=EOF){
		if (strcmp(login1,login)==0 && strcmp(password1,password)==0)
		{ fclose(f);			return 1;
		}
	}
	fclose(f);
	return(0);
}



void enregistrer_staff( staff P )
{
	

Date dt_nais;

FILE *f;
       
	f=fopen("/home/dorra/Projects/project2/src/staffs.txt","a+"); 
	if(f==NULL){
		printf("erreur d'ouverture du fichier en mode w");
		return;
	}
	fprintf(f,"%s %s %s %d %d %d\n",P.Login,P.Role,P.Sexe,P.dt_nais.jour,P.dt_nais.mois,P.dt_nais.annee);
	fclose(f);
}
void ajouter_evt(evt e)
{
	FILE *f1;
       
	f1=fopen("/home/dorra/Projects/project2/src/evts.txt","a+");
	if(f1==NULL){
		printf("erreur d'ouverture du fichier en mode w");
		return;
	           }
	fprintf(f1,"%s %s %s\n",e.nom,e.date,e.prix);
	fclose(f1);
}
void enregistrer_adh( adh a)
{
	FILE *f;
       
	f=fopen("/home/dorra/Projects/project2/src/adh.txt","a+"); 
	if(f==NULL){
		printf("erreur d'ouverture du fichier en mode w");
		return;
	}
	fprintf(f,"%s %s\n",a.Login,a.Sexe);
	fclose(f);
}




void modifier_evt(evt a)
{          

	evt e ;
	FILE *f ;
        FILE *tmp;
	f=fopen("/home/dorra/Projects/project2/src/evts.txt","r");
	tmp=fopen("tmp.txt","a+");
	while(fscanf(f,"%s %s %s\n",e.nom,e.date,e.prix)!=EOF){
		if (strcmp(e.nom,a.nom)==0)

			   
			fprintf(tmp,"%s %s %s\n",a.nom,a.date,a.prix);}
		
	fclose(f);
	fclose(tmp);
	rename("tmp.txt","/home/dorra/Projects/project2/src/evts.txt");
}



void afficher_evt(GtkWidget *plistview)
{ 
enum { COL_NOM,
       COL_DATE,
       COL_PRIX,
       NUM_COLS
      };
evt e ;
GtkListStore *liststore;
GtkCellRenderer *celrender;
GtkTreeViewColumn *col;
liststore = gtk_list_store_new(NUM_COLS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
FILE *f;
f=fopen("/home/dorra/Projects/project2/src/evts.txt","r");
if(f!=NULL){
       while(fscanf(f,"%s %s %s",e.nom,e.date,e.prix)!=EOF){
           GtkTreeIter iter;
            gtk_list_store_append(liststore, &iter);
            gtk_list_store_set(liststore, &iter,
                          COL_NOM, e.nom,
		          COL_DATE, e.date,
		          COL_PRIX, e.prix,
                       -1);}
	celrender = gtk_cell_renderer_text_new();
	col = gtk_tree_view_column_new_with_attributes("nom",celrender,"text",COL_NOM,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

	celrender = gtk_cell_renderer_text_new();
	col = gtk_tree_view_column_new_with_attributes("date",celrender,"text",COL_DATE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

	celrender = gtk_cell_renderer_text_new();
	col = gtk_tree_view_column_new_with_attributes("prix",celrender,"text",COL_PRIX,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);


	gtk_tree_view_set_model (GTK_TREE_VIEW(plistview), GTK_TREE_MODEL (liststore));

}
fclose(f);
}




void supprimer_evt(char k_nom[50],char k_date[50],char k_prix[50])
{
FILE *f,*f1;
evt e;
f=fopen("/home/dorra/Projects/project2/src/evts.txt","r");
f1=fopen("/home/dorra/Projects/project2/src/tompo.txt","a+");
while(fscanf(f,"%s %s %s",e.nom,e.date,e.prix)!=EOF)
	{
if (!strcmp(e.nom,k_nom) )
		{
fprintf(f1,"%s %s %s\n",k_nom="",k_date="",k_prix="");

	
		}
else
fprintf(f1,"%s %s %s\n",e.nom,e.date,e.prix);
	}
fclose(f1);
fclose(f);
rename("/home/dorra/Projects/project2/src/tompo.txt","/home/dorra/Projects/project2/src/evts.txt");
}

void supprimer_adh(char k_login[50],char k_sexe[50])
{
FILE *f,*f1;
adh a;
f=fopen("/home/dorra/Projects/project2/src/adh.txt","r");
f1=fopen("/home/dorra/Projects/project2/src/tompo.txt","a+");
while(fscanf(f,"%s %s",a.Login,a.Sexe)!=EOF)
	{
if (!strcmp(a.Login,k_login) )
		{
fprintf(f1,"%s %s\n",k_login="",k_sexe="");

	
		}
else
fprintf(f1,"%s %s\n",a.Login,a.Sexe);
	}
fclose(f1);
fclose(f);
rename("/home/dorra/Projects/project2/src/tompo.txt","/home/dorra/Projects/project2/src/adh.txt");
}

























