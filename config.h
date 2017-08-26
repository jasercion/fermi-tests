/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if you have the `alarm' function. */
#define HAVE_ALARM 1

/* Define to 1 if you have the <fenv.h> header file. */
#define HAVE_FENV_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `dc1aResponse' library (-ldc1aResponse). */
/* #undef HAVE_LIBDC1ARESPONSE */

/* Define to 1 if you have the `EarthPhenom' library (-lEarthPhenom). */
/* #undef HAVE_LIBEARTHPHENOM */

/* Define to 1 if you have the `eblAtten' library (-leblAtten). */
/* #undef HAVE_LIBEBLATTEN */

/* Define to 1 if you have the `evtUtils' library (-levtUtils). */
/* #undef HAVE_LIBEVTUTILS */

/* Define to 1 if you have the `genericSources' library (-lgenericSources). */
/* #undef HAVE_LIBGENERICSOURCES */

/* Define to 1 if you have the `GRBobs' library (-lGRBobs). */
/* #undef HAVE_LIBGRBOBS */

/* Define to 1 if you have the `GRBtemplate' library (-lGRBtemplate). */
/* #undef HAVE_LIBGRBTEMPLATE */

/* Define to 1 if you have the `gsl' library (-lgsl). */
/* #undef HAVE_LIBGSL */

/* Define to 1 if you have the `gslcblas' library (-lgslcblas). */
/* #undef HAVE_LIBGSLCBLAS */

/* Define to 1 if you have the `healpix_cxx' library (-lhealpix_cxx). */
/* #undef HAVE_LIBHEALPIX_CXX */

/* Define to 1 if you have the `irfInterface' library (-lirfInterface). */
/* #undef HAVE_LIBIRFINTERFACE */

/* Define to 1 if you have the `irfLoader' library (-lirfLoader). */
/* #undef HAVE_LIBIRFLOADER */

/* Define to 1 if you have the `irfUtil' library (-lirfUtil). */
/* #undef HAVE_LIBIRFUTIL */

/* Define to 1 if you have the `latResponse' library (-llatResponse). */
/* #undef HAVE_LIBLATRESPONSE */

/* Define to 1 if you have the `microQuasar' library (-lmicroQuasar). */
/* #undef HAVE_LIBMICROQUASAR */

/* Define to 1 if you have the `SpectObj' library (-lSpectObj). */
/* #undef HAVE_LIBSPECTOBJ */

/* Define to 1 if you have the `testResponse' library (-ltestResponse). */
/* #undef HAVE_LIBTESTRESPONSE */

/* Define to 1 if you have the `TreePlayer' library (-lTreePlayer). */
/* #undef HAVE_LIBTREEPLAYER */

/* Define to 1 if you have the `xmlBase' library (-lxmlBase). */
/* #undef HAVE_LIBXMLBASE */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkdir' function. */
#define HAVE_MKDIR 1

/* Define to 1 if you have the `modf' function. */
#define HAVE_MODF 1

/* Define to 1 if you have the `pow' function. */
/* #undef HAVE_POW */

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `sqrt' function. */
/* #undef HAVE_SQRT */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Name of package */
#define PACKAGE "fermi_tests"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "joseph.a.asercion@nasa.gov"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Fermi_Tests"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Fermi_Tests 1.0.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "fermi_tests"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.0.0"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Version number of package */
#define VERSION "1.0.0"

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
