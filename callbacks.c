#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif
#include <gtk/gtkclist.h>

#include <gtk/gtk.h>
#include <string.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "admin.h"


void
on_button1_admin_clicked                     (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
int x;	
	GtkWidget *a ;
        GtkWidget *b;
        GtkWidget *c ;
        GtkWidget *window1_admin;
        GtkWidget *window2_admin;

	char login[20],password[20];
	
	window1_admin= lookup_widget(objet_graphique,"window1_admin");
        window2_admin= lookup_widget(objet_graphique,"window2_admin");
      	

	a=lookup_widget(objet_graphique,"entry1_admin");
	b=lookup_widget(objet_graphique,"entry2_admin");
	c=lookup_widget(objet_graphique,"label3_admin");
	strcpy(login,gtk_entry_get_text(GTK_ENTRY(a)));
	strcpy(password,gtk_entry_get_text(GTK_ENTRY(b)));
	x =verifier(login,password);
	
	if(x==1){ 

gtk_widget_hide(window1_admin);
window2_admin=create_window2_admin();
gtk_widget_show (window2_admin);

}
	else 
	{ gtk_label_set_text(GTK_LABEL(c),"authentification non validée");}

  
}


void
on_button2_admin_clicked                     (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
gtk_widget_destroy(GTK_WIDGET(lookup_widget(objet_graphique,"window1_admin")));

}


void
on_button3_admin_clicked                     (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{

GtkWidget *window3_admin , *window2_admin ;


window2_admin=lookup_widget(objet_graphique,"window2_admin");

gtk_widget_destroy(window2_admin);
window3_admin=create_window3_admin();
gtk_widget_show(window3_admin);

}




void    on_button5_admin_clicked                                 (GtkWidget      *objet_graphique,
                                        gpointer         user_data)

{
GtkWidget *window1_admin , *window2_admin ;


window2_admin=lookup_widget(objet_graphique,"window2_admin");

gtk_widget_destroy(window2_admin);
window1_admin=create_window1_admin();
gtk_widget_show(window1_admin);

}


void
on_button7_admin_clicked                     (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window3_admin , *window4_admin ;


window3_admin=lookup_widget(objet_graphique,"window3_admin");

gtk_widget_destroy(window3_admin);
window4_admin=create_window4_admin();
gtk_widget_show(window4_admin);

}




void
on_button8_admin_clicked                     (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{

GtkWidget *window2_admin;
GtkWidget *window3_admin;

window3_admin=lookup_widget(objet_graphique,"window3_admin");
gtk_widget_destroy(window3_admin);
window2_admin=create_window2_admin();
gtk_widget_show(window2_admin);
}


void
on_button9_admin_clicked                     (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window4_admin;
GtkWidget *window3_admin;

window4_admin=lookup_widget(objet_graphique,"window4_admin");
gtk_widget_destroy(window4_admin);
window3_admin=create_window3_admin();
gtk_widget_show(window3_admin);
}








void
on_button10_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window4_admin;
GtkWidget *window5_admin;

window4_admin=lookup_widget(objet_graphique,"window4_admin");
gtk_widget_destroy(window4_admin);
window5_admin=create_window5_admin();
gtk_widget_show(window5_admin);
}


void
on_button14_admin_clicked                    (GtkWidget      *objet_graphique,
 gpointer         user_data)
{
GtkWidget *window4_admin;
GtkWidget *window5_admin;

window5_admin=lookup_widget(objet_graphique,"window5_admin");
gtk_widget_destroy(window5_admin);
window4_admin=create_window4_admin();
gtk_widget_show(window4_admin);
}


void
on_button13_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
char chemin[]="/home/dorra/Projects/project2/src/staffs.txt";

 staff P;
 Date dt_nais;

GtkWidget *window4_admin;
GtkWidget *window5_admin;

GtkWidget *a;
GtkWidget *b;
GtkWidget *c;
GtkWidget *d;
GtkWidget *e;
GtkWidget *f;



a = lookup_widget(objet_graphique,"entry3_admin");
b= lookup_widget(objet_graphique,"entry5_admin");
c= lookup_widget(objet_graphique,"entry6_admin");

d= lookup_widget(objet_graphique,"spinbutton19_admin");
e= lookup_widget(objet_graphique,"spinbutton20_admin");
f= lookup_widget(objet_graphique,"spinbutton21_admin");

strcpy(P.Login, gtk_entry_get_text(GTK_ENTRY(a)));
strcpy(P.Role, gtk_entry_get_text(GTK_ENTRY(b)));
strcpy(P.Sexe, gtk_entry_get_text(GTK_ENTRY(c)));

P.dt_nais.jour=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (d));
P.dt_nais.mois=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (e));
P.dt_nais.annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (f));


enregistrer_staff(P);

window5_admin=lookup_widget(objet_graphique,"window5_admin");
gtk_widget_destroy(window5_admin);
window4_admin=create_window4_admin();
gtk_widget_show(window4_admin);

}




void
on_button16_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)

{
GtkWidget *window4_admin;
GtkWidget *window6_admin;

window6_admin=lookup_widget(objet_graphique,"window6_admin");
gtk_widget_destroy(window6_admin);
window4_admin=create_window4_admin();
gtk_widget_show(window4_admin);
}




void
on_button17_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2_admin;
GtkWidget *window7_admin;

window2_admin=lookup_widget(objet_graphique,"window2_admin");
gtk_widget_destroy(window2_admin);
window7_admin=create_window7_admin();
gtk_widget_show(window7_admin);
}


void
on_button20_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2_admin;
GtkWidget *window7_admin;

window7_admin=lookup_widget(objet_graphique,"window7_admin");
gtk_widget_destroy(window7_admin);
window2_admin=create_window2_admin();
gtk_widget_show(window2_admin);
}


void
on_button18_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window8_admin;
GtkWidget *window7_admin;

window7_admin=lookup_widget(objet_graphique,"window7_admin");
gtk_widget_destroy(window7_admin);
window8_admin=create_window8_admin();
gtk_widget_show(window8_admin);
}






void
on_button23_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window8_admin;
GtkWidget *window7_admin;

window8_admin=lookup_widget(objet_graphique,"window8_admin");
gtk_widget_destroy(window8_admin);
window7_admin=create_window7_admin();
gtk_widget_show(window7_admin);
}



void
on_button24_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window4_admin;
GtkWidget *window9_admin;

window4_admin=lookup_widget(objet_graphique,"window4_admin");
gtk_widget_destroy(window4_admin);
window9_admin=create_window9_admin();
gtk_widget_show(window9_admin);
}




void
on_button26_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window9_admin;
GtkWidget *window7_admin;

window9_admin=lookup_widget(objet_graphique,"window9_admin");
gtk_widget_destroy(window9_admin);
window7_admin=create_window7_admin();
gtk_widget_show(window7_admin);
}


void
on_button27_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{

char chemin[]="/home/dorra/Projects/project2/src/staffs.txt";
evt a;

GtkWidget *window7_admin;
GtkWidget *window9_admin;
GtkWidget *b;
GtkWidget *c;
GtkWidget *d;

b= lookup_widget(objet_graphique,"entry10_admin");
c= lookup_widget(objet_graphique,"entry26_admin");
d= lookup_widget(objet_graphique,"entry27_admin");


strcpy(a.nom, gtk_entry_get_text(GTK_ENTRY(b)));
strcpy(a.date, gtk_entry_get_text(GTK_ENTRY(c)));
strcpy(a.prix, gtk_entry_get_text(GTK_ENTRY(d)));
modifier_evt(a);

window9_admin=lookup_widget(objet_graphique,"window9_admin");
gtk_widget_destroy(window9_admin);
window7_admin=create_window7_admin();
gtk_widget_show(window7_admin);
}


void
on_button29_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window7_admin ;
GtkWidget *window12_admin ;
GtkWidget *treeview2_admin;

window7_admin=lookup_widget(objet_graphique,"window7_admin");
gtk_widget_destroy(window7_admin);

window12_admin=lookup_widget(objet_graphique,"window12_admin");
window12_admin=create_window12_admin();
gtk_widget_show (window12_admin);

treeview2_admin=lookup_widget(window12_admin,"treeview2_admin");


afficher_evt(treeview2_admin);
}


void
on_button28_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window7_admin;
GtkWidget *window10_admin;

window7_admin=lookup_widget(objet_graphique,"window7_admin");
gtk_widget_destroy(window7_admin);
window10_admin=create_window10_admin();
gtk_widget_show(window10_admin);
}


void
on_button30_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{

char chemin[]="/home/dorra/Projects/project2/src/evts.txt";
char k_nom[50];
char k_date[50];
char k_prix[50];

GtkWidget *window7_admin;
GtkWidget *window10_admin;


GtkWidget *b;
GtkWidget *c;
GtkWidget *d;

b= lookup_widget(objet_graphique,"entry14_admin");
c= lookup_widget(objet_graphique,"entry30_admin");
d= lookup_widget(objet_graphique,"entry31_admin");


strcpy(k_nom, gtk_entry_get_text(GTK_ENTRY(b)));
strcpy(k_date, gtk_entry_get_text(GTK_ENTRY(c)));
strcpy(k_prix, gtk_entry_get_text(GTK_ENTRY(d)));
supprimer_evt( k_nom, k_date, k_prix);

window10_admin=lookup_widget(objet_graphique,"window10_admin");
gtk_widget_destroy(window10_admin);
window7_admin=create_window7_admin();
gtk_widget_show(window7_admin);


}


void
on_button31_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window7_admin;
GtkWidget *window10_admin;

window10_admin=lookup_widget(objet_graphique,"window10_admin");
gtk_widget_destroy(window10_admin);
window7_admin=create_window7_admin();
gtk_widget_show(window7_admin);
}


void
on_button32_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window7_admin;
GtkWidget *window9_admin;

window7_admin=lookup_widget(objet_graphique,"window7_admin");
gtk_widget_destroy(window7_admin);
window9_admin=create_window9_admin();
gtk_widget_show(window9_admin);
}


void
on_button35_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window7_admin;
GtkWidget *window12_admin;
window12_admin=lookup_widget(objet_graphique,"window12_admin");
gtk_widget_destroy(window12_admin);

window7_admin=lookup_widget(objet_graphique,"window7_admin");
window7_admin=create_window7_admin();
gtk_widget_show (window7_admin);
}


void
on_button36_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window3_admin;
GtkWidget *window13_admin;

window13_admin=lookup_widget(objet_graphique,"window13_admin");
gtk_widget_destroy(window13_admin);
window3_admin=create_window3_admin();
gtk_widget_show(window3_admin);
}


void
on_button37_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window4_admin;
GtkWidget *window5_admin;

window4_admin=lookup_widget(objet_graphique,"window4_admin");
gtk_widget_destroy(window4_admin);
window5_admin=create_window5_admin();
gtk_widget_show(window5_admin);
}


void
on_button38_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{


char chemin[]="/home/dorra/Projects/project2/src/adh.txt";
char k_login[50];
char k_sexe[50];


GtkWidget *window3_admin;
GtkWidget *window13_admin;
GtkWidget *b;
GtkWidget *c;


b= lookup_widget(objet_graphique,"entry20_admin");
c= lookup_widget(objet_graphique,"entry33_admin");


strcpy(k_login, gtk_entry_get_text(GTK_ENTRY(b)));
strcpy(k_sexe, gtk_entry_get_text(GTK_ENTRY(c)));
supprimer_adh(k_login,k_sexe);

window13_admin=lookup_widget(objet_graphique,"window13_admin");
gtk_widget_destroy(window13_admin);
window3_admin=create_window3_admin();
gtk_widget_show(window3_admin);
}





void
on_button39_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window3_admin;
GtkWidget *window14_admin;

window14_admin=lookup_widget(objet_graphique,"window14_admin");
gtk_widget_destroy(window14_admin);
window3_admin=create_window3_admin();
gtk_widget_show(window3_admin);
}


void
on_button40_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{


char chemin[]="/home/dorra/Projects/project2/src/adh.txt";
adh a;
GtkWidget *window3_admin;
GtkWidget *window14_admin;

GtkWidget *b;
GtkWidget *c;

b=lookup_widget(objet_graphique,"entry28_admin");
c=lookup_widget(objet_graphique,"entry29_admin");

strcpy(a.Login,gtk_entry_get_text(GTK_ENTRY(b)));
strcpy(a.Sexe,gtk_entry_get_text(GTK_ENTRY(c)));
enregistrer_adh(a);
window14_admin=lookup_widget(objet_graphique,"window14_admin");
gtk_widget_destroy(window14_admin);
window3_admin=create_window3_admin();
gtk_widget_show(window3_admin);
}


void
on_button41_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
char chemin[]="/home/dorra/Projects/project2/src/evts.txt";
evt k ;

GtkWidget *window7_admin;
GtkWidget *window8_admin;
GtkWidget *a;
GtkWidget *b;
GtkWidget *c;
a=lookup_widget(objet_graphique,"entry8_admin");
b=lookup_widget(objet_graphique,"entry24_admin");
c=lookup_widget(objet_graphique,"entry25_admin");
strcpy(k.nom,gtk_entry_get_text(GTK_ENTRY(a)));
strcpy(k.date,gtk_entry_get_text(GTK_ENTRY(b)));
strcpy(k.prix,gtk_entry_get_text(GTK_ENTRY(c)));
ajouter_evt(k);

window8_admin=lookup_widget(objet_graphique,"window8_admin");
gtk_widget_destroy(window8_admin);
window7_admin=create_window7_admin();
gtk_widget_show(window7_admin);
}


void
on_button42_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window3_admin;
GtkWidget *window14_admin;

window3_admin=lookup_widget(objet_graphique,"window3_admin");
gtk_widget_destroy(window3_admin);
window14_admin=create_window14_admin();
gtk_widget_show(window14_admin);
}


void
on_button43_admin_clicked                    (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window3_admin;
GtkWidget *window13_admin;

window3_admin=lookup_widget(objet_graphique,"window3_admin");
gtk_widget_destroy(window3_admin);
window13_admin=create_window13_admin();
gtk_widget_show(window13_admin);
}















