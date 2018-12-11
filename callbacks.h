void on_button1_clicked (GtkWidget *objet_graphique,gpointer user_data);

void on_button_Gerer_les_fiches_medicales_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_Gerer_les_rendez_vous_medecin_clicked (GtkWidget *objet_graphique,gpointer user_data);

void on_button_Gerer_les_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_ajouter_fiche_medicale_medecin_clicked (GtkWidget *objet_graphique,gpointer user_data);

void on_button_supprimer_fiche_medicale_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_modifier_fiche_medicale_medecin_clicked(GtkWidget *objet_graphic,gpointer  user_data);

void on_button_retour_affichage_fiche_medicale_medecin_clicked(GtkWidget *objet_graphic,gpointer  user_data);

void on_treeview1_row_activated(GtkTreeView       *treeview, 
                                GtkTreePath       *path, 
                                GtkTreeViewColumn *column,
                                gpointer userdata);

void on_button_entrer_ajouter_fiche_medicale_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_retour_ajouter_fiche_medicale_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_retour_rendez_vous_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_retour_modifier_fiche_medicale_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_entrer_modifier_fiche_medicale_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_entrer_supprimer_fiche_medicale_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_retour_supprimer_fiche_medicale_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_treeview3_row_activated(GtkTreeView *treeview,GtkTreePath *path,GtkTreeViewColumn *column,gpointer user_data);

void on_spinbutton5_changed(GtkSpinButton *editable,gpointer user_data);

void on_spinbutton6_changed(GtkSpinButton *editable,gpointer user_data);

void on_spinbutton7_changed(GtkSpinButton *editable,gpointer user_data);

void on_comboboxentry6_changed(GtkComboBox *combobox,gpointer user_data);

void on_button_retour_disponibilite_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_entrer_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_entrer_modifier_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_entrer_supprimer_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_retour_supprimer_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_retour_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_ajouter_disponibilites_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_retour_ajouter_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_supprimer_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void on_button_modifier_disponiblites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);

void supprimer_dispo(char jour[50], char mois[50], char annee[50], char Heurs [50]);



void on_button_retour_modifier_disponibilites_medecin_clicked(GtkWidget *objet_graphique,gpointer user_data);
