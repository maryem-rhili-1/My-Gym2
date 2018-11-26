#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "fonction.h"
#include<string.h>

void
on_button1_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

char log[50];char password[50]; char hello[50];FILE* f;

GtkWidget *label1;
GtkWidget *label2;
GtkWidget *output;

GtkWidget *window1;
GtkWidget *window2;

window1= lookup_widget(objet_graphique,"window1");
label1= lookup_widget(objet_graphique,"entry1");
label2= lookup_widget(objet_graphique,"entry2");
output= lookup_widget(objet_graphique,"label3");

strcpy(login,gtk_entry_get_text(GTK_ENTRY(label1)));
strcpy(password,gtk_entry_get_text(GTK_ENTRY(label2)));


int x =verification(login,password,hello);

if(x==1)
{
window2=create_window2();
gtk_widget_show (window2);
gtk_widget_hide (window1);
}
else
gtk_label_set_text(GTK_LABEL(output),hello);
}

