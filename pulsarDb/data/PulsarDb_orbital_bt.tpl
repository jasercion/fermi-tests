# Extension of Pulsar Ephemerides Database to store orbital ephemerides of the BT model
XTENSION     = 'BINTABLE'                  / binary table extension
BITPIX       = 8                           / 8-bit bytes
NAXIS        = 2                           / 2-dimensional binary table
NAXIS1       =                             / width of table in bytes
NAXIS2       =                             / number of rows in table
PCOUNT       =                             / size of special data area
GCOUNT       = 1                           / one data group (required keyword)
TFIELDS      =                             / number of fields in each row
CHECKSUM     = ''                          / checksum for entire HDU
DATASUM      = ''                          / checksum for data table
TELESCOP     = 'GLAST'                     / name of telescope generating data
INSTRUME     = 'LAT'                       / name of instrument generating data
EQUINOX      = 2000.0                      / equinox for ra and dec
RADECSYS     = 'FK5'                       / world coord. system for this file (FK5 or FK4)
DATE         =                             / file creation date (YYYY-MM-DDThh:mm:ss UT)
EXTNAME      = 'ORBITAL_PARAMETERS'        / name of this binary table extension
EPHSTYLE     = 'BT'                        / name of binary orbital model
PDBTGEN      = 2                           / second generation table of pulsar ephemerides database
TTYPE1       = 'PSRNAME'                   / pulsar name in PSR Jxxxx+xx[xx[aa]] format whenever available, or in any format otherwise
TFORM1       = '32A'                       / data format of field: character
TTYPE2       = 'PB'                        / orbital period
TFORM2       = 'D'                         / data format of field: 8-byte DOUBLE
TUNIT2       = 's'                         / physical unit of field
TTYPE3       = 'PBDOT'                     / first time derivative of PB (orbital period)
TFORM3       = 'D'                         / data format of field: 4-byte REAL
TUNIT3       = ''                          / physical unit of field: dimensionless
TTYPE4       = 'A1'                        / projected semi-major axis in light seconds
TFORM4       = 'D'                         / data format of field: 8-byte DOUBLE
TUNIT4       = 'lt-s'                      / physical unit of field
TTYPE5       = 'XDOT'                      / first time derivative of A1 (projected semi-major axis)
TFORM5       = 'D'                         / data format of field: 8-byte DOUBLE
TUNIT5       = 'lt-s / s'                  / physical unit of field
TTYPE6       = 'ECC'                       / orbital eccentricity
TFORM6       = 'D'                         / data format of field: 8-byte DOUBLE
TUNIT6       = ''                          / physical unit of field: dimensionless
TTYPE7       = 'ECCDOT'                    / first time derivative of E (eccentricity)
TFORM7       = 'D'                         / data format of field: 8-byte DOUBLE
TUNIT7       = 's**(-1)'                   / physical unit of field
TTYPE8       = 'OM'                        / longitude of periastron
TFORM8       = 'D'                         / data format of field: 8-byte DOUBLE
TUNIT8       = 'deg'                       / physical unit of field
TLMIN8       = 0.0                         / minimum value
TLMAX8       = 360.0                       / maximum value
TTYPE9       = 'OMDOT'                     / first time derivative of periastron longitude
TFORM9       = 'D'                         / data format of field: 8-byte DOUBLE
TUNIT9       = 'deg / yr'                  / physical unit of field
TTYPE10      = 'T0'                        / time of periastron in MJD (TDB)
TFORM10      = 'D'                         / data format of field: 8-byte DOUBLE
TUNIT10      = 'd'                         / physical unit of field
TTYPE11      = 'GAMMA'                     / time-dilation and gravitational redshift parameter
TFORM11      = 'D'                         / data format of field: 8-byte DOUBLE
TUNIT11      = 's'                         / physical unit of field
TTYPE12      = 'OBSERVER_CODE'             / source of orbital parameter information
TFORM12      = '4A'                        / data format of field: character
TTYPE13      = 'SOLAR_SYSTEM_EPHEMERIS'    / name of solar system ephemeris used for barycentric corrections ("JPL DE200" or "JPL DE405")
TFORM13      = '32A'                       / data format of field: character
END
