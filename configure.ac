
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
		 astro/data/Makefile
                 burstFit/Makefile
		 burstFit/data/Makefile
                 catalogAccess/Makefile
		 catalogAccess/data/Makefile
		 catalogAccess/data/outref/Makefile
                 celestialSources/EarthPhenom/Makefile
                 celestialSources/GRBobs/Makefile
		 celestialSources/GRBobs/data/Makefile
		 celestialSources/GRBobs/data/outref/Makefile
                 celestialSources/GRBtemplate/Makefile
		 celestialSources/GRBtemplate/data/outref/Makefile
		 celestialSources/GRBtemplate/data/Makefile
                 celestialSources/Makefile
                 celestialSources/eblAtten/Makefile
		 celestialSources/eblAtten/data/Makefile
                 celestialSources/genericSources/Makefile
		 celestialSources/genericSources/data/Makefile
		 celestialSources/genericSources/data/outref/Makefile
                 celestialSources/microQuasar/Makefile
                 dataSubselector/Makefile
		 dataSubselector/data/Makefile
		 dataSubselector/data/outref/Makefile
                 embed_python/Makefile
                 evtbin/Makefile
		 evtbin/data/Makefile
		 evtbin/data/outref/Makefile
                 facilities/Makefile
                 fitsGen/Makefile
		 fitsGen/data/Makefile
                 flux/Makefile
		 flux/data/Makefile
		 flux/data/outref/Makefile
                 healpix/Makefile
		 healpix/data/Makefile
                 irfs/Makefile
                 irfs/dc1aResponse/Makefile
		 irfs/dc1aResponse/data/Makefile
		 irfs/dc1aResponse/data/outref/Makefile
                 irfs/irfInterface/Makefile
                 irfs/irfLoader/Makefile
                 irfs/irfUtil/Makefile
                 irfs/latResponse/Makefile
		 irfs/latResponse/data/Makefile
                 irfs/testResponse/Makefile
		 irfs/testResponse/data/Makefile
		 irfs/testResponse/data/outref/Makefile
                 map_tools/Makefile
		 map_tools/data/Makefile
		 map_tools/data/outref/Makefile
                 observationSim/Makefile
		 observationSim/data/Makefile
		 observationSim/data/outref/Makefile
                 optimizers/Makefile
		 optimizers/data/Makefile
		 optimizers/data/outref/Makefile
                 orbitSim/Makefile
		 orbitSim/data/Makefile
                 periodSearch/Makefile
		 periodSearch/data/Makefile
		 periodSearch/data/outref/Makefile
                 pointlike/Makefile
		 pointlike/data/Makefile
                 pulsarDb/Makefile
		 pulsarDb/data/Makefile
		 pulsarDb/data/outref/Makefile
                 pulsePhase/Makefile
		 pulsePhase/data/Makefile
		 pulsePhase/data/outref/Makefile
                 rspgen/Makefile
		 rspgen/data/Makefile
		 rspgen/data/outref/Makefile
                 skymaps/Makefile
		 skymaps/data/Makefile
		 st_app/Makefile
                 st_facilities/Makefile
                 st_graph/Makefile
                 st_stream/Makefile
		 st_stream/data/Makefile
		 st_stream/data/outref/Makefile
                 timeSystem/Makefile
		 timeSystem/data/Makefile
		 timeSystem/data/outref/Makefile
                 tip/Makefile
		 tip/data/Makefile
		 tip/data/outref/Makefile
		 test-scripts/Makefile
		 test-scripts/data/Makefile
		 test-scripts/data/outref/Makefile
                 xmlBase/Makefile
		 xmlBase/data/Makefile
		 xmlBase/data/outref/Makefile])
AC_OUTPUT
