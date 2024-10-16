LDLIBS = $(shell pkg-config --libs gtk4)
CFLAGS = $(shell pkg-config --cflags gtk4)

ite: main.c
	$(CC) $(CFLAGS) main.c $(LDLIBS)

res:
	glib-compile-resources wtfgtk.gresource.xml --target=res.c --generate-source
