#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([Fermi Tests], [1.0.0], [joseph.a.asercion@nasa.gov])
AM_INIT_AUTOMAKE([-Wall -Werror])
AC_CONFIG_SRCDIR([catalogAccess/main_test.cxx])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC

# Checks for libraries.
# FIXME: Replace `main' with a function in `-lEarthPhenom':
AC_CHECK_LIB([EarthPhenom], [main])
# FIXME: Replace `main' with a function in `-lGRBobs':
AC_CHECK_LIB([GRBobs], [main])
# FIXME: Replace `main' with a function in `-lGRBtemplate':
AC_CHECK_LIB([GRBtemplate], [main])
# FIXME: Replace `main' with a function in `-lSpectObj':
AC_CHECK_LIB([SpectObj], [main])
# FIXME: Replace `main' with a function in `-leblAtten':
AC_CHECK_LIB([eblAtten], [main])
# FIXME: Replace `main' with a function in `-lgenericSources':
AC_CHECK_LIB([genericSources], [main])
# FIXME: Replace `main' with a function in `-lgsl':
AC_CHECK_LIB([gsl], [main])
# FIXME: Replace `main' with a function in `-lgslcblas':
AC_CHECK_LIB([gslcblas], [main])
# FIXME: Replace `main' with a function in `-lhealpix_cxx':
AC_CHECK_LIB([healpix_cxx], [main])
# FIXME: Replace `main' with a function in `-lmicroQuasar':
AC_CHECK_LIB([microQuasar], [main])

# Checks for header files.
AC_CHECK_HEADERS([fenv.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE
AC_C_RESTRICT
AC_TYPE_SIZE_T

# Checks for library functions.
AC_FUNC_ERROR_AT_LINE
AC_FUNC_MKTIME
AC_CHECK_FUNCS([mkdir modf pow select sqrt])

AC_CONFIG_FILES([celestialSources/EarthPhenom/Makefile
                 celestialSources/GRBobs/Makefile
                 celestialSources/GRBtemplate/Makefile
                 celestialSources/eblAtten/Makefile
                 celestialSources/genericSources/Makefile
                 celestialSources/microQuasar/Makefile
                 test-scripts/data/Makefile
                 test-scripts/data/outref/Makefile])
AC_OUTPUT
