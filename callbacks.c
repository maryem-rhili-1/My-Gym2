#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif
#include <gtk/gtk.h>
#include <string.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "fonction.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>



/*bienvenue
char jour_disponibilites[10];
char mois_disponibilites[10];
char annees_disponibilites[10];
*/

char jour_disponibilites[50],mois_disponibilites[50],annees_disponibilites[50]; 
char heure_disponibilites[50];
gchar *nom,*prenom,*age,*poids,*taille,*maladie;
gchar *g_jour_disponibilites;
gchar *g_mois_disponibilites;
gchar *g_annees_disponibilites;
gchar *g_heure_disponibilites;
int *index_row_selected;
void on_button1_clicked (GtkWidget *objet_graphique,gpointer user_data)
{
        GtkWidget *window_authentification,*window_getion_medecin;
        window_authentification= lookup_widget(objet_graphique,"window_authentification");              
        gtk_widget_hide(window_authentification);
        window_getion_medecin=create_window_getion_medecin();
        gtk_widget_show (window_getion_medecin);
}


void on_button_Gerer_les_fiches_medicales_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
        GtkWidget *window_getion_medecin,*window_fiche_medicale_medecin,*List_View;
        window_getion_medecin= lookup_widget(objet_graphique,"window_getion_medecin");  
        gtk_widget_hide(window_getion_medecin);
        window_fiche_medicale_medecin=create_window_fiche_medicale_medecin();
        gtk_widget_show (window_fiche_medicale_medecin);
        List_View=lookup_widget(window_fiche_medicale_medecin,"treeview1");
        afficher1(List_View);
}


void on_button_Gerer_les_rendez_vous_medecin_clicked (GtkWidget *objet_graphique,gpointer user_data)
{
        GtkWidget *window_getion_medecin,*List_View;
        GtkWidget *window_rendez_vous_medecin;
        window_getion_medecin= lookup_widget(objet_graphique,"window_getion_medecin");
        window_rendez_vous_medecin=create_window_rendez_vous_medecin();
        gtk_widget_show (window_rendez_vous_medecin);
        gtk_widget_hide (window_getion_medecin);
        List_View=lookup_widget(window_rendez_vous_medecin,"treeview2");
        afficher2(List_View);
}


void on_button_Gerer_les_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
        GtkWidget *window_getion_medecin,*List_View;
        GtkWidget *window_disponibilites_medecin;
        window_getion_medecin=lookup_widget(objet_graphique,"window_getion_medecin");
        window_disponibilites_medecin=create_window_disponibilites_medecin();
        gtk_widget_show(window_disponibilites_medecin);
        gtk_widget_hide(window_getion_medecin);
        List_View=lookup_widget(window_disponibilites_medecin,"treeview3");
        afficher3(List_View);
}


void on_button_ajouter_fiche_medicale_medecin_clicked (GtkWidget *objet_graphique,gpointer user_data)
{
        GtkWidget *window_ajouter_fiche_medicale_medecin,*window_fiche_medicale_medecin;
        window_fiche_medicale_medecin= lookup_widget(objet_graphique,"window_fiche_medicale_medecin");  
        gtk_widget_hide(window_fiche_medicale_medecin);
        window_ajouter_fiche_medicale_medecin=create_window_ajouter_fiche_medicale_medecin();
        gtk_widget_show (window_ajouter_fiche_medicale_medecin);
}


void on_button_supprimer_fiche_medicale_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
        GtkWidget *window_fiche_medicale_medecin;
        GtkWidget *window_supprimer_fiche_medicale_medecin;
        window_fiche_medicale_medecin= lookup_widget(objet_graphique,"window_fiche_medicale_medecin");
        window_supprimer_fiche_medicale_medecin=create_window_supprimer_fiche_medicale_medecin();



        GtkWidget *Widget_nom,*Widget_prenom,*Widget_age,*Widget_poids,*Widget_taille,*Widget_maladie,*window3;
       

        Widget_nom=lookup_widget(window_supprimer_fiche_medicale_medecin,"entry9");
        Widget_prenom=lookup_widget(window_supprimer_fiche_medicale_medecin,"entry10");
        Widget_age=lookup_widget(window_supprimer_fiche_medicale_medecin,"entry30");
        Widget_poids=lookup_widget(window_supprimer_fiche_medicale_medecin,"entry31");
        Widget_taille=lookup_widget(window_supprimer_fiche_medicale_medecin,"entry32");
        Widget_maladie=lookup_widget(window_supprimer_fiche_medicale_medecin,"entry33");
        gtk_entry_set_text(GTK_ENTRY (Widget_nom),_(nom));
        gtk_entry_set_text(GTK_ENTRY (Widget_prenom),_(prenom));
        gtk_entry_set_text(GTK_ENTRY (Widget_age),_(age));
        gtk_entry_set_text(GTK_ENTRY (Widget_poids),_(poids));
        gtk_entry_set_text(GTK_ENTRY (Widget_taille),_(taille));
        gtk_entry_set_text(GTK_ENTRY (Widget_maladie),_(maladie));





        gtk_widget_show(window_supprimer_fiche_medicale_medecin);
        gtk_widget_hide(window_fiche_medicale_medecin);
}


void on_button_modifier_fiche_medicale_medecin_clicked(GtkWidget *objet_graphic,gpointer  user_data)
{
        

        GtkWidget *Widget_nom,*Widget_prenom,*Widget_age,*Widget_poids,*Widget_taille,*Widget_maladie,*window3;
        GtkWidget *window_modifier_fiche_medicale_medecin,*window_fiche_medicale_medecin,*List_View;
        window_fiche_medicale_medecin=lookup_widget(objet_graphic,"window_fiche_medicale_medecin");
        window_modifier_fiche_medicale_medecin=create_window_modifier_fiche_medicale_medecin();
        Widget_nom=lookup_widget(window_modifier_fiche_medicale_medecin,"entry6");
        Widget_prenom=lookup_widget(window_modifier_fiche_medicale_medecin,"entry7");
        Widget_age=lookup_widget(window_modifier_fiche_medicale_medecin,"entry28");
        Widget_poids=lookup_widget(window_modifier_fiche_medicale_medecin,"entry34");
        Widget_taille=lookup_widget(window_modifier_fiche_medicale_medecin,"entry35");
        Widget_maladie=lookup_widget(window_modifier_fiche_medicale_medecin,"entry36");
        gtk_entry_set_text(GTK_ENTRY (Widget_nom),_(nom));
        gtk_entry_set_text(GTK_ENTRY (Widget_prenom),_(prenom));
        gtk_entry_set_text(GTK_ENTRY (Widget_age),_(age));
        gtk_entry_set_text(GTK_ENTRY (Widget_poids),_(poids));
        gtk_entry_set_text(GTK_ENTRY (Widget_taille),_(taille));
        gtk_entry_set_text(GTK_ENTRY (Widget_maladie),_(maladie));




gtk_widget_show (window_modifier_fiche_medicale_medecin);
gtk_widget_hide( window_fiche_medicale_medecin);
//List_View=lookup_widget(window_fiche_medicale_medecin,"treeview1");
//afficher1(List_View);
}


void on_button_retour_affichage_fiche_medicale_medecin_clicked(GtkWidget *objet_graphic,gpointer  user_data)
{
        GtkWidget *window_getion_medecin,*window_fiche_medicale_medecin;
        window_fiche_medicale_medecin= lookup_widget(objet_graphic,"window_fiche_medicale_medecin");
        window_getion_medecin=create_window_getion_medecin();
        gtk_widget_hide(window_fiche_medicale_medecin);
        gtk_widget_show (window_getion_medecin);
}





void on_button_entrer_ajouter_fiche_medicale_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
        GtkWidget *a ,*b,*c,*d,*e,*f ,*window_fiche_medicale_medecin,*window_ajouter_fiche_medicale_medecin,*List_View;
        char nom[20],prenom[20],age[100],poids[100],taille[100],maladie[20];
        
        a=lookup_widget(objet_graphique,"entry3");
        b=lookup_widget(objet_graphique,"entry4");
        c=lookup_widget(objet_graphique,"entry23");
        d=lookup_widget(objet_graphique,"entry37");
        e=lookup_widget(objet_graphique,"entry38");
        f=lookup_widget(objet_graphique,"entry39");
        strcpy(nom,gtk_entry_get_text(GTK_ENTRY(a)));
        strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(b)));
        strcpy(age,gtk_entry_get_text(GTK_ENTRY(c)));
        strcpy(poids,gtk_entry_get_text(GTK_ENTRY(d)));
        strcpy(taille,gtk_entry_get_text(GTK_ENTRY(e)));
        strcpy(maladie,gtk_entry_get_text(GTK_ENTRY(f)));
        ajouter(nom,prenom,age,poids,taille,maladie);
        window_ajouter_fiche_medicale_medecin= lookup_widget(objet_graphique,"window_ajouter_fiche_medicale_medecin");  
        gtk_widget_hide(window_ajouter_fiche_medicale_medecin);
        window_fiche_medicale_medecin=create_window_fiche_medicale_medecin();
        
        List_View=lookup_widget(window_fiche_medicale_medecin,"treeview1");
        afficher1(List_View);
        gtk_widget_show (window_fiche_medicale_medecin);
}


void on_button_retour_ajouter_fiche_medicale_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
        GtkWidget *window_fiche_medicale_medecin,*window_ajouter_fiche_medicale_medecin,*List_View;
        window_ajouter_fiche_medicale_medecin= lookup_widget(objet_graphique,"window_ajouter_fiche_medicale_medecin");  
        gtk_widget_hide(window_ajouter_fiche_medicale_medecin);
        window_fiche_medicale_medecin=create_window_fiche_medicale_medecin();
        gtk_widget_show (window_fiche_medicale_medecin);
        List_View=lookup_widget(window_fiche_medicale_medecin,"treeview1");
        afficher1(List_View);
}


void on_button_retour_rendez_vous_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
        GtkWidget *window_getion_medecin;
        GtkWidget *window_rendez_vous_medecin;
        window_rendez_vous_medecin= lookup_widget(objet_graphique,"window_rendez_vous_medecin");
        window_getion_medecin=create_window_getion_medecin();
        gtk_widget_show (window_getion_medecin);
        gtk_widget_hide (window_rendez_vous_medecin);
}


void on_button_retour_modifier_fiche_medicale_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
        GtkWidget *window_fiche_medicale_medecin,*window_modifier_fiche_medicale_medecin,*List_View;
        window_modifier_fiche_medicale_medecin= lookup_widget(objet_graphique,"window_modifier_fiche_medicale_medecin");
        window_fiche_medicale_medecin=create_window_fiche_medicale_medecin();   
        gtk_widget_hide(window_modifier_fiche_medicale_medecin);
        gtk_widget_show (window_fiche_medicale_medecin);
        List_View=lookup_widget(window_fiche_medicale_medecin,"treeview1");
        afficher1(List_View);
}


void on_button_entrer_modifier_fiche_medicale_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
        GtkWidget *a , *b, *c, *d, *e, *f, *window_modifier_fiche_medicale_medecin,*List_View,*window_fiche_medicale_medecin;
        char nouveau_nom[20],nouveau_prenom[20],nouveau_maladie[20],nouveau_poids[100],nouveau_taille[100],nouveau_age[100];
        a=lookup_widget(objet_graphique,"entry6");
        b=lookup_widget(objet_graphique,"entry7");
        c=lookup_widget(objet_graphique,"entry28");
        d=lookup_widget(objet_graphique,"entry34");
        e=lookup_widget(objet_graphique,"entry35");
        f=lookup_widget(objet_graphique,"entry36");
        strcpy(nouveau_nom,gtk_entry_get_text(GTK_ENTRY(a)));
        strcpy(nouveau_prenom,gtk_entry_get_text(GTK_ENTRY(b)));
        strcpy(nouveau_age,gtk_entry_get_text(GTK_ENTRY(c)));
        strcpy(nouveau_poids,gtk_entry_get_text(GTK_ENTRY(d)));
        strcpy(nouveau_taille,gtk_entry_get_text(GTK_ENTRY(e)));
        strcpy(nouveau_maladie,gtk_entry_get_text(GTK_ENTRY(f)));
        DeleteLine(index_row_selected[0],1);
        ajouter(nouveau_nom,nouveau_prenom,nouveau_age,nouveau_poids,nouveau_taille,nouveau_maladie);
        window_modifier_fiche_medicale_medecin=lookup_widget(objet_graphique,"window_modifier_fiche_medicale_medecin");
        gtk_widget_hide(window_modifier_fiche_medicale_medecin);
        window_fiche_medicale_medecin=create_window_fiche_medicale_medecin();
        gtk_widget_show (window_fiche_medicale_medecin);
        List_View=lookup_widget(window_fiche_medicale_medecin,"treeview1");
        afficher1(List_View);
}


void on_button_entrer_supprimer_fiche_medicale_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
        GtkWidget *window_supprimer_fiche_medicale_medecin,*list_view,*window_fiche_medicale_medecin;
        DeleteLine(index_row_selected[0],1);
        window_supprimer_fiche_medicale_medecin=lookup_widget(objet_graphique,"window_supprimer_fiche_medicale_medecin");
        window_fiche_medicale_medecin=create_window_fiche_medicale_medecin();
        gtk_widget_hide (window_supprimer_fiche_medicale_medecin);
        gtk_widget_show(window_fiche_medicale_medecin);
        list_view=lookup_widget(window_fiche_medicale_medecin,"treeview1");
        afficher1(list_view);
}

void on_button_retour_supprimer_fiche_medicale_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
        GtkWidget *window_supprimer_fiche_medicale_medecin,*List_View;
        GtkWidget *window_fiche_medicale_medecin;
        window_supprimer_fiche_medicale_medecin= lookup_widget(objet_graphique,"window_supprimer_fiche_medicale_medecin");
        window_fiche_medicale_medecin=create_window_fiche_medicale_medecin();
        gtk_widget_show (window_fiche_medicale_medecin);
        gtk_widget_hide (window_supprimer_fiche_medicale_medecin);
        List_View=lookup_widget(window_fiche_medicale_medecin,"treeview1");
        afficher1(List_View);
}

void on_treeview1_row_activated(GtkTreeView *treeview,GtkTreePath *path,GtkTreeViewColumn *column,gpointer userdata) 
{

   GtkTreeIter iter;
   GtkTreeModel *model = gtk_tree_view_get_model(treeview);
   GtkTreeSelection * tsel = gtk_tree_view_get_selection (treeview);
   GtkTreeModel * tm ;
   if (gtk_tree_model_get_iter(model, &iter, path)) {
      gtk_tree_model_get (GTK_TREE_MODEL(model), &iter, 0, &nom,
                        1, &prenom,
                        2, &age,
                        3, &poids,
                        4, &taille,
                        5, &maladie,
                       -1);

   }
   if ( gtk_tree_selection_get_selected ( tsel , &tm , &iter ) )
      {
      path = gtk_tree_model_get_path ( tm , &iter ) ;
      index_row_selected = gtk_tree_path_get_indices ( path ) ;
      
   
      }
}



void on_treeview3_row_activated(GtkTreeView *treeview,GtkTreePath *path,GtkTreeViewColumn *column,gpointer user_data)
{


   GtkTreeIter iter;
   GtkTreeModel *model = gtk_tree_view_get_model(treeview);
   GtkTreeSelection * tsel = gtk_tree_view_get_selection (treeview);
   GtkTreeModel * tm ;
   if (gtk_tree_model_get_iter(model, &iter, path)) {
      gtk_tree_model_get (GTK_TREE_MODEL(model), &iter,  0, &g_jour_disponibilites,
                        1, &g_mois_disponibilites,
                        2, &g_annees_disponibilites,
                        3, &g_heure_disponibilites,
                       -1);
   g_print ("g_jour_disponibilites: %s\n", g_jour_disponibilites);
   g_print ("g_mois_disponibilites: %s\n", g_mois_disponibilites);
   }
   if ( gtk_tree_selection_get_selected ( tsel , &tm , &iter ) )
      {
      path = gtk_tree_model_get_path ( tm , &iter ) ;
      index_row_selected = gtk_tree_path_get_indices ( path ) ;
      
   g_print ("selected row is: %d\n", index_row_selected[0]);
      }






}


void on_spinbutton5_changed(GtkSpinButton *editable,gpointer user_data)
{
       
        int tmp = gtk_spin_button_get_value( editable );
        sprintf(jour_disponibilites, "%d", tmp);
}


void on_spinbutton6_changed(GtkSpinButton *editable,gpointer user_data)
{
       
        int tmp = gtk_spin_button_get_value( editable );
        sprintf(mois_disponibilites, "%d", tmp);



}


void on_spinbutton7_changed(GtkSpinButton *editable,gpointer user_data)
{
         
        int tmp = gtk_spin_button_get_value( editable );
        sprintf(annees_disponibilites, "%d", tmp);

    
}





void on_comboboxentry6_changed(GtkComboBox *combobox,gpointer user_data)
{
        gchar *tmp = gtk_combo_box_get_active_text( combobox );
        char *ret = (&tmp[0]);
        strcpy(heure_disponibilites,ret);
       
        
   
   
}


void on_button_entrer_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{

g_print ("jour_disponibilites: %s\n", jour_disponibilites);
g_print ("mois_disponibilites: %s\n", mois_disponibilites);
g_print ("annees_disponibilites: %s\n", annees_disponibilites);

GtkWidget *window_disponibilites_medecin,*List_View;
GtkWidget *window_ajouter_disponibilites_medecin;

ajouter_dispo(jour_disponibilites,mois_disponibilites,annees_disponibilites,heure_disponibilites);
window_ajouter_disponibilites_medecin= lookup_widget(objet_graphique,"window_ajouter_disponibilites_medecin");
window_disponibilites_medecin=create_window_disponibilites_medecin();
gtk_widget_show (window_disponibilites_medecin);
gtk_widget_hide (window_ajouter_disponibilites_medecin);
List_View=lookup_widget(window_disponibilites_medecin,"treeview3");
afficher3(List_View);
}


void on_button_entrer_modifier_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
        GtkWidget *a,*b,*c,*d;
        GtkWidget *current, *hr,*window_disponibilites_medecin,*window_modifier_disponibilites_medecin,*List_View;
        char jour[50], mois[50], annee[50] ;
        char Heurs[50];
        a=lookup_widget(objet_graphique,"entry40");
        b=lookup_widget(objet_graphique,"entry41");
        c=lookup_widget(objet_graphique,"entry42");
        d=lookup_widget(objet_graphique,"entry43");
     


        strcpy(jour,gtk_entry_get_text(GTK_ENTRY(a)));
        strcpy(mois,gtk_entry_get_text(GTK_ENTRY(b)));
        strcpy(annee,gtk_entry_get_text(GTK_ENTRY(c)));
        
        strcpy(Heurs,gtk_entry_get_text(GTK_ENTRY(d)));




DeleteLine(index_row_selected[0],2);
ajouter_dispo(jour,mois,annee,Heurs);

current=lookup_widget(objet_graphique,"window_modifier_disponibilites_medecin");
window_disponibilites_medecin=create_window_disponibilites_medecin();
gtk_widget_show (window_disponibilites_medecin);
gtk_widget_hide(current);  
List_View=lookup_widget(window_disponibilites_medecin,"treeview3");
afficher3(List_View);

}
void on_button_modifier_disponiblites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{

        GtkWidget *Widget_jour,*Widget_mois,*Widget_annee,*Widget_heure;
        GtkWidget *window_modifier_disponibilites_medecin;
        GtkWidget *window_disponibilites_medecin;
        
        window_disponibilites_medecin=lookup_widget(objet_graphique,"window_disponibilites_medecin");
        window_modifier_disponibilites_medecin=create_window_modifier_disponibilites_medecin();
        Widget_jour=lookup_widget(window_modifier_disponibilites_medecin,"entry40");
        Widget_mois=lookup_widget(window_modifier_disponibilites_medecin,"entry41");
        Widget_annee=lookup_widget(window_modifier_disponibilites_medecin,"entry42");
        Widget_heure=lookup_widget(window_modifier_disponibilites_medecin,"entry43");

        gtk_entry_set_text(GTK_ENTRY (Widget_jour),_(g_jour_disponibilites));
        gtk_entry_set_text(GTK_ENTRY (Widget_mois),_(g_mois_disponibilites));
        gtk_entry_set_text(GTK_ENTRY (Widget_annee),_(g_annees_disponibilites));
        gtk_entry_set_text(GTK_ENTRY (Widget_heure),_(g_heure_disponibilites));


        gtk_widget_show (window_modifier_disponibilites_medecin);
        gtk_widget_hide (window_disponibilites_medecin);
}

void on_button_entrer_supprimer_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
GtkWidget *current, *hr,*window_disponibilites_medecin,*List_View;
DeleteLine(index_row_selected[0],2);
current=lookup_widget(objet_graphique,"window_supprimer_disponibilites_medecin");
window_disponibilites_medecin=create_window_disponibilites_medecin();
gtk_widget_show (window_disponibilites_medecin);
gtk_widget_hide(current);  
List_View=lookup_widget(window_disponibilites_medecin,"treeview3");
afficher3(List_View);
}


void on_button_retour_supprimer_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
GtkWidget *window_disponibilites_medecin,*List_View;
GtkWidget *window_supprimer_disponibilites_medecin;
window_supprimer_disponibilites_medecin= lookup_widget(objet_graphique,"window_supprimer_disponibilites_medecin");
window_disponibilites_medecin=create_window_disponibilites_medecin();
gtk_widget_show (window_disponibilites_medecin);
gtk_widget_hide (window_supprimer_disponibilites_medecin);
List_View=lookup_widget(window_disponibilites_medecin,"treeview3");
afficher3(List_View);
}

void on_button_retour_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
        GtkWidget *window_disponibilites_medecin,*List_View;
        GtkWidget *window_getion_medecin;
        window_disponibilites_medecin= lookup_widget(objet_graphique,"window_disponibilites_medecin");
        window_getion_medecin=create_window_getion_medecin();
        gtk_widget_show (window_getion_medecin);
        gtk_widget_hide (window_disponibilites_medecin);
;
}


void on_button_ajouter_disponibilites_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
GtkWidget *window_disponibilites_medecin;
GtkWidget *window_ajouter_disponibilites_medecin;
window_disponibilites_medecin= lookup_widget(objet_graphique,"window_disponibilites_medecin");
window_ajouter_disponibilites_medecin=create_window_ajouter_disponibilites_medecin();
gtk_widget_show (window_ajouter_disponibilites_medecin);
gtk_widget_hide (window_disponibilites_medecin);
}


void on_button_retour_ajouter_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
GtkWidget *window_disponibilites_medecin,*List_View;
GtkWidget *window_ajouter_disponibilites_medecin;
window_ajouter_disponibilites_medecin= lookup_widget(objet_graphique,"window_ajouter_disponibilites_medecin");
window_disponibilites_medecin=create_window_disponibilites_medecin();
gtk_widget_show (window_disponibilites_medecin);
gtk_widget_hide (window_ajouter_disponibilites_medecin);
List_View=lookup_widget(window_disponibilites_medecin,"treeview3");
afficher3(List_View);
}

void on_button_supprimer_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{


        GtkWidget *Widget_jour,*Widget_mois,*Widget_annee,*Widget_heure;
        GtkWidget *window_supprimer_disponibilites_medecin;
        GtkWidget *window_disponibilites_medecin;
        
        window_disponibilites_medecin=lookup_widget(objet_graphique,"window_disponibilites_medecin");
        window_supprimer_disponibilites_medecin=create_window_supprimer_disponibilites_medecin();
        Widget_jour=lookup_widget(window_supprimer_disponibilites_medecin,"entry44");
        Widget_mois=lookup_widget(window_supprimer_disponibilites_medecin,"entry45");
        Widget_annee=lookup_widget(window_supprimer_disponibilites_medecin,"entry46");
        Widget_heure=lookup_widget(window_supprimer_disponibilites_medecin,"entry47");

        gtk_entry_set_text(GTK_ENTRY (Widget_jour),_(g_jour_disponibilites));
        gtk_entry_set_text(GTK_ENTRY (Widget_mois),_(g_mois_disponibilites));
        gtk_entry_set_text(GTK_ENTRY (Widget_annee),_(g_annees_disponibilites));
        gtk_entry_set_text(GTK_ENTRY (Widget_heure),_(g_heure_disponibilites));


        gtk_widget_show (window_supprimer_disponibilites_medecin);
        gtk_widget_hide (window_disponibilites_medecin);

}




void on_button_retour_modifier_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
GtkWidget *window_disponibilites_medecin,*List_View;
GtkWidget *window_modifier_disponibilites_medecin;
window_modifier_disponibilites_medecin= lookup_widget(objet_graphique,"window_modifier_disponibilites_medecin");
window_disponibilites_medecin=create_window_disponibilites_medecin();
gtk_widget_show (window_disponibilites_medecin);
gtk_widget_hide (window_modifier_disponibilites_medecin);
List_View=lookup_widget(window_disponibilites_medecin,"treeview3");
afficher3(List_View);
}

