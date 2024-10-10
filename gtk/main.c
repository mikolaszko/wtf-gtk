#include <gtk/gtk.h>

static void app_activate(GApplication *app, gpointer *user_data) {
  g_print("GtkApplication is activated.\n");
}

int main(int argc, char **argv) {
  GtkApplication *app;
  int stat;

  app = gtk_application_new("com.github.mikolaszko.ste",
                            G_APPLICATION_FLAGS_NONE);
  g_signal_connect(app, "activate", G_CALLBACK(app_activate), NULL);
  stat = g_application_run(G_APPLICATION(app), argc, argv);
  g_object_unref(app);
  return stat;
}
