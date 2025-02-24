#include <float.h>
#include <limits.h>

/*
 * Define X before including this file to expand to something.
 */
X(char, CHAR_MAX, char);
X(signed char, SCHAR_MIN, schar);
X(unsigned char, UCHAR_MAX, uchar);
X(short, SHRT_MIN, short);
X(unsigned short, USHRT_MAX, ushort);
X(int, INT_MIN, int);
X(unsigned int, UINT_MAX, uint);
X(long, LONG_MIN, long);
X(unsigned long, ULONG_MAX, ulong);
X(long long, LLONG_MIN, long_long);
X(unsigned long long, ULLONG_MAX, ulong_long);
X(float, FLT_MIN, float);
X(double, DBL_MIN, double);

#if defined(__SIZEOF_LONG_DOUBLE) &&				\
	((__SIZEOF_LONG_DOUBLE__ <= 4 && __HAVE_FLOAT32) ||	\
	 (__SIZEOF_LONG_DOUBLE__ <= 8 && __HAVE_FLOAT64) ||	\
	 (__SIZEOF_LONG_DOUBLE__ <= 16 && __HAVE_FLOAT128))
X(long double, LDBL_MIN, long_double);
#endif
