#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([Fermi_Tests], [1.0.0], [joseph.a.asercion@nasa.gov])
AM_INIT_AUTOMAKE([foreign -Wall -Werror])
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
# FIXME: Replace `main' with a function in `-lTreePlayer':
AC_CHECK_LIB([TreePlayer], [main])
# FIXME: Replace `main' with a function in `-ldc1aResponse':
AC_CHECK_LIB([dc1aResponse], [main])
# FIXME: Replace `main' with a function in `-leblAtten':
AC_CHECK_LIB([eblAtten], [main])
# FIXME: Replace `main' with a function in `-levtUtils':
AC_CHECK_LIB([evtUtils], [main])
# FIXME: Replace `main' with a function in `-lgenericSources':
AC_CHECK_LIB([genericSources], [main])
# FIXME: Replace `main' with a function in `-lgsl':
AC_CHECK_LIB([gsl], [main])
# FIXME: Replace `main' with a function in `-lgslcblas':
AC_CHECK_LIB([gslcblas], [main])
# FIXME: Replace `main' with a function in `-lhealpix_cxx':
AC_CHECK_LIB([healpix_cxx], [main])
# FIXME: Replace `main' with a function in `-lirfInterface':
AC_CHECK_LIB([irfInterface], [main])
# FIXME: Replace `main' with a function in `-lirfLoader':
AC_CHECK_LIB([irfLoader], [main])
# FIXME: Replace `main' with a function in `-lirfUtil':
AC_CHECK_LIB([irfUtil], [main])
# FIXME: Replace `main' with a function in `-llatResponse':
AC_CHECK_LIB([latResponse], [main])
# FIXME: Replace `main' with a function in `-lmicroQuasar':
AC_CHECK_LIB([microQuasar], [main])
# FIXME: Replace `main' with a function in `-ltestResponse':
AC_CHECK_LIB([testResponse], [main])
# FIXME: Replace `main' with a function in `-lxmlBase':
AC_CHECK_LIB([xmlBase], [main])

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

AC_CONFIG_FILES([Likelihood/Makefile
                 Makefile
                 astro/Makefile
                 burstFit/Makefile
                 catalogAccess/Makefile
                 celestialSources/EarthPhenom/Makefile
                 celestialSources/GRBobs/Makefile
                 celestialSources/GRBtemplate/Makefile
                 celestialSources/Makefile
                 celestialSources/eblAtten/Makefile
                 celestialSources/genericSources/Makefile
                 celestialSources/microQuasar/Makefile
                 dataSubselector/Makefile
                 embed_python/Makefile
                 evtbin/Makefile
                 facilities/Makefile
                 fitsGen/Makefile
                 flux/Makefile
                 healpix/Makefile
                 irfs/Makefile
                 irfs/dc1aResponse/Makefile
                 irfs/irfInterface/Makefile
                 irfs/irfLoader/Makefile
                 irfs/irfUtil/Makefile
                 irfs/latResponse/Makefile
                 irfs/testResponse/Makefile
                 map_tools/Makefile
                 observationSim/Makefile
                 optimizers/Makefile
                 orbitSim/Makefile
                 periodSearch/Makefile
                 pointlike/Makefile
                 pulsarDb/Makefile
                 pulsePhase/Makefile
                 rspgen/Makefile
                 skymaps/Makefile
                 st_app/Makefile
                 st_facilities/Makefile
                 st_graph/Makefile
                 st_stream/Makefile
                 timeSystem/Makefile
                 tip/Makefile
		 test-scripts/Makefile
		 test-scripts/data/Makefile
		 test-scripts/data/outref/Makefile
                 xmlBase/Makefile])
AC_OUTPUT
