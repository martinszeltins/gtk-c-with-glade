#include <gtk/gtk.h>

GtkWidget  * mainWindow;
GtkWidget  * fixed1;
GtkWidget  * button1;
GtkWidget  * label1;
GtkBuilder * builder; 

int main(int argc, char * argv[])
{
	gtk_init(&argc, &argv);

	builder = gtk_builder_new_from_file("UI.glade");

	mainWindow  = GTK_WIDGET(gtk_builder_get_object(builder, "mainWindow"));
	fixed1      = GTK_WIDGET(gtk_builder_get_object(builder, "fixed1"));
	button1     = GTK_WIDGET(gtk_builder_get_object(builder, "button1"));
	label1      = GTK_WIDGET(gtk_builder_get_object(builder, "label1"));

	g_signal_connect(mainWindow, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    gtk_builder_connect_signals(builder, NULL);

	gtk_widget_show(mainWindow);

	gtk_main();
}

void on_button1_clicked (GtkButton * button)
{
	gtk_label_set_text(GTK_LABEL(label1), (const gchar* ) "I am a label");
}