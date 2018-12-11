#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>

#define BUFFER_SIZE 1000


/* --------------fonction--------------------*/


void ajouter(char nom[],char prenom[],char age[],char poids[],char taille[],char maladie[])
{
        FILE *f;
        f = fopen("/home/mariem/Projets/mygym3/src/liste.txt","a+");
        if(f!=NULL){
                fprintf(f,"%s %s %s %s %s %s\n",nom,prenom,age,poids,taille,maladie);
        }
        fclose(f);
}




void afficher1(GtkWidget *plistview)
{ 
enum { COL_NOM,
       COL_PRENOM,
       COL_AGE,
       COL_POIDS,
       COL_TAILLE,
       COL_MALADIE,
       NUM_COLS
      };
char nom[20],prenom[20],maladie[20],age[100],poids[200],taille[200];
GtkListStore *liststore;
GtkCellRenderer *celrender;
GtkTreeViewColumn *col;
GtkTreeIter *iter;
liststore = gtk_list_store_new(NUM_COLS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
FILE *f;
f=fopen("/home/mariem/Projets/mygym3/src/liste.txt","r");
if(f!=NULL){
       while(fscanf(f,"%s %s %s %s %s %s",nom,prenom,age,poids,taille,maladie)!=EOF){
           GtkTreeIter iter;
            gtk_list_store_append(liststore, &iter);
            gtk_list_store_set(liststore, &iter,
                          COL_NOM, nom,
                          COL_PRENOM, prenom,
                          COL_AGE, age,
                          COL_POIDS, poids, 
                          COL_TAILLE, taille,
                          COL_MALADIE, maladie,
                       -1);}
        celrender = gtk_cell_renderer_text_new();
        col = gtk_tree_view_column_new_with_attributes("nom",celrender,"text",COL_NOM,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

        celrender = gtk_cell_renderer_text_new();
        col = gtk_tree_view_column_new_with_attributes("prenom",celrender,"text",COL_PRENOM,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

        celrender = gtk_cell_renderer_text_new();
        col = gtk_tree_view_column_new_with_attributes("age",celrender,"text",COL_AGE,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

        celrender = gtk_cell_renderer_text_new();
        col = gtk_tree_view_column_new_with_attributes("poids",celrender,"text",COL_POIDS,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

        celrender = gtk_cell_renderer_text_new();
        col = gtk_tree_view_column_new_with_attributes("taille",celrender,"text",COL_TAILLE,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

        celrender = gtk_cell_renderer_text_new();
        col = gtk_tree_view_column_new_with_attributes("maladie",celrender,"text",COL_MALADIE,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);
        
        gtk_tree_view_set_model (GTK_TREE_VIEW(plistview), GTK_TREE_MODEL (liststore));

}
fclose(f);
}


void afficher2(GtkWidget *plistview)
{ 
enum { COL_ROLE,
       COL_HEURE,
       COL_DISPONIBILITE,
       COL_LOGIN,       
       NUM_COLS
      };
char role[20],disponibilite[20],heure[20],login[60];
GtkListStore *liststore;
GtkCellRenderer *celrender;
GtkTreeViewColumn *col;
liststore = gtk_list_store_new(NUM_COLS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
FILE *f;
f=fopen("/home/mariem/Projets/mygym3/src/rendezvous.txt","r");
if(f!=NULL){
       while(fscanf(f,"%s %s %s %s",role,heure,disponibilite,login)!=EOF){
            GtkTreeIter iter;
            gtk_list_store_append(liststore, &iter);
            gtk_list_store_set(liststore, &iter,
                          COL_ROLE, role,
                          COL_HEURE, heure,
                          COL_DISPONIBILITE, disponibilite,
                          COL_LOGIN, login,
                       -1);}
        celrender = gtk_cell_renderer_text_new();
        col = gtk_tree_view_column_new_with_attributes("ROLE",celrender,"text",COL_ROLE,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

        celrender = gtk_cell_renderer_text_new();
        col = gtk_tree_view_column_new_with_attributes("HEURE",celrender,"text",COL_HEURE,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

        celrender = gtk_cell_renderer_text_new();
        col = gtk_tree_view_column_new_with_attributes("DISPONIBILITE",celrender,"text",COL_DISPONIBILITE,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);
        
        celrender = gtk_cell_renderer_text_new();
        col = gtk_tree_view_column_new_with_attributes("LOGIN",celrender,"text",COL_LOGIN,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);


        gtk_tree_view_set_model (GTK_TREE_VIEW(plistview), GTK_TREE_MODEL (liststore));

}
fclose(f);
}
   
void afficher3(GtkWidget *plistview)
{ 
enum {  COL_JOUR,
        COL_MOIS,
        COL_ANNEE,       
        NUM_HEURE,
        NUM_COLS
      };
char JOUR[50],MOIS[50],ANNEE[50];
char HEURE [50];
GtkListStore *liststore;
GtkCellRenderer *celrender;
GtkTreeViewColumn *col;
liststore = gtk_list_store_new(NUM_COLS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
FILE *f;
f=fopen("/home/mariem/Projets/mygym3/src/dispo.txt","r");
if(f!=NULL){
       while(fscanf(f,"%s %s %s %s ",JOUR,MOIS,ANNEE,HEURE)!=EOF){
            GtkTreeIter iter;
            gtk_list_store_append(liststore, &iter);
            gtk_list_store_set(liststore, &iter,
                          COL_JOUR, JOUR,
                          COL_MOIS, MOIS,
                          COL_ANNEE, ANNEE,
                          NUM_HEURE,HEURE,
                       -1);

g_print ("jour_disponibilites: %s %s %s %s \n", JOUR,MOIS,ANNEE,HEURE);

          }
        celrender = gtk_cell_renderer_text_new();
        col = gtk_tree_view_column_new_with_attributes("JOUR",celrender,"text",COL_JOUR,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

        celrender = gtk_cell_renderer_text_new();
        col = gtk_tree_view_column_new_with_attributes("MOIS",celrender,"text",COL_MOIS,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

        celrender = gtk_cell_renderer_text_new();
        col = gtk_tree_view_column_new_with_attributes("ANNEE",celrender,"text",COL_ANNEE,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);
        
        celrender = gtk_cell_renderer_text_new();
        col = gtk_tree_view_column_new_with_attributes("HEURE",celrender,"text",NUM_HEURE,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(plistview),col);

        gtk_tree_view_set_model (GTK_TREE_VIEW(plistview), GTK_TREE_MODEL (liststore));

}
fclose(f);
}
   
/*void modifier_dispo(char nom[50],char prenom[50],char regime[50])
{
FILE *f,*f1;
char var[50];char var1[50];char var2[50];
f=fopen("/home/mariem/Projets/mygym3/src/dispo.txt","r");
f1=fopen("/home/mariem/Projets/mygym3/src/temp.txt","a+");
while(fscanf(f,"%s %s %s",var,var1,var2)!=EOF)
        {
if (!strcmp(regime,var2) )
                {
fprintf(f1,"%s %s %s\n",nom,prenom,regime);

        
                }
else
fprintf(f1,"%s %s %s\n",var,var1,var2);
        }
fclose(f1);
fclose(f);
rename("/home/mariem/Projets/mygym3/src/dispo.txt","/home/mariem/Projets/mygym3/src/temp.txt");   
}
*/
void supprimer_dispo(char jour[50], char mois[50], char annee[50], char Heurs [50])
{
        char jr[50],moi[50],ann[50] ; char hr[50];
        FILE *f , *temp;
        f=fopen("/home/mariem/Projets/mygym3/src/dispo.txt","a+");
        temp=fopen("/home/mariem/Projets/mygym3/src/temp.txt","w+");
        while(fscanf(f,"%s %s %s %s",jr,moi,ann,hr)!=EOF){
                if(!strcmp(jour,jr) && !strcmp(mois,moi) &&!strcmp(annee,ann) && !strcmp(Heurs,hr))
                {
                  fprintf(temp,"%s %s %s %s\n",jr,moi,ann,hr);
                }
                  
        }
        
        fclose(f);
        fclose(temp);
        remove("/home/mariem/Projets/mygym3/src/dispo.txt");
        rename("/home/mariem/Projets/mygym3/src/temp.txt","/home/mariem/Projets/mygym3/src/dispo.txt");

}


void ajouter_dispo(char jour[50],char mois[50],char annee[50] ,char Heurs[50])
{

g_print ("jour_disponibilites: %s\n", jour);
g_print ("mois_disponibilites: %s\n", mois);
g_print ("annees_disponibilites: %s\n", annee);
g_print ("annees_disponibilites: %s\n", Heurs);
FILE *f;

f=fopen("/home/mariem/Projets/mygym3/src/dispo.txt","a+");

                fprintf(f,"%s %s %s %s\n",jour,mois,annee,Heurs);
fclose(f);
}



void supprimer_fiche_medicale(char nom[20],char prenom[20],char age[100],char poids[100],char taille[100],char maladie[20])
{
FILE *f,*f1;
char var[20];char var1[20];char var2[20];char var3[100];char var4[100];char var5[100];
f=fopen("/home/mariem/Projets/mygym3/src/liste.txt","r");
f1=fopen("/home/mariem/Projets/mygym3/src/liste1.txt","a+");
while(fscanf(f,"%s %s %s %s %s %s",var,var1,var2,var3,var4,var5)!=EOF)
        {
if(!strcmp(nom,var) && !strcmp(prenom,var1))
{
fprintf(f1,"%s %s %s %s %s %s \n",nom="",prenom="",age="",poids="",taille="",maladie="");

}
else
fprintf(f1,"%s %s %s %s %s %s\n",var,var1,var2,var3,var4,var5);
        }
fclose(f1);
fclose(f);
rename("/home/mariem/Projets/mygym3/src/liste1.txt","/home/mariem/Projets/mygym3/src/liste.txt"); 
}


void modifier_fiche_medicale(char nom[20],char prenom[20],char age[100],char poids[100],char taille[100],char maladie[20])
{
FILE *f,*f1;
char var[20];char var1[20];char var2[20];char var3[100];char var4[100];char var5[100];
f=fopen("/home/mariem/Projets/mygym3/src/liste.txt","r");
f1=fopen("/home/mariem/Projets/mygym3/src/liste1.txt","a+");
while(fscanf(f,"%s %s %s %s %s %s ",var,var1,var2,var3,var4,var5)!=EOF)
        {
if(!strcmp(nom,var) && !strcmp(prenom,var1))
{
fprintf(f1,"%s %s %s %s %s %s \n",nom,prenom,age,poids,taille,maladie);

}
else
fprintf(f1,"%s %s %s %s %s %s \n",var,var1,var2,var3,var4,var5);
        }
fclose(f1);
fclose(f);
rename("/home/mariem/Projets/mygym3/src/liste.txt","//home/mariem/Projets/mygym3/src/liste1.txt");        
}



void DeleteLine(const int line,const int index)
{
g_print ("selected row is: %d\n", line);
  FILE *srcFile;
    FILE *tempFile;
    char path[100];
    char buffer[BUFFER_SIZE];
    int count = 1;
   if(index==1)
   {
    srcFile=fopen("/home/mariem/Projets/mygym3/src/liste.txt","r");
   }
   if(index==2)
   {
    srcFile=fopen("/home/mariem/Projets/mygym3/src/dispo.txt","r");
   }
    
    tempFile=fopen("/home/mariem/Projets/mygym3/src/temp.txt","w");
               // Move src file pointer to beginning
    rewind(srcFile);
    while ((fgets(buffer, BUFFER_SIZE, srcFile)) != NULL)
    {
        /* If current line is not the line user wanted to remove */
        if (line+1 != count)
            fputs(buffer, tempFile);
        count++;
    }
    /* Close all open files */
    fclose(srcFile);
    fclose(tempFile);
    /* Delete src file and rename temp file as src */
    if(index==1)
   {
    remove("/home/mariem/Projets/mygym3/src/liste.txt");          // remove the original file 
    rename("/home/mariem/Projets/mygym3/src/temp.txt", "/home/mariem/Projets/mygym3/src/liste.txt"); 
   }
       if(index==2)
   {
    remove("/home/mariem/Projets/mygym3/src/dispo.txt");          // remove the original file 
    rename("/home/mariem/Projets/mygym3/src/temp.txt", "/home/mariem/Projets/mygym3/src/dispo.txt"); 
   }
   // rename the temporary file to original name     

}


 