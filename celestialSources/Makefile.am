SUBDIRS = EarthPhenom \
	eblAtten \
	genericSources \
	GRBobs \
	GRBtemplate \
	microQuasar

bin_PROGRAMS = test_celestialSources
test_celestialSources_SOURCES = test.cxx
AM_LDFLAGS=-lst_app -lst_graph -lst_stream -lst_facilities -lastro -lfacilities -ltip -l${CLHEP} -l${CFITSIO} -lwcs-5.16 -lflux -lxmlBase -l${XERCES} -lGRB -lBRBtemplate -lPulsar -lSpectObj -lEarthPhenom -lwcs-5.16 -lfftpack -lsharp -lc_utils -lcxxsupport -lgsl -lgslcblas -lgomp -lhealpix_cxx
