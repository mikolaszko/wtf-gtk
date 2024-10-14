LDLIBS = $(shell pkg-config --libs gtk4)
CFLAGS = $(shell pkg-config --cflags gtk4)

smol: main.c
	$(CC) $(CFLAGS) main.c $(LDLIBS)
