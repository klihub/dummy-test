SUBDIRS      = .
AM_CFLAGS    = $(WARNING_CFLAGS) $(AM_CPPFLAGS) $(PATHDEFS)
AM_CPPFLAGS  = -I$(top_builddir) -I$(top_builddir)/src \
               -I$(top_srcdir) -I$(top_srcdir)/src
bin_PROGRAMS =

#############################################
# dummy-test
#

bin_PROGRAMS      += dummy-test

dummy_test_SOURCES = dummy-test.c
dummy_test_CFLAGS  = $(AM_CFLAGS)
dummy_test_LDADD   =

# cleanup
clean-local:
	-rm -f *~
