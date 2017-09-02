SUBDIRS = eblAtten \
	genericSources \
	microQuasar
	
bin_PROGRAMS = test_celestialSources
test_celestialSources_SOURCES = test.cxx
AM_LDFLAGS= -l${PYTHON} -l${HOOPS} -l${PIL} -lf2c -lst_app -lst_graph -lst_stream -lst_facilities -lastro -lfacilities -ltip -l${CLHEP} -l${CFITSIO} -lwcs-5.16 -lflux -lxmlBase -l${XERCES} -lwcs-5.16 -lfftpack -lsharp -lc_utils -lcxxsupport -lgsl -lgslcblas -lgomp -lhealpix_cxx
