/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#include <gtk/gtk.h>

#include "interface.h"

void svm_toy_initialize();

int main (int argc, char *argv[])
{
  GtkWidget *window1;

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  window1 = create_window1 ();
  gtk_widget_show (window1);

  svm_toy_initialize();

  gtk_main ();
  return 0;
}
