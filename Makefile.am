## Process this file with automake to produce Makefile.in

INCLUDES = \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	@PACKAGE_CFLAGS@

bin_PROGRAMS = mygym3

mygym3_SOURCES = \
	main.c \
	support.c support.h \
	fonction.c fonction.h \
	interface.c interface.h \
	callbacks.c callbacks.h

mygym3_LDADD = @PACKAGE_LIBS@ $(INTLLIBS)

