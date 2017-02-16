#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([dummy-test], [0.0.1], [dummy@test])
AC_CONFIG_SRCDIR([src/dummy-test.c])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([-Wno-portability subdir-objects foreign])

AC_SUBST(ACLOCAL_AMFLAGS, "-I m4")

# Checks for programs.
AC_PROG_CC
AC_PROG_CC_C99
AC_PROG_INSTALL

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([unistd.h string.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_UID_T

# Checks for library functions.
AC_CHECK_FUNCS([strrchr])

AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT
